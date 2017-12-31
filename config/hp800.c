/* Subroutines for insn-output.c for HPPA.
   Copyright (C) 1992 Free Software Foundation, Inc.
   Contributed by Tim Moore (moore@cs.utah.edu), based on out-sparc.c

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

#include <stdio.h>
#include "config.h"
#include "rtl.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"
#include "conditions.h"
#include "insn-flags.h"
#include "output.h"
#include "insn-attr.h"
#include "flags.h"
#include "tree.h"
#include "c-tree.h"

/* Save the operands last given to a compare for use when we
   generate a scc or bcc insn.  */

rtx hppa_compare_op0, hppa_compare_op1;
enum cmp_type hppa_branch_type;

/* Global variables set by FUNCTION_PROLOGUE.  */
/* Size of frame.  Need to know this to emit return insns from
   leaf procedures.  */
int apparent_fsize;
int actual_fsize;

/* Name of where we pretend to think the frame pointer points.
   Normally, this is "4", but if we are in a leaf procedure,
   this is "something(30)".  Will this work? */
char *frame_base_name;

static rtx find_addr_reg ();

/* Return non-zero only if OP is a register of mode MODE,
   or const0_rtx.  */
int
reg_or_0_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (op == const0_rtx || register_operand (op, mode));
}

int
call_operand_address (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (REG_P (op) || CONSTANT_P (op));
}

int
symbolic_operand (op, mode)
     register rtx op;
     enum machine_mode mode;
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      return 1;
    case CONST:
      op = XEXP (op, 0);
      return ((GET_CODE (XEXP (op, 0)) == SYMBOL_REF
	       || GET_CODE (XEXP (op, 0)) == LABEL_REF)
	      && GET_CODE (XEXP (op, 1)) == CONST_INT);
    default:
      return 0;
    }
}

/* Return truth value of statement that OP is a symbolic memory
   operand of mode MODE.  */

int
symbolic_memory_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  if (GET_CODE (op) != MEM)
    return 0;
  op = XEXP (op, 0);
  return (GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == CONST
	  || GET_CODE (op) == HIGH || GET_CODE (op) == LABEL_REF);
}

/* Return 1 if the operand is either a register or a memory operand that is
   not symbolic.  */

int
reg_or_nonsymb_mem_operand (op, mode)
    register rtx op;
    enum machine_mode mode;
{
  if (register_operand (op, mode))
    return 1;

  if (memory_operand (op, mode) && ! symbolic_memory_operand (op, mode))
    return 1;

  return 0;
}

int
move_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  if (register_operand (op, mode))
    return 1;

  if (op == CONST0_RTX (mode))
    return 1;

  if (GET_MODE (op) != mode)
    return 0;
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  if (GET_CODE (op) != MEM)
    return 0;

  op = XEXP (op, 0);
  if (GET_CODE (op) == LO_SUM)
    return (register_operand (XEXP (op, 0), Pmode)
	    && CONSTANT_P (XEXP (op, 1)));
  return memory_address_p (mode, op);
}

int
pic_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return flag_pic && GET_CODE (op) == LABEL_REF;
}

int
short_memory_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  if (GET_CODE (op) == MEM)
    {
      if (GET_CODE (XEXP (op, 0)) == REG)
	return 1;
      else if (GET_CODE (XEXP (op, 0)) == PLUS)
	{
	  rtx op1 = XEXP (XEXP (op, 0), 0);
	  rtx op2 = XEXP (XEXP (op, 0), 1);

	  if (GET_CODE (op1) == REG)
	    return (GET_CODE (op2) == CONST_INT && INT_5_BITS (op2));
	  else if (GET_CODE (op2) == REG)
	    return (GET_CODE (op1) == CONST_INT && INT_5_BITS (op1));
	}
    }
  return 0;
}

int
register_or_short_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  if (register_operand (op, mode))
    return 1;
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  return short_memory_operand (op, mode);
}

int
fp_reg_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return reg_renumber && FP_REG_P (op);
}

extern int current_function_uses_pic_offset_table;
extern rtx force_reg (), validize_mem ();

/* The rtx for the global offset table which is a special form
   that *is* a position independent symbolic constant.  */
rtx pic_pc_rtx;

/* Ensure that we are not using patterns that are not OK with PIC.  */

int
check_pic (i)
     int i;
{
  extern rtx recog_operand[];
  switch (flag_pic)
    {
    case 1:
      if (GET_CODE (recog_operand[i]) == SYMBOL_REF
	  || (GET_CODE (recog_operand[i]) == CONST
	      && ! rtx_equal_p (pic_pc_rtx, recog_operand[i])))
	abort ();
    case 2:
    default:
      return 1;
    }
}

/* Return truth value of whether OP is EQ or NE.  */

int
eq_or_neq (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (GET_CODE (op) == EQ || GET_CODE (op) == NE);
}

/* Return truth value of whether OP can be used as an operands in a three
   address arithmetic insn (such as add %o1,7,%l2) of mode MODE.  */

int
arith_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (register_operand (op, mode)
	  || (GET_CODE (op) == CONST_INT && INT_14_BITS (op)));
}

int
arith_double_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (register_operand (op, mode)
	  || (GET_CODE (op) == CONST_DOUBLE
	      && GET_MODE (op) == mode
	      && VAL_14_BITS_P (CONST_DOUBLE_LOW (op))
	      && (CONST_DOUBLE_HIGH (op) >= 0
		  == ((CONST_DOUBLE_LOW (op) & 0x1000) == 0))));
}

/* Return truth value of whether OP is a integer which fits the
   range constraining immediate operands in three-address insns.  */

int
int5_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (GET_CODE (op) == CONST_INT && INT_5_BITS (op));
}

int
uint5_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (GET_CODE (op) == CONST_INT && INT_U5_BITS (op));
}

  
int
int11_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
    return (GET_CODE (op) == CONST_INT && INT_11_BITS (op));
}

int
arith5_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return register_operand (op, mode) || int5_operand (op, mode);
}

/* Return truth value of statement that OP is a call-clobbered register.  */
int
clobbered_register (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (GET_CODE (op) == REG && call_used_regs[REGNO (op)]);
}

/* Legitimize PIC addresses.  If the address is already
   position-independent, we return ORIG.  Newly generated
   position-independent addresses go to REG.  If we need more
   than one register, we lose.  */

rtx
legitimize_pic_address (orig, mode, reg)
     rtx orig, reg;
     enum machine_mode mode;
{
  rtx pic_ref = orig;

  if (GET_CODE (orig) == SYMBOL_REF)
    {
      if (reg == 0)
	abort ();

      if (flag_pic == 2)
	{
	  emit_insn (gen_rtx (SET, VOIDmode, reg,
			      gen_rtx (HIGH, Pmode, orig)));
	  emit_insn (gen_rtx (SET, VOIDmode, reg,
			      gen_rtx (LO_SUM, Pmode, reg, orig)));
	  orig = reg;
	}
      pic_ref = gen_rtx (MEM, Pmode,
			 gen_rtx (PLUS, Pmode,
				  pic_offset_table_rtx, orig));
      current_function_uses_pic_offset_table = 1;
      RTX_UNCHANGING_P (pic_ref) = 1;
      emit_move_insn (reg, pic_ref);
      return reg;
    }
  else if (GET_CODE (orig) == CONST)
    {
      rtx base, offset;

      if (GET_CODE (XEXP (orig, 0)) == PLUS
	  && XEXP (XEXP (orig, 0), 0) == pic_offset_table_rtx)
	return orig;

      if (reg == 0)
	abort ();

      if (GET_CODE (XEXP (orig, 0)) == PLUS)
	{
	  base = legitimize_pic_address (XEXP (XEXP (orig, 0), 0), Pmode, reg);
	  orig = legitimize_pic_address (XEXP (XEXP (orig, 0), 1), Pmode,
					 base == reg ? 0 : reg);
	}
      else abort ();
      if (GET_CODE (orig) == CONST_INT)
	{
	  if (SMALL_INT (orig))
	    return plus_constant_for_output (base, INTVAL (orig));
	  orig = force_reg (Pmode, orig);
	}
      pic_ref = gen_rtx (PLUS, Pmode, base, orig);
      /* Likewise, should we set special REG_NOTEs here?  */
    }
  return pic_ref;
}

/* Set up PIC-specific rtl.  This should not cause any insns
   to be emitted.  */

void
initialize_pic ()
{
}

/* Emit special PIC prologues and epilogues.  */

void
finalize_pic ()
{
  /* The table we use to reference PIC data.  */
  rtx global_offset_table;
  /* Labels to get the PC in the prologue of this function.  */
  rtx l1, l2;
  rtx seq;
  int orig_flag_pic = flag_pic;

  if (current_function_uses_pic_offset_table == 0)
    return;

  if (! flag_pic)
    abort ();

  flag_pic = 0;
  l1 = gen_label_rtx ();
  l2 = gen_label_rtx ();

  start_sequence ();

  emit_label (l1);
  /* Note that we pun calls and jumps here!  */
  emit_jump_insn (gen_rtx (PARALLEL, VOIDmode,
                         gen_rtvec (2,
                                    gen_rtx (SET, VOIDmode, pc_rtx, gen_rtx (LABEL_REF, VOIDmode, l2)),
                                    gen_rtx (SET, VOIDmode, gen_rtx (REG, SImode, 15), gen_rtx (LABEL_REF, VOIDmode, l2)))));
  emit_label (l2);

  /* Initialize every time through, since we can't easily
     know this to be permanent.  */
  global_offset_table = gen_rtx (SYMBOL_REF, Pmode, "*__GLOBAL_OFFSET_TABLE_");
  pic_pc_rtx = gen_rtx (CONST, Pmode,
			gen_rtx (MINUS, Pmode,
				 global_offset_table,
				 gen_rtx (CONST, Pmode,
					  gen_rtx (MINUS, Pmode,
						   gen_rtx (LABEL_REF, VOIDmode, l1),
						   pc_rtx))));

  emit_insn (gen_rtx (SET, VOIDmode, pic_offset_table_rtx,
		      gen_rtx (HIGH, Pmode, pic_pc_rtx)));
  emit_insn (gen_rtx (SET, VOIDmode,
		      pic_offset_table_rtx,
		      gen_rtx (LO_SUM, Pmode,
			       pic_offset_table_rtx, pic_pc_rtx)));
  emit_insn (gen_rtx (SET, VOIDmode,
		      pic_offset_table_rtx,
		      gen_rtx (PLUS, SImode,
			       pic_offset_table_rtx, gen_rtx (REG, SImode, 15))));
  /* emit_insn (gen_rtx (ASM_INPUT, VOIDmode, "!#PROLOGUE# 1")); */
  LABEL_PRESERVE_P (l1) = 1;
  LABEL_PRESERVE_P (l2) = 1;
  flag_pic = orig_flag_pic;

  seq = gen_sequence ();
  end_sequence ();
  emit_insn_after (seq, get_insns ());

  /* Need to emit this whether or not we obey regdecls,
     since setjmp/longjmp can cause life info to screw up.  */
  emit_insn (gen_rtx (USE, VOIDmode, pic_offset_table_rtx));
}

/* For the HPPA, REG and REG+CONST is cost 0
   and addresses involving symbolic constants are cost 2.

   PIC addresses are very expensive.

   It is no coincidence that this has the same structure
   as GO_IF_LEGITIMATE_ADDRESS.  */
int
hppa_address_cost (X)
     rtx X;
{
  if (GET_CODE (X) == PLUS)
      return 1;
  else if (GET_CODE (X) == LO_SUM)
    return 1;
  else if (GET_CODE (X) == HIGH)
    return 2;
  return 4;
}

/* Emit insns to move operands[1] into operands[0].

   Return 1 if we have written out everything that needs to be done to
   do the move.  Otherwise, return 0 and the caller will emit the move
   normally.  */

int
emit_move_sequence (operands, mode)
     rtx *operands;
     enum machine_mode mode;
{
  register rtx operand0 = operands[0];
  register rtx operand1 = operands[1];

  /* Handle most common case first: storing into a register.  */
  if (register_operand (operand0, mode))
    {
      if (register_operand (operand1, mode)
	  || (GET_CODE (operand1) == CONST_INT && SMALL_INT (operand1))
	  || (GET_CODE (operand1) == HIGH
	      && !symbolic_operand (XEXP (operand1, 0)))
	  /* Only `general_operands' can come here, so MEM is ok.  */
	  || GET_CODE (operand1) == MEM)
	{
	  /* Run this case quickly.  */
	  emit_insn (gen_rtx (SET, VOIDmode, operand0, operand1));
	  return 1;
	}
    }
  else if (GET_CODE (operand0) == MEM)
    {
      if (register_operand (operand1, mode) || operand1 == const0_rtx)
	{
	  /* Run this case quickly.  */
	  emit_insn (gen_rtx (SET, VOIDmode, operand0, operand1));
	  return 1;
	}
      if (! reload_in_progress)
	{
	  operands[0] = validize_mem (operand0);
	  operands[1] = operand1 = force_reg (mode, operand1);
	}
    }

  /* Simplify the source if we need to.  */
#if 0
  if (GET_CODE (operand1) == HIGH
      && symbolic_operand (XEXP (operand1, 0), mode)
      && !read_only_operand (XEXP (operand1, 0)))
    {
      rtx temp = reload_in_progress ? operand0 : gen_reg_rtx(mode);
      
      emit_insn (gen_rtx (SET, VOIDmode, temp, operand1));
      emit_insn (gen_rtx (SET, VOIDmode,
			  operand0,
			  gen_rtx (PLUS, mode,
				   temp, gen_rtx (REG, mode, 27))));
      return 1;
    }
#endif
  if (GET_CODE (operand1) != HIGH && immediate_operand (operand1, mode))
    {
      if (symbolic_operand (operand1, mode))
	{
	  if (flag_pic)
	    {
	      rtx temp = reload_in_progress ? operand0 : gen_reg_rtx (Pmode);
	      operands[1] = legitimize_pic_address (operand1, mode, temp);
	    }
	  /* On the HPPA, references to data space are supposed to */
	  /* use dp, register 27. */
	  else if (read_only_operand (operand1))
	    {
	      emit_insn (gen_rtx (SET, VOIDmode,
				  operand0,
				  gen_rtx (HIGH, mode, operand1)));
	      emit_insn (gen_rtx (SET, VOIDmode,
				  operand0,
				  gen_rtx (LO_SUM, mode, operand0, operand1)));
	      return 1;
	    }
	  else
	    {
	      /* If reload_in_progress, we can't use addil and r1; we */
	      /* have to use the more expensive ldil sequence. */
	      if (reload_in_progress)
		{
		  emit_insn (gen_rtx (SET, VOIDmode,
				      operand0,
				      gen_rtx (HIGH, mode, operand1)));
		  emit_insn (gen_rtx (SET, VOIDmode,
				      operand0,
				      gen_rtx (PLUS, mode,
					       operand0,
					       gen_rtx (REG, mode, 27))));
		  emit_insn (gen_rtx (SET, VOIDmode,
				      operand0,
				      gen_rtx (LO_SUM, mode,
					       operand0, operand1)));
		}
	      else
		{
		  rtx temp1 = gen_reg_rtx (mode), temp2 = gen_reg_rtx (mode);

		  emit_insn (gen_rtx (SET, VOIDmode,
				      temp1, gen_rtx (HIGH, mode, operand1)));
		  emit_insn (gen_rtx (SET, VOIDmode,
				      temp2,
				      gen_rtx (PLUS, mode,
					       gen_rtx (REG, mode, 27),
					       temp1)));
		  emit_insn (gen_rtx (SET, VOIDmode,
				      operand0,
				      gen_rtx (LO_SUM, mode,
					       temp2, operand1)));
		}
	      return 1;
	    }
	}
      else if (GET_CODE (operand1) == CONST_INT
	       ? (! SMALL_INT (operand1)
		  && (INTVAL (operand1) & 0x7ff) != 0) : 1)
	{
	  rtx temp = reload_in_progress ? operand0 : gen_reg_rtx (mode);
	  emit_insn (gen_rtx (SET, VOIDmode, temp,
			      gen_rtx (HIGH, mode, operand1)));
	  operands[1] = gen_rtx (LO_SUM, mode, temp, operand1);
	}
    }
  /* Now have insn-emit do whatever it normally does.  */
  return 0;
}

/* Does operand (which is a symbolic_operand) live in text space? If
   so SYMBOL_REF_FLAG, which is set by ENCODE_SECTION_INFO, will be true.*/

int
read_only_operand (operand)
     rtx operand;
{
  if (GET_CODE (operand) == CONST)
    operand = XEXP (XEXP (operand, 0), 0);
  if (GET_CODE (operand) == SYMBOL_REF)
    return SYMBOL_REF_FLAG (operand) || CONSTANT_POOL_ADDRESS_P (operand);
  return 1;
}
     

/* Return the best assembler insn template
   for moving operands[1] into operands[0] as a fullword.  */

static char *
singlemove_string (operands)
     rtx *operands;
{
  if (GET_CODE (operands[0]) == MEM)
    return "stw %r1,%0";
  if (GET_CODE (operands[1]) == MEM)
    return "ldw %1,%0";
  if (GET_CODE (operands[1]) == CONST_INT)
    if (INT_14_BITS (operands[1]))
      return (INTVAL (operands[1]) == 0 ? "copy 0,%0" : "ldi %1,%0");
    else
      return "ldil L'%1,%0\n\tldo R'%1(%0),%0";
  return "copy %1,%0";
}


/* Output assembler code to perform a doubleword move insn
   with operands OPERANDS.  */

char *
output_move_double (operands)
     rtx *operands;
{
  enum { REGOP, OFFSOP, MEMOP, PUSHOP, POPOP, CNSTOP, RNDOP } optype0, optype1;
  rtx latehalf[2];
  rtx addreg0 = 0, addreg1 = 0;

  /* First classify both operands.  */

  if (REG_P (operands[0]))
    optype0 = REGOP;
  else if (offsettable_memref_p (operands[0]))
    optype0 = OFFSOP;
  else if (GET_CODE (operands[0]) == MEM)
    optype0 = MEMOP;
  else
    optype0 = RNDOP;

  if (REG_P (operands[1]))
    optype1 = REGOP;
  else if (CONSTANT_P (operands[1])
	   || GET_CODE (operands[1]) == CONST_DOUBLE)
    optype1 = CNSTOP;
  else if (offsettable_memref_p (operands[1]))
    optype1 = OFFSOP;
  else if (GET_CODE (operands[1]) == MEM)
    optype1 = MEMOP;
  else
    optype1 = RNDOP;

  /* Check for the cases that the operand constraints are not
     supposed to allow to happen.  Abort if we get one,
     because generating code for these cases is painful.  */

  if (optype0 == RNDOP || optype1 == RNDOP)
    abort ();

  /* If an operand is an unoffsettable memory ref, find a register
     we can increment temporarily to make it refer to the second word.  */

  if (optype0 == MEMOP)
    addreg0 = find_addr_reg (operands[0]);

  if (optype1 == MEMOP)
    addreg1 = find_addr_reg (operands[1]);

  /* Ok, we can do one word at a time.
     Normally we do the low-numbered word first,
     but if either operand is autodecrementing then we
     do the high-numbered word first.

     In either case, set up in LATEHALF the operands to use
     for the high-numbered word and in some cases alter the
     operands in OPERANDS to be suitable for the low-numbered word.  */

  if (optype0 == REGOP)
    latehalf[0] = gen_rtx (REG, SImode, REGNO (operands[0]) + 1);
  else if (optype0 == OFFSOP)
    latehalf[0] = adj_offsettable_operand (operands[0], 4);
  else
    latehalf[0] = operands[0];

  if (optype1 == REGOP)
    latehalf[1] = gen_rtx (REG, SImode, REGNO (operands[1]) + 1);
  else if (optype1 == OFFSOP)
    latehalf[1] = adj_offsettable_operand (operands[1], 4);
  else if (optype1 == CNSTOP)
    {
      if (CONSTANT_P (operands[1]))
	latehalf[1] = const0_rtx;
      else if (GET_CODE (operands[1]) == CONST_DOUBLE)
	{
	  latehalf[1] = gen_rtx (CONST_INT, VOIDmode,
				 XINT (operands[1], 1));
	  operands[1] = gen_rtx (CONST_INT, VOIDmode,
				 XINT (operands[1], 0));
	}
    }
  else
    latehalf[1] = operands[1];

  /* If the first move would clobber the source of the second one,
     do them in the other order.

     RMS says "This happens only for registers;
     such overlap can't happen in memory unless the user explicitly
     sets it up, and that is an undefined circumstance."

     but it happens on the sparc when loading parameter registers,
     so I am going to define that circumstance, and make it work
     as expected.  */

  if (optype0 == REGOP && (optype1 == MEMOP || optype1 == OFFSOP)
	   && reg_overlap_mentioned_p (operands[0], XEXP (operands[1], 0)))
    {
      /* XXX THIS PROBABLY DOESN'T WORK.  */
      /* Do the late half first.  */
      if (addreg1)
	output_asm_insn ("addi 4,%0", &addreg1);
      output_asm_insn (singlemove_string (latehalf), latehalf);
      if (addreg1)
	output_asm_insn ("addi -4,%0", &addreg1);
      /* Then clobber.  */
      return singlemove_string (operands);
    }

  /* Normal case: do the two words, low-numbered first.  */

  output_asm_insn (singlemove_string (operands), operands);

  /* Make any unoffsettable addresses point at high-numbered word.  */
  if (addreg0)
    output_asm_insn ("addi 4,%0", &addreg0);
  if (addreg1)
    output_asm_insn ("addi 4,%0", &addreg1);

  /* Do that word.  */
  output_asm_insn (singlemove_string (latehalf), latehalf);

  /* Undo the adds we just did.  */
  if (addreg0)
    output_asm_insn ("addi -4,%0", &addreg0);
  if (addreg1)
    output_asm_insn ("addi -4,%0", &addreg1);

  return "";
}

char *
output_fp_move_double (operands)
     rtx *operands;
{
  if (FP_REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	output_asm_insn ("fcpy,dbl %1,%0", operands);
      else if (GET_CODE (operands[1]) == REG)
	{
	  rtx xoperands[3];
	  xoperands[0] = operands[0];
	  xoperands[1] = operands[1];
	  xoperands[2] = gen_rtx (REG, SImode, REGNO (operands[1]) + 1);
	  output_asm_insn
	    ("stw %1,-16(0,30)\n\tstw %2,-12(0,30)\n\tfldds -16(0,30),%0",
			   xoperands);
	}
      else 
	output_asm_insn ("fldds%F1 %1,%0", operands);
    }
  else if (FP_REG_P (operands[1]))
    {
      if (GET_CODE (operands[0]) == REG)
	{
	  rtx xoperands[3];
	  xoperands[2] = operands[1];
	  xoperands[1] = gen_rtx (REG, SImode, REGNO (operands[0]) + 1);
	  xoperands[0] = operands[0];
	  output_asm_insn
	    ("fstds %2,-16(0,30)\n\tldw -12(0,30),%1\n\tldw -16(0,30),%0",
	     xoperands);
	}
      else
	output_asm_insn ("fstds%F0 %1,%0", operands);
    }
  else abort ();
  return "";
}

/* Return a REG that occurs in ADDR with coefficient 1.
   ADDR can be effectively incremented by incrementing REG.  */

static rtx
find_addr_reg (addr)
     rtx addr;
{
  while (GET_CODE (addr) == PLUS)
    {
      if (GET_CODE (XEXP (addr, 0)) == REG)
	addr = XEXP (addr, 0);
      else if (GET_CODE (XEXP (addr, 1)) == REG)
	addr = XEXP (addr, 1);
      else if (CONSTANT_P (XEXP (addr, 0)))
	addr = XEXP (addr, 1);
      else if (CONSTANT_P (XEXP (addr, 1)))
	addr = XEXP (addr, 0);
      else
	abort ();
    }
  if (GET_CODE (addr) == REG)
    return addr;
  abort ();
}

/* Load the address specified by OPERANDS[3] into the register
   specified by OPERANDS[0].

   OPERANDS[3] may be the result of a sum, hence it could either be:

   (1) CONST
   (2) REG
   (2) REG + CONST_INT
   (3) REG + REG + CONST_INT
   (4) REG + REG  (special case of 3).

   Note that (3) is not a legitimate address.
   All cases are handled here.  */

void
output_load_address (operands)
     rtx *operands;
{
  rtx base, offset;

  if (CONSTANT_P (operands[3]))
    {
      output_asm_insn ("ldi %3,%0", operands);
      return;
    }

  if (REG_P (operands[3]))
    {
      if (REGNO (operands[0]) != REGNO (operands[3]))
	output_asm_insn ("copy %3,%0", operands);
      return;
    }

  if (GET_CODE (operands[3]) != PLUS)
    abort ();

  base = XEXP (operands[3], 0);
  offset = XEXP (operands[3], 1);

  if (GET_CODE (base) == CONST_INT)
    {
      rtx tmp = base;
      base = offset;
      offset = tmp;
    }

  if (GET_CODE (offset) != CONST_INT)
    {
      /* Operand is (PLUS (REG) (REG)).  */
      base = operands[3];
      offset = const0_rtx;
    }

  if (REG_P (base))
    {
      operands[6] = base;
      operands[7] = offset;
      if (INT_14_BITS (offset))
	output_asm_insn ("ldo %7(%6),%0", operands);
      else
	output_asm_insn ("addil L'%7,%6\n\tldo R'%7(1),%0", operands);
    }
  else if (GET_CODE (base) == PLUS)
    {
      operands[6] = XEXP (base, 0);
      operands[7] = XEXP (base, 1);
      operands[8] = offset;

      if (offset == const0_rtx)
	output_asm_insn ("add %6,%7,%0", operands);
      else if (INT_14_BITS (offset))
	output_asm_insn ("add %6,%7,%0\n\taddi %8,%0", operands);
      else
	output_asm_insn ("addil L'%8,%6\n\tldo R'%8(1),%0\n\tadd %0,%7,%0", operands);
    }
  else
    abort ();
}

/* Output code to place a size count SIZE in register REG.
   ALIGN is the size of the unit of transfer.

   Because block moves are pipelined, we don't include the
   first element in the transfer of SIZE to REG.  */

static void
output_size_for_block_move (size, reg, align)
     rtx size, reg;
     rtx align;
{
  rtx xoperands[3];

  xoperands[0] = reg;
  xoperands[1] = size;
  xoperands[2] = align;
  if (GET_CODE (size) == REG)
    output_asm_insn ("ldo -%2(%1),%0", xoperands);
  else
    {
      xoperands[1]
	= gen_rtx (CONST_INT, VOIDmode, INTVAL (size) - INTVAL (align));
      if (INT_14_BITS (xoperands[1]))
	output_asm_insn ("ldi %1,%0", xoperands);
      else
	output_asm_insn ("addil L'%1,0\n\tldo R'%1(1),%0", xoperands);
    }
}

/* Emit code to perform a block move.

   OPERANDS[0] is the destination.
   OPERANDS[1] is the source.
   OPERANDS[2] is the size.
   OPERANDS[3] is the alignment safe to use.
   OPERANDS[4] is a register we can safely clobber as a temp.  */

char *
output_block_move (operands)
     rtx *operands;
{
  /* A vector for our computed operands.  Note that load_output_address
     makes use of (and can clobber) up to the 8th element of this vector.  */
  rtx xoperands[10];
  rtx zoperands[10];
  static int movstrsi_label = 0;
  int i, j;
  rtx temp1 = operands[4];
  rtx alignrtx = operands[3];
  int align = INTVAL (alignrtx);

  xoperands[0] = operands[0];
  xoperands[1] = operands[1];
  xoperands[2] = temp1;

  /* We can't move more than four bytes at a time
     because we have only one register to move them through.  */
  if (align > 4)
    {
      align = 4;
      alignrtx = gen_rtx (CONST_INT, VOIDmode, 4);
    }

  /* Since we clobber untold things, nix the condition codes.  */

  /* Recognize special cases of block moves.  These occur
     when GNU C++ is forced to treat something as BLKmode
     to keep it in memory, when its mode could be represented
     with something smaller.

     We cannot do this for global variables, since we don't know
     what pages they don't cross.  Sigh.  */
  if (GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) <= 8
      && ! CONSTANT_ADDRESS_P (operands[0])
      && ! CONSTANT_ADDRESS_P (operands[1]))
    {
      int size = INTVAL (operands[2]);

      if (align == 1)
	{
	  if (memory_address_p (QImode, plus_constant (xoperands[0], size))
	      && memory_address_p (QImode, plus_constant (xoperands[1], size)))
	    {
	      /* We will store different integers into xoperands[2].  */

	      for (i = 0; i <= size-1; i++)
		{
		  xoperands[2] = gen_rtx (CONST_INT, VOIDmode, i);
		  output_asm_insn ("ldbs %2(%1),1\n\tstbs,ma 1,1(0,%0)",
				   xoperands);
		}
	      return "";
	    }
	}
      else if (align == 2)
	{
	  if (memory_address_p (HImode, plus_constant (xoperands[0], size))
	      && memory_address_p (HImode, plus_constant (xoperands[1], size)))
	    {
	      for (i = 0 ; i <= (size>>1)-1; i++)
		{
		  xoperands[2] = gen_rtx (CONST_INT, VOIDmode, i << 1);
		  output_asm_insn ("ldhs %2(%1),1\n\tsths,ma 1,2(0,%0)",
				   xoperands);
		}
	      return "";
	    }
	}
      else
	{
	  if (memory_address_p (SImode, plus_constant (xoperands[0], size))
	      && memory_address_p (SImode, plus_constant (xoperands[1], size)))
	    {
	      for (i = 0; i <= (size>>2)-1; i++)
		{
		  xoperands[2] = gen_rtx (CONST_INT, VOIDmode, i << 2);
		  output_asm_insn ("ldws %2(%1),1\n\tstws,ma 1,4(0,%0)",
				   xoperands);
		}
	      return "";
	    }
	}
    }

  /* This is the size of the transfer.
     Either use the register which already contains the size,
     or use a free register (used by no operands).
     Also emit code to decrement the size value by ALIGN.  */
  output_size_for_block_move (operands[2], temp1, alignrtx);
     
  zoperands[0] = operands[0];
  zoperands[3] = gen_rtx (PLUS, SImode, operands[0], temp1);
  output_load_address (zoperands);

  xoperands[3] = gen_rtx (CONST_INT, VOIDmode, movstrsi_label++);
  xoperands[4] = gen_rtx (CONST_INT, VOIDmode, - align);

  if (align == 1)
    output_asm_insn ("\nLm%3\n\tldbx %2(%1),1\n\taddib,>= %4,%2,Lm%3\n\tstbs,ma 1,%4(0,%0)", xoperands);
  else if (align == 2)
    output_asm_insn ("\nLm%3\n\tldhx %2(%1),1\n\taddib,>= %4,%2,Lm%3\n\tsths,ma 1,%4(0,%0)", xoperands);
  else
    output_asm_insn ("\nLm%3\n\tldwx %2(%1),1\n\taddib,>= %4,%2,Lm%3\n\tstws,ma 1,%4(0,%0)", xoperands);
  return "";
}


/* Output an ascii string.  */
output_ascii (file, p, size)
     FILE *file;
     unsigned char *p;
     int size;
{
  int i;
  int chars_output;
  unsigned char partial_output[16];	/* Max space 4 chars can occupy.   */

  /* The HP assember can only take strings of 256 characters at one
     time.  This is a limitation on input line length, *not* the
     length of the string.  Sigh.  Even worse, it seems that the
     restricition is in number of input characters (see \xnn &
     \whatever).  So we have to do this very carefully.  */

  fprintf (file, "\t.STRING \"");

  chars_output = 0;
  for (i = 0; i < size; i += 4)
    {
      int co = 0;
      int io = 0;
      for (io = 0, co = 0; io < MIN (4, size - i); io++)
	{
	  register unsigned int c = p[i + io];

	  if (c == '\"' || c == '\\')
	    partial_output[co++] = '\\';
	  if (c >= ' ' && c < 0177)
	    partial_output[co++] = c;
	  else
	    {
	      unsigned int hexd;
	      partial_output[co++] = '\\';
	      partial_output[co++] = 'x';
	      hexd =  c  / 16 - 0 + '0';
	      if (hexd > '9')
		hexd -= '9' - 'a' + 1;
	      partial_output[co++] = hexd;
	      hexd =  c % 16 - 0 + '0';
	      if (hexd > '9')
		hexd -= '9' - 'a' + 1;
	      partial_output[co++] = hexd;
	    }
	}
      if (chars_output + co > 243)
	{
	  fprintf (file, "\"\n\t.STRING \"");
	  chars_output = 0;
	}
      fwrite (partial_output, 1, co, file);
      chars_output += co;
      co = 0;
    }
  fprintf (file, "\"\n");
}

/* You may have trouble believing this, but this is the HP825 stack
   layout.  Wow.

   Offset		Contents

   Variable arguments	(optional; any number may be allocated)

   SP-(4*(N+9))		arg word N
   	:		    :
      SP-56		arg word 5
      SP-52		arg word 4

   Fixed arguments	(must be allocated; may remain unused)

      SP-48		arg word 3
      SP-44		arg word 2
      SP-40		arg word 1
      SP-36		arg word 0

   Frame Marker

      SP-32		External Data Pointer (DP)
      SP-28		External sr4
      SP-24		External/stub RP (RP')
      SP-20		Current RP
      SP-16		Static Link
      SP-12		Clean up
      SP-8		Calling Stub RP (RP'')
      SP-4		Previous SP

   Top of Frame

      SP-0		Stack Pointer (points to next available address)

*/

/* This function saves registers as follows.  Registers marked with ' are
   this function's registers (as opposed to the previous function's).
   If a frame_pointer isn't needed, r4 is saved as a general register;
   the space for the frame pointer is still allocated, though, to keep
   things simple.


   Top of Frame

       SP (FP')		Previous FP
       SP + 4		Alignment filler (sigh)
       SP + 8		Space for locals reserved here.
       .
       .
       .
       SP + n		All call saved register used.
       .
       .
       .
       SP + o		All call saved fp registers used.
       .
       .
       .
       SP + p (SP')	points to next avaliable address.
       
*/

/* Helper functions */
void
print_stw (file, r, disp, base)
     FILE *file;
     int r, disp, base;
{
  if (VAL_14_BITS_P (disp))
    fprintf (file, "\tstw %d,%d(0,%d)\n", r, disp, base);
  else
    fprintf (file, "\taddil L'%d,%d\n\tstw %d,R'%d(0,1)\n", disp, base,
	     r, disp);
}

void
print_ldw (file, r, disp, base)
     FILE *file;
     int r, disp, base;
{
  if (VAL_14_BITS_P (disp))
    fprintf (file, "\tldw %d(0,%d),%d\n", disp, base, r);
  else
    fprintf (file, "\taddil L'%d,%d\n\tldw R'%d(0,1),%d\n", disp, base,
	     disp, r);
}

/* Set by the FUNCTION_PROFILER macro. */
int hp_profile_labelno;
extern int profile_flag;

int local_fsize, save_fregs, actual_fsize;

int
compute_frame_size (size, leaf_function)
     int size;
     int leaf_function;
{
  extern int current_function_outgoing_args_size;
  int i;

  /* 8 is space for frame pointer + filler */
  local_fsize = actual_fsize = size + 8;

  /* fp is stored in a special place. */
  for (i = 18; i >= 5; i--)
    if (regs_ever_live[i])
      actual_fsize += 4;

  if (regs_ever_live[3])
    actual_fsize += 4;
  actual_fsize = (actual_fsize + 7) & ~7;

  if (!TARGET_SNAKE)
    {
      for (i = 47; i >= 44; i--)
	if (regs_ever_live[i])
	  {
	    actual_fsize += 8;  save_fregs++;
	  }
    }
  else
    {
      for (i = 90; i >= 72; i -= 2)
	if (regs_ever_live[i] || regs_ever_live[i + 1])
	  {
	    actual_fsize += 8;  save_fregs++;
	  }
    }
  return actual_fsize + current_function_outgoing_args_size;
}
     
void
output_function_prologue (file, size, leaf_function)
     FILE *file;
     int size;
     int leaf_function;
{
  extern char call_used_regs[];
  extern int frame_pointer_needed;
  int i, offset;

   actual_fsize = compute_frame_size (size, leaf_function) + 32;
  /* Let's not try to bullshit more than we need to here. */
  /* This might be right a lot of the time */
  fprintf (file, "\t.PROC\n\t.CALLINFO FRAME=%d", actual_fsize);
    if (regs_ever_live[2])
      fprintf (file, ",CALLS,SAVE_RP\n");
    else
      fprintf (file, ",NO_CALLS\n");
  fprintf (file, "\t.ENTRY\n");

  /* Instead of taking one argument, the counter label, as most normal
     mcounts do, _mcount appears to behave differently on the HPPA. It
     takes the return address of the caller, the address of this
     routine, and the address of the label. Also, it isn't magic, so
     caller saves have to be preserved. We get around this by calling
     our own gcc_mcount, which takes arguments on the stack and saves
     argument registers. */
  
  if (profile_flag)
    {
      fprintf (file,"\tstw 2,-20(30)\n\tldo 48(30),30\n\
\taddil L'LP$%04d-$global$,27\n\tldo R'LP$%04d-$global$(1),1\n\
\tbl __gcc_mcount,2\n\tstw 1,-16(30)\n\tldo -48(30),30\n\tldw -20(30),2\n",
	       hp_profile_labelno, hp_profile_labelno);
    }
  /* Some registers have places to go in the current stack
     structure.  */

#if 0
  /* However, according to the hp docs, there's no need to save the
     sp.  */
  fprintf (file, "\tstw 30,-4(30)\n");
#endif

  if (regs_ever_live[2])
    fprintf (file, "\tstw 2,-20(0,30)\n");

  /* Reserve space for local variables.  */
  if (frame_pointer_needed)
    {
      if (VAL_14_BITS_P (actual_fsize))
	fprintf (file, "\tcopy 4,1\n\tcopy 30,4\n\tstwm 1,%d(0,30)\n",
		 actual_fsize);
      else
	{
	  fprintf (file, "\tcopy 4,1\n\tcopy 30,4\n\tstw 1,0(0,4)\n");
	  fprintf (file, "\taddil L'%d,30\n\tldo R'%d(1),30\n",
		   actual_fsize, actual_fsize);
	}
    }
  else
    /* Used to be abort ();  */
    {
      if (VAL_14_BITS_P (actual_fsize))
	fprintf (file, "\tldo %d(30),30\n", actual_fsize);
      else
	fprintf (file, "\taddil L'%d,30\n\tldo R'%d(1),30\n",
		 actual_fsize, actual_fsize);
    }
  
  /* Normal register save. */
  if (frame_pointer_needed)
    {
      for (i = 18, offset = local_fsize; i >= 5; i--)
	if (regs_ever_live[i] && ! call_used_regs[i])
	  {
	    print_stw (file, i, offset, 4);  offset += 4;
	  }
      if (regs_ever_live[3] && ! call_used_regs[3])
	{
	  print_stw (file, 3, offset, 4);  offset += 4;
	}
    }
  else
    {
      for (i = 18, offset = local_fsize - actual_fsize; i >= 5; i--)
      	if (regs_ever_live[i] && ! call_used_regs[i])
	  {
	    print_stw (file, i, offset, 30);  offset += 4;
	  }
      if (regs_ever_live[3] && ! call_used_regs[3])
	{
	  print_stw (file, 3, offset, 30);  offset += 4;
	}
    }
      
  /* Align pointer properly (doubleword boundary).  */
  offset = (offset + 7) & ~7;

  /* Floating point register store.  */
  if (save_fregs)
    if (frame_pointer_needed)
      if (VAL_14_BITS_P (offset))
	fprintf (file, "\tldo %d(4),1\n", offset);
      else
	fprintf (file, "\taddil L'%d,4\n\tldo R'%d(1),1\n", offset, offset);
    else
      if (VAL_14_BITS_P (offset))
	fprintf (file, "\tldo %d(30),1\n", offset);
      else
	fprintf (file, "\taddil L'%d,30\n\tldo R'%d(1),1\n", offset, offset);
  if (!TARGET_SNAKE)
    {
      for (i = 47; i >= 44; i--)
	{
	  if (regs_ever_live[i])
	    fprintf (file, "\tfstds,ma %s,8(0,1)\n", reg_names[i]);
	}
    }
  else
    {
      for (i = 90; i >= 72; i -= 2)
	if (regs_ever_live[i] || regs_ever_live[i + 1])
	  {
	    fprintf (file, "\tfstds,ma %s,8(0,1)\n", reg_names[i]);
	  }
    }
}

void
output_function_epilogue (file, size, leaf_function)
     FILE *file;
     int size;
     int leaf_function;
{
  extern char call_used_regs[];
  extern int frame_pointer_needed;
  int  i, offset;

  if (frame_pointer_needed)
    {
      for (i = 18, offset = local_fsize; i >= 5; i--)
	if (regs_ever_live[i] && ! call_used_regs[i])
	  {
	    print_ldw (file, i, offset, 4);  offset += 4;
	  }
      if (regs_ever_live[3] && ! call_used_regs[3])
	{
	  print_ldw (file, 3, offset, 4);  offset += 4;	  
	}
    }
  else
    {
      for (i = 18, offset = local_fsize - actual_fsize; i >= 5; i--)
      	if (regs_ever_live[i] && ! call_used_regs[i])
	  {
	    print_ldw (file, i, offset, 30);  offset += 4;
	  }
      if (regs_ever_live[3] && ! call_used_regs[3])
	{
	  print_ldw (file, 3, offset, 30);  offset += 4;
	}
    }
      
  /* Align pointer properly (doubleword boundary).  */
  offset = (offset + 7) & ~7;

  /* Floating point register restore.  */
  if (save_fregs)
    if (frame_pointer_needed)
      if (VAL_14_BITS_P (offset))
	fprintf (file, "\tldo %d(4),1\n", offset);
      else
	fprintf (file, "\taddil L'%d,4\n\tldo R'%d(1),1\n", offset, offset);
    else
      if (VAL_14_BITS_P (offset))
	fprintf (file, "\tldo %d(30),1\n", offset);
      else
	fprintf (file, "\taddil L'%d,30\n\tldo R'%d(1),1\n", offset, offset);
  if (!TARGET_SNAKE)
    {
      for (i = 47; i >= 44; i--)
	{
	  if (regs_ever_live[i])
	    fprintf (file, "\tfldds,ma 8(0,1),%s\n", reg_names[i]);
	}
    }
  else
    {
      for (i = 90; i >= 72; i -= 2)
	if (regs_ever_live[i] || regs_ever_live[i + 1])
	  {
	    fprintf (file, "\tfldds,ma 8(0,1),%s\n", reg_names[i]);
	  }
    }
  /* Reset stack pointer (and possibly frame pointer).  The stack */
  /* pointer is initially set to fp + 8 to avoid a race condition. */
  if (frame_pointer_needed)
    {
      fprintf (file, "\tldo 8(4),30\n");
      if (regs_ever_live[2])
	fprintf (file, "\tldw -28(0,30),2\n");
      fprintf (file, "\tbv 0(2)\n\tldwm -8(30),4\n");
    }
  else if (actual_fsize)
    {
      if (regs_ever_live[2] && VAL_14_BITS_P (actual_fsize + 20))
	fprintf (file, "\tldw %d(30),2\n\tbv 0(2)\n\tldo %d(30),30\n",
		 -(actual_fsize + 20), -actual_fsize);
      else if (regs_ever_live[2])
	fprintf (file,
		 "\taddil L'%d,30\n\tldw %d(1),2\n\tbv 0(2)\n\tldo R'%d(1),30\n",
		 - actual_fsize,
		 - ((actual_fsize + 20) - (actual_fsize & ~0x7ff)),
		 - actual_fsize);
      else if (VAL_14_BITS_P (actual_fsize))
	fprintf (file, "\tbv 0(2)\n\tldo %d(30),30\n", - actual_fsize);
      else
	fprintf (file, "\taddil L'%d,30\n\tbv 0(2)\n\tldo R'%d(1),30\n");
    }
  else if (current_function_epilogue_delay_list)
    {
      fprintf (file, "\tbv 0(2)\n");
      final_scan_insn (XEXP (current_function_epilogue_delay_list, 0),
		       file, write_symbols, 1, 0, 1);
    }
  else
    fprintf (file, "\tbv,n 0(2)\n");
  fprintf (file, "\t.EXIT\n\t.PROCEND\n");
}

rtx
gen_compare_reg (code, x, y)
     enum rtx_code code;
     rtx x, y;
{
  enum machine_mode mode = SELECT_CC_MODE (code, x);
  rtx cc_reg = gen_rtx (REG, mode, 0);

  emit_insn (gen_rtx (SET, VOIDmode, cc_reg,
		      gen_rtx (COMPARE, mode, x, y)));

  return cc_reg;
}

/* Return nonzero if TRIAL can go into the function epilogue's
   delay slot.  SLOT is the slot we are trying to fill.  */

int
eligible_for_epilogue_delay (trial, slot)
     rtx trial;
     int slot;
{
  if (slot >= 1)
    return 0;
  if (GET_CODE (trial) != INSN
      || GET_CODE (PATTERN (trial)) != SET)
    return 0;
  if (get_attr_length (trial) != 1)
    return 0;
  return (leaf_function &&
	  get_attr_in_branch_delay (trial) == IN_BRANCH_DELAY_TRUE);
}

rtx
gen_scond_fp (code, operand0)
     enum rtx_code code;
     rtx operand0;
{
  return gen_rtx (SET, VOIDmode, operand0,
		  gen_rtx (code, CCFPmode,
			   gen_rtx (REG, CCFPmode, 0), const0_rtx));
}

void
emit_bcond_fp (code, operand0)
     enum rtx_code code;
     rtx operand0;
{
  emit_jump_insn (gen_rtx (SET, VOIDmode, pc_rtx,
			   gen_rtx (IF_THEN_ELSE, VOIDmode,
				    gen_rtx (code, VOIDmode, 
					     gen_rtx (REG, CCFPmode, 0),
					     const0_rtx),
				    gen_rtx (LABEL_REF, VOIDmode, operand0),
				    pc_rtx)));

}

rtx
gen_cmp_fp (code, operand0, operand1)
     enum rtx_code code;
     rtx operand0, operand1;
{
  return gen_rtx (SET, VOIDmode, gen_rtx (REG, CCFPmode, 0),
		  gen_rtx (code, CCFPmode, operand0, operand1));
}


/* Print operand X (an rtx) in assembler syntax to file FILE.
   CODE is a letter or dot (`z' in `%z0') or 0 if no letter was specified.
   For `%' followed by punctuation, CODE is the punctuation and X is null.  */

void
print_operand (file, x, code)
     FILE *file;
     rtx x;
     int code;
{
  switch (code)
    {
    case '#':
      /* Output a 'nop' if there's nothing for the delay slot.  */
      if (dbr_sequence_length () == 0)
	fputs ("\n\tnop", file);
      return;
    case '*':
      /* Output an nullification completer if there's nothing for the */
      /* delay slot or nullification is requested.  */ 
      if (dbr_sequence_length () == 0 ||
	  (final_sequence &&
	   INSN_ANNULLED_BRANCH_P (XVECEXP (final_sequence, 0, 0))))
        fputs (",n", file);
      return;
    case 'R':
      /* Print out the second register name of a register pair.
	 I.e., R (6) => 7.  */
      fputs (reg_names[REGNO (x)+1], file);
      return;
    case 'r':
      /* A register or zero. */
      if (x == const0_rtx)
	{
	  fputs ("0", file);
	  return;
	}
      else
	break;
    case 'O':
      switch (GET_CODE (x))
	{
	case PLUS:
	  fprintf (file, "add%s",
		   GET_CODE (XEXP (x, 1)) == CONST_INT ? "i" : "");  break;
	case MINUS:
	  fprintf (file, "sub%s",
		   GET_CODE (XEXP (x, 0)) == CONST_INT ? "i" : "");  break;
	case AND:
	  fprintf (file, "and%s",
		   GET_CODE (XEXP (x, 1)) == NOT ? "cm" : "");  break;
	case IOR:
	  fprintf (file, "or");  break;
	case XOR:
	  fprintf (file, "xor");  break;
	case ASHIFT:
	  fprintf (file, "sh%dadd", INTVAL (XEXP (x, 1)));  break;
	  /* Too lazy to handle bitfield conditions yet.  */
	default:
	  printf ("Can't grok '%c' operator:\n", code);
	  debug_rtx (x);
	  abort ();
	}
      return;
    case 'C':
    case 'X':
      switch (GET_CODE (x))
	{	
	case EQ:
	  fprintf (file, "=");  break;
	case NE:
	  if (code == 'C')
	    fprintf (file, "<>");
	  else
	    fprintf (file, "!=");
	  break;
	case GT:
	  fprintf (file, ">");  break;
	case GE:
	  fprintf (file, ">=");  break;
	case GEU:
	  fprintf (file, ">>=");  break;
	case GTU:
	  fprintf (file, ">>");  break;
	case LT:
	  fprintf (file, "<");  break;
	case LE:
	  fprintf (file, "<=");  break;
	case LEU:
	  fprintf (file, "<<=");  break;
	case LTU:
	  fprintf (file, "<<");  break;
	default:
	  printf ("Can't grok '%c' operator:\n", code);
	  debug_rtx (x);
	  abort ();
	}
      return;
    case 'N':
    case 'Y':
      switch (GET_CODE (x))
	{
	case EQ:
	  if (code == 'N')
	    fprintf (file, "<>");
	  else
	    fprintf (file, "!=");
	  break;
	case NE:
	  fprintf (file, "=");  break;
	case GT:
	  fprintf (file, "<=");  break;
	case GE:
	  fprintf (file, "<");  break;
	case GEU:
	  fprintf (file, "<<");  break;
	case GTU:
	  fprintf (file, "<<=");  break;
	case LT:
	  fprintf (file, ">=");  break;
	case LE:
	  fprintf (file, ">");  break;
	case LEU:
	  fprintf (file, ">>");  break;
	case LTU:
	  fprintf (file, ">>=");  break;
	default:
	  printf ("Can't grok '%c' operator:\n", code);
	  debug_rtx (x);
	  abort ();
	}
      return;
    case 'M':
      switch (GET_CODE (XEXP (x, 0)))
	{
	case PRE_DEC:
	case PRE_INC:
	  fprintf (file, "s,mb");
	  break;
	case POST_DEC:
	case POST_INC:
	  fprintf (file, "s,ma");
	  break;
	default:
	  break;
	}
      return;
    case 'F':
      switch (GET_CODE (XEXP (x, 0)))
	{
	case PRE_DEC:
	case PRE_INC:
	  fprintf (file, ",mb");
	  break;
	case POST_DEC:
	case POST_INC:
	  fprintf (file, ",ma");
	  break;
	default:
	  break;
	}
      return;
    case 'G':
      output_global_address (file, x);
      return;
    case 0:			/* Don't do anything special */
      break;
    default:
      abort ();
    }
  if (GET_CODE (x) == REG)
    fprintf (file, "%s", reg_names [REGNO (x)]);
  else if (GET_CODE (x) == MEM)
    {
      int size = GET_MODE_SIZE (GET_MODE (x));
      rtx base = XEXP (XEXP (x, 0), 0);
      switch (GET_CODE (XEXP (x, 0)))
	{
	case PRE_DEC:
	case POST_DEC:
	  fprintf (file, "-%d(0,%s)", size, reg_names [REGNO (base)]);
	  break;
	case PRE_INC:
	case POST_INC:
	  fprintf (file, "%d(0,%s)", size, reg_names [REGNO (base)]);
	  break;
	default:
	  output_address (XEXP (x, 0));
	  break;
	}
    }
  else if (GET_CODE (x) == CONST_DOUBLE && GET_MODE (x) == SFmode)
    {
      union { double d; int i[2]; } u;
      union { float f; int i; } u1;
      u.i[0] = XINT (x, 0); u.i[1] = XINT (x, 1);
      u1.f = u.d;
      if (code == 'f')
	fprintf (file, "0r%.9g", u1.f);
      else
	fprintf (file, "0x%x", u1.i);
    }
  else if (GET_CODE (x) == CONST_DOUBLE && GET_MODE (x) != DImode)
    {
      union { double d; int i[2]; } u;
      u.i[0] = XINT (x, 0); u.i[1] = XINT (x, 1);
      fprintf (file, "0r%.20g", u.d);
    }
  else
    output_addr_const (file, x);
}

/* output a SYMBOL_REF or a CONST expression involving a SYMBOL_REF. */

void
output_global_address (file, x)
     FILE *file;
     rtx x;
{
  if (GET_CODE (x) == SYMBOL_REF && read_only_operand (x))
    assemble_name (file, XSTR (x, 0));
  else if (GET_CODE (x) == SYMBOL_REF)
    {
      assemble_name (file, XSTR (x, 0));
      fprintf (file, "-$global$");
    }
  else if (GET_CODE (x) == CONST)
    {
      char *sep = "";
      int offset = 0;		/* assembler wants -$global$ at end */
      rtx base;
	  
      if (GET_CODE (XEXP (XEXP (x, 0), 0)) == SYMBOL_REF)
	{
	  base = XEXP (XEXP (x, 0), 0);
	  output_addr_const (file, base);
	}
      else
	if (GET_CODE(XEXP (XEXP (x, 0), 0)) == CONST_INT)
	  offset = INTVAL (XEXP (XEXP (x, 0), 0));
	else abort();
      if (GET_CODE (XEXP (XEXP (x, 0), 1)) == SYMBOL_REF)
	{
	  base = XEXP (XEXP (x, 0), 1);
	  output_addr_const (file, base);
	}
      else
	if (GET_CODE (XEXP (XEXP (x, 0), 1)) == CONST_INT)
	  offset = INTVAL (XEXP (XEXP (x, 0),1));
	else abort();
      if (GET_CODE (XEXP (x, 0)) == PLUS)
	sep= "+";
      else
	if (GET_CODE (XEXP (x, 0)) == MINUS
	    && (GET_CODE (XEXP (XEXP (x, 0), 0)) == SYMBOL_REF))
	  sep = "-";
	else abort();
      if (!read_only_operand (base))
	fprintf (file, "-$global$");
      fprintf (file, "%s", sep);
      if (offset) fprintf(file,"%d", offset);
    }
  else
    output_addr_const (file, x);
}

/* MEM rtls here are never SYMBOL_REFs (I think), so fldws is safe. */

char *
output_floatsisf2 (operands)
     rtx *operands;
{
  if (GET_CODE (operands[1]) == MEM)
    return "fldws %1,%0\n\tfcnvxf,sgl,sgl %0,%0";
  else if (FP_REG_P (operands[1]))
    return "fcnvxf,sgl,sgl %1,%0";
  return "stwm %r1,4(0,30)\n\tfldws,mb -4(0,30),%0\n\tfcnvxf,sgl,sgl %0,%0";
}

char *
output_floatsidf2 (operands)
     rtx *operands;
{
  if (GET_CODE (operands[1]) == MEM)
    return "fldws %1,%0\n\tfcnvxf,sgl,dbl %0,%0";
  else if (FP_REG_P (operands[1]))
    return "fcnvxf,sgl,dbl %1,%0";
  return "stwm %r1,4(0,30)\n\tfldws,mb -4(0,30),%0\n\tfcnvxf,sgl,dbl %0,%0";
}

enum rtx_code
reverse_relop (code)
     enum rtx_code code;
{
  switch (code)
    {
    case GT:
      return LT;
    case LT:
      return GT;
    case GE:
      return LE;
    case LE:
      return GE;
    case LTU:
      return GTU;
    case GTU:
      return LTU;
    case GEU:
      return LEU;
    case LEU:
      return GEU;
    default:
      abort ();
    }
}

/* What the spectrum lacks in hardware, make up for in software.
   Compute a fairly good sequence of shift and add insns
   to make a multiply happen. This should punt and call millicode if
   the sequence gets too big, but that's hard to do at this stage
   because it involves clobbering several registers. Oh, well. */

#define ABS(x) ((x) < 0 ? -(x) : x)

static rtx *mul_operands;

void mul_by_constant_aux ();

int
emit_mul_by_constant (operands, unsignedp)
     rtx *operands;
     int unsignedp;
{
  int constant;
  mul_operands = operands;
  
  constant = INTVAL (operands[2]);
  if (constant == 0)
    {
      /* Does happen, at least when not optimizing.  */
      emit_insn (gen_rtx (SET, VOIDmode, operands[0], const0_rtx));
      return 1;
    }
  if (constant == 1)
    {
      emit_insn (gen_rtx (SET, VOIDmode, operands[0], operands[1]));
      return 1;
    }
  mul_by_constant_aux (ABS(constant));
  if (constant < 0)
    emit_insn (gen_negsi2 (operands[0], operands[0]));
  return 1;      
}

/* This greedy algorithm uses the fact that several constant 
   multiplies are rather cheap on the PA:
   * 2^n (shift n places)
   * (2^n + 1) and (2^n - 1) (shift n and add or subtract)
   * 3, 5, 9 (sh1add, sh2add, sh3add) */

void
mul_by_constant_aux (constant)
     int constant;
{
  int log2, diff;		/* log2 of constant and difference */
				/* from a power of 2 */
  int ffs_res;
  rtx xoperands[4];

  xoperands[0] = mul_operands[0];  xoperands[1] = mul_operands[1];
  log2 = log2_and_diff(constant, &diff);
  /* constant = 2^n or 2^n +/- 1? constant = 3,5,9 is handled better 
     by the shift and add instructions. */
  if (!diff || (diff == 1 && constant != 3 && constant != 5 && constant != 9)
      || (diff == -1 && constant != 3))
    {
      emit_insn (gen_rtx (SET, VOIDmode,
			  mul_operands[0],
			  gen_rtx (ASHIFT, SImode,
				   mul_operands[1],
				   gen_rtx (CONST_INT, VOIDmode, log2))));
      if (diff == 1)
	emit_insn (gen_addsi3 (mul_operands[0],
			       mul_operands[0],
			       mul_operands[1]));
      else if (diff == -1)
	emit_insn (gen_subsi3 (mul_operands[0],
			       mul_operands[0],
			       mul_operands[1]));
    }
  /* The things we try are ordered by how many binary digits of 
     constant they consume */
  /* is 2^n a factor of constant, n > 3? */
  else if ((ffs_res = ffs (constant)) > 4)
    {
      mul_by_constant_aux ((constant >> (ffs_res - 1)));
      emit_insn (gen_rtx (SET, VOIDmode,
			  mul_operands[0],
			  gen_rtx (ASHIFT, SImode,
				   mul_operands[0],
				   gen_rtx (CONST_INT, VOIDmode,
					    ffs_res - 1))));
    }
  /* If the bottom n bits of constant are all 1's, that's the same as 
     multiplying the total by 2^n and subtracting the multiplicand. */
  else if ((ffs_res = ffs (~constant)) > 4)
    {
      mul_by_constant_aux ((constant >> (ffs_res - 1)) | 1);
      emit_insn (gen_rtx (SET, VOIDmode,
			  mul_operands[0],
			  gen_rtx (ASHIFT, SImode,
				   mul_operands[0],
				   gen_rtx (CONST_INT, VOIDmode,
					    ffs_res - 1))));
      emit_insn (gen_subsi3 (mul_operands[0],
			       mul_operands[0],
			       mul_operands[1]));
    }
  /* factor and test for possible shift/add combinations */
  else if (test_factor_and_output (constant, 9));
  else if (test_factor_and_output (constant, 8));
  else if ((constant & 0x7) == 0x1)
    {
      mul_by_constant_aux (constant >> 3);
      emit_insn (gen_rtx (SET, VOIDmode,
			  mul_operands[0],
			  gen_rtx (PLUS, SImode,
				   mul_operands[1],
				   gen_rtx (MULT, SImode,
					    mul_operands[0],
					    gen_rtx (CONST_INT, VOIDmode,
						     8)))));
    }
  else if (test_factor_and_output (constant, 5));
  else if (test_factor_and_output (constant, 4));
  else if ((constant & 0x3) == 0x1)
    {
      mul_by_constant_aux (constant >> 2);
      emit_insn (gen_rtx (SET, VOIDmode,
			  mul_operands[0],
			  gen_rtx (PLUS, SImode,
				   mul_operands[1],
				   gen_rtx (MULT, SImode,
					    mul_operands[0],
					    gen_rtx (CONST_INT, VOIDmode,
						     4)))));
    }
  else if (test_factor_and_output (constant, 3));
  else if (test_factor_and_output (constant, 2));
  else
    {
      mul_by_constant_aux (constant >> 1);
      emit_insn (gen_rtx (SET, VOIDmode,
			  mul_operands[0],
			  gen_rtx (PLUS, SImode,
				   mul_operands[1],
				   gen_rtx (MULT, SImode,
					    mul_operands[0],
					    gen_rtx (CONST_INT, VOIDmode,
						     2)))));
    }
}

/* If FACTOR is a factor of CONSTANT, output the appropriate shift and 
   add instruction */

int
test_factor_and_output (constant, factor)
     int constant, factor;
{
  rtx xoperands0, xoperands1, xoperands2;
  int shift, add_op = 0;

  xoperands0 = mul_operands[0];
  if (!(constant % factor))
    {
      switch (factor)
	{
	case 9:
	  shift = 3;  add_op = 1;  break;
	case 8:
	  shift = 3;  break;
	case 5:
	  shift = 2;  add_op = 1;  break;
	case 4:
	  shift = 2;  break;
	case 3:
	  shift = 1;  add_op = 1;  break;
	case 2:
	  shift = 1; break;
	default:
	  abort ();
	}
      if (constant / factor == 1)
	{
	  xoperands1 = mul_operands[1];
	  xoperands2 = mul_operands[1];
	}
      else
	{
	  mul_by_constant_aux (constant / factor);
	  xoperands1 = mul_operands[0];
	  xoperands2 = mul_operands[0];
	}
      if (add_op)
	emit_insn (gen_rtx (SET, VOIDmode,
			  xoperands0,
			  gen_rtx (PLUS, SImode,
				   xoperands1,
				   gen_rtx (MULT, SImode,
					    xoperands2,
					    gen_rtx (CONST_INT, VOIDmode,
						     1 << shift)))));
      else
	emit_insn (gen_rtx (SET, VOIDmode,
			    xoperands0,
			    gen_rtx (ASHIFT, SImode,
				     xoperands1,
				     gen_rtx (CONST_INT, VOIDmode, shift))));
      return 1;
    }
  return 0;
}

/* This routine finds the floor_log2 of val and returns it and the 
   difference between val and 2^log2(val). If val is 1 less than a
   power of 2, that power's log and -1 are returned. */

int log2_and_diff (val, diff)
     int val, *diff;
{
  int log = floor_log2 (val);
  
  *diff = val - (1 << log);
  if (!*diff || *diff == 1)
    {
      return log;
    }
  else				/* see if val is one less than a power */
    {				/* of 2 */
      int alt_log = floor_log2 (val + 1);
      if (!((val + 1) - (1 << alt_log)))
	{
	  *diff = -1;
	  return alt_log;
	}
    }
  return log;
}


/* HP's millicode routines mean something special to the assembler.
   Keep track of which ones we have used.  */

enum millicodes { remI, remU, divI, divU, mulI, mulU, end1000 };
static char imported[(int)end1000];
static char *milli_names[] = {"remI", "remU", "divI", "divU", "mulI", "mulU"};
static char import_string[] = ".IMPORT $$....,MILLICODE";
#define MILLI_START 10

static int
import_milli (code)
     enum millicodes code;
{
  char str[sizeof(import_string)];
  
  if (!imported[(int)code])
    {
      imported[(int)code] = 1;
      strcpy (str, import_string);
      strncpy (str + MILLI_START, milli_names[(int)code], 4);
      output_asm_insn (str, 0);
    }
}

/* The register constraints have put the operands and return value in 
   the proper registers. */

char *
output_mul_insn (unsignedp)
     int unsignedp;
{
  if (unsignedp)
    {
      import_milli (mulU);
      return "bl $$mulU,31\n\tnop";
    }
  else
    {
      import_milli (mulI);
      return "bl $$mulI,31\n\tnop";
    }
}

/* If operands isn't NULL, then it's a CONST_INT with which we can do
   something */


/* Emit the rtl for doing a division by a constant. */

 /* Do magic division millicodes exist for this value? */

static int magic_milli[]= {0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0,
			     1, 1};

/* We'll use an array to keep track of the magic millicodes and 
   whether or not we've used them already. [n][0] is signed, [n][1] is
   unsigned. */


static int div_milli[16][2];

int
div_operand (op, mode)
     rtx op;
     enum machine_mode mode;
{
  return (mode == SImode
	  && ((GET_CODE (op) == REG && REGNO (op) == 25)
	      || (GET_CODE (op) == CONST_INT && INTVAL (op) > 0
		  && INTVAL (op) < 16 && magic_milli[INTVAL (op)])));
}

int
emit_hpdiv_const(operands, unsignedp)
     rtx *operands;
     int unsignedp;
{
  if (GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 0
      && INTVAL (operands[2]) < 16
      && magic_milli[INTVAL (operands[2])])
    {
      emit_move_insn ( gen_rtx (REG, SImode, 26), operands[1]);
      emit
	(gen_rtx
	 (PARALLEL, VOIDmode,
	  gen_rtvec (5, gen_rtx (SET, VOIDmode, gen_rtx (REG, SImode, 29),
				 gen_rtx (unsignedp ? UDIV : DIV, SImode,
					  gen_rtx (REG, SImode, 26),
					  operands[2])),
		     gen_rtx (CLOBBER, VOIDmode, gen_rtx (SCRATCH, SImode, 0)),
		     gen_rtx (CLOBBER, VOIDmode, gen_rtx (REG, SImode, 26)),
		     gen_rtx (CLOBBER, VOIDmode, gen_rtx (REG, SImode, 25)),
		     gen_rtx (CLOBBER, VOIDmode, gen_rtx (REG, SImode, 31)))));
      emit_move_insn (operands[0], gen_rtx (REG, SImode, 29));
      return 1;
    }
  return 0;
}

char *
output_div_insn(operands, unsignedp)
     rtx *operands;
     int unsignedp;
{
  int divisor;
  
  /* If the divisor is a constant, try to use one of the special 
     opcodes .*/
  if (GET_CODE (operands[0]) == CONST_INT)
    {
      divisor = INTVAL (operands[0]);
      if (!div_milli[divisor][unsignedp])
	{
	  if (unsignedp)
	    output_asm_insn (".IMPORT $$divU_%0,MILLICODE", operands);
	  else
	    output_asm_insn (".IMPORT $$divI_%0,MILLICODE", operands);
	  div_milli[divisor][unsignedp] = 1;
	}
      if (unsignedp)
	return "bl $$divU_%0,31%#";
      return "bl $$divI_%0,31%#";
    }
  /* Divisor isn't a special constant. */
  else
    {
      if (unsignedp)
	{
	  import_milli (divU);
	  return "bl $$divU,31%#";
	}
      else
	{
	  import_milli (divI);
	  return "bl $$divI,31%#";
	}
    }
}

/* Output a $$rem millicode to do mod. */

char *
output_mod_insn (unsignedp)
     int unsignedp;
{
  if (unsignedp)
    {
      import_milli (remU);
      return "bl $$remU,31%#";
    }
  else
    {
      import_milli (remI);
      return "bl $$remI,31%#";
    }
}

void
output_arg_descriptor (insn)
     rtx insn;
{
  char *arg_regs[4];
  enum machine_mode arg_mode;
  rtx prev_insn;
  int i, output_flag = 0;
  int regno;
  
  for (i = 0; i < 4; i++)
    arg_regs[i] = 0;

  for (prev_insn = PREV_INSN (insn); GET_CODE (prev_insn) == INSN;
       prev_insn = PREV_INSN (prev_insn))
    {
      if (!(GET_CODE (PATTERN (prev_insn)) == USE &&
	    GET_CODE (XEXP (PATTERN (prev_insn), 0)) == REG &&
	    FUNCTION_ARG_REGNO_P (REGNO (XEXP (PATTERN (prev_insn), 0)))))
	break;
      arg_mode = GET_MODE (XEXP (PATTERN (prev_insn), 0));
      regno = REGNO (XEXP (PATTERN (prev_insn), 0));
      if (regno >= 23 && regno <= 26)
	arg_regs[26 - regno] = "GR";
      else if (!TARGET_SNAKE)	/* fp args */
	{
	  if (arg_mode == SFmode)
	    arg_regs[regno - 36] = "FR";
	  else
	    {
#ifdef hpux8
	      arg_regs[regno - 37] = "FR";
	      arg_regs[regno - 36] = "FU";
#else
	      arg_regs[regno - 37] = "FU";
	      arg_regs[regno - 36] = "FR";
#endif
	    }
	}
      else
	{
	  if (arg_mode == SFmode)
	    arg_regs[(regno - 56) / 2] = "FR";
	  else
	    {
	      arg_regs[regno - 58] = "FR";
	      arg_regs[regno - 57] = "FU";
	    }
	}
    }
  fputs ("\t.CALL ", asm_out_file);
  for (i = 0; i < 4; i++)
    {
      if (arg_regs[i])
	{
	  if (output_flag++)
	    fputc (',', asm_out_file);
	  fprintf (asm_out_file, "ARGW%d=%s", i, arg_regs[i]);
	}
    }
  fputc ('\n', asm_out_file);
}

/* Memory loads/stores to/from fp registers may need a scratch
   register in which to reload the address. */

enum reg_class
secondary_reload_class (class, mode, in)
     enum reg_class class;
     enum machine_mode mode;
     rtx in;
{
  int regno = true_regnum (in);

  if (regno >= FIRST_PSEUDO_REGISTER)
    regno = -1;

  if (class == FP_REGS || class == SNAKE_FP_REGS || class == HI_SNAKE_FP_REGS)
    {
      if (regno = -1 || !REGNO_OK_FOR_FP_P (regno))
	return GENERAL_REGS;
    }
  return NO_REGS;
}

enum direction {none, upward, downward};

enum direction
function_arg_padding (mode, type)
     enum machine_mode mode;
     tree type;
{
  int size;

  if (mode == BLKmode)
    {
      if (type && TREE_CODE (TYPE_SIZE (type)) == INTEGER_CST)
	size = int_size_in_bytes (type) * BITS_PER_UNIT;
      else
	return upward;		/* Don't know if this is right, but */
				/* same as old definition. */
    }
  else
    size = GET_MODE_BITSIZE (mode);
  if (size < PARM_BOUNDARY)
    return downward;
  else if (size % PARM_BOUNDARY)
    return upward;
  else
    return none;
}

int
use_milli_regs (insn)
     rtx insn;
{
  return (reg_mentioned_p (gen_rtx (REG, SImode, 1), insn) ||
	  reg_mentioned_p (gen_rtx (REG, SImode, 25), insn) ||
	  reg_mentioned_p (gen_rtx (REG, SImode, 26), insn) ||
	  reg_mentioned_p (gen_rtx (REG, SImode, 29), insn) ||
	  reg_mentioned_p (gen_rtx (REG, SImode, 31), insn));
}
