/* Generated automatically by the program `genrecog'
from the machine description file `md'.  */

#include "config.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"

extern rtx gen_split_6 ();
extern rtx gen_split_7 ();
extern rtx gen_split_9 ();
extern rtx gen_split_10 ();
extern rtx gen_split_19 ();
extern rtx gen_split_20 ();
extern rtx gen_split_22 ();
extern rtx gen_split_23 ();
extern rtx gen_split_88 ();
extern rtx gen_split_91 ();
extern rtx gen_split_94 ();
extern rtx gen_split_98 ();
extern rtx gen_split_101 ();
extern rtx gen_split_152 ();
extern rtx gen_split_156 ();
extern rtx gen_split_174 ();
extern rtx gen_split_178 ();
extern rtx gen_split_185 ();
extern rtx gen_split_186 ();
extern rtx gen_split_188 ();
extern rtx gen_split_189 ();
extern rtx gen_split_195 ();
extern rtx gen_split_196 ();
extern rtx gen_split_198 ();
extern rtx gen_split_199 ();
extern rtx gen_split_205 ();
extern rtx gen_split_206 ();
extern rtx gen_split_208 ();
extern rtx gen_split_209 ();
extern rtx gen_split_239 ();
extern rtx gen_split_241 ();
extern rtx gen_split_246 ();
extern rtx gen_split_248 ();
extern rtx gen_split_254 ();
extern rtx gen_split_256 ();
extern rtx gen_split_264 ();
extern rtx gen_split_266 ();
extern rtx gen_split_272 ();
extern rtx gen_split_274 ();
extern rtx gen_split_282 ();
extern rtx gen_split_284 ();

/* `recog' contains a decision tree
   that recognizes whether the rtx X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.
   If the rtx is valid, recog returns a nonnegative number
   which is the insn code number for the pattern that matched.
   This is the same as the order in the machine description of
   the entry that matched.  This number can be used as an index into
   entry that matched.  This number can be used as an index into various
   insn_* tables, such as insn_templates, insn_outfun, and insn_n_operands
   (found in insn-output.c).

   The third argument to recog is an optional pointer to an int.
   If present, recog will accept a pattern if it matches except for
   missing CLOBBER expressions at the end.  In that case, the value
   pointed to by the optional pointer will be set to the number of
   CLOBBERs that need to be added (it should be initialized to zero by
   the caller).  If it is set nonzero, the caller should allocate a
   PARALLEL of the appropriate size, copy the initial entries, and call
   add_clobbers (found in insn-emit.c) to fill in the CLOBBERs.

   The function split_insns returns 0 if the rtl could not
   be split or the split rtl in a SEQUENCE if it can be.*/

rtx recog_operand[MAX_RECOG_OPERANDS];

rtx *recog_operand_loc[MAX_RECOG_OPERANDS];

rtx *recog_dup_loc[MAX_DUP_OPERANDS];

char recog_dup_num[MAX_DUP_OPERANDS];

#define operands recog_operand

int
recog_1 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      switch (GET_CODE (x1))
	{
	case PLUS:
	  goto L444;
	case MINUS:
	  goto L91;
	case MULT:
	  goto L179;
	case TRUNCATE:
	  goto L309;
	case DIV:
	  goto L735;
	case MOD:
	  goto L769;
	case UDIV:
	  goto L803;
	case UMOD:
	  goto L837;
	case ABS:
	  goto L867;
	case FFS:
	  goto L892;
	case NEG:
	  goto L909;
	case NOT:
	  goto L944;
	case AND:
	  goto L962;
	case IOR:
	  goto L982;
	case XOR:
	  goto L997;
	case ZERO_EXTEND:
	  goto L1051;
	case SIGN_EXTEND:
	  goto L1098;
	case ASHIFT:
	  goto L1335;
	case ASHIFTRT:
	  goto L1407;
	case LSHIFTRT:
	  goto L1479;
	case EQ:
	  goto L1615;
	case NE:
	  goto L1645;
	case GT:
	  goto L1675;
	case GE:
	  goto L1685;
	case LT:
	  goto L1705;
	case LE:
	  goto L1715;
	case GTU:
	  goto L1745;
	case GEU:
	  goto L1755;
	case LTU:
	  goto L1775;
	case LEU:
	  goto L1785;
	case IF_THEN_ELSE:
	  goto L2047;
	}
    }
  if (GET_CODE (x1) == UNSPEC && XINT (x1, 1) == 0 && XVECLEN (x1, 0) == 1 && 1)
    goto L1182;
  goto ret0;

  L444:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MULT && 1)
    goto L445;
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L14;
    }
  goto ret0;

  L445:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L446;
    }
  goto ret0;

  L446:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L447;
    }
  goto ret0;

  L447:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && pnum_clobbers != 0 && 1)
    if (TARGET_MAD)
      {
	*pnum_clobbers = 2;
	return 45;
      }
  goto ret0;

  L14:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768)
	return 3;
      }
  goto ret0;

  L91:
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L92;
    }
  goto ret0;

  L92:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768)
	return 16;
      }
  goto ret0;

  L179:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L180;
    }
  goto ret0;

  L180:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L198;
  L216:
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MAD)
	{
	  *pnum_clobbers = 3;
	  return 31;
	}
      }
  goto ret0;

  L198:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (mips_cpu != PROCESSOR_R4000)
	{
	  *pnum_clobbers = 2;
	  return 29;
	}
      }
  L199:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (mips_cpu == PROCESSOR_R4000)
	{
	  *pnum_clobbers = 3;
	  return 30;
	}
      }
  goto L216;

  L309:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L310;
    case ASHIFTRT:
      goto L1034;
    case ASHIFT:
      goto L1046;
    case SUBREG:
    case REG:
      if (register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 104;
	  }
    }
  goto ret0;

  L310:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  if (GET_CODE (x3) == MULT && 1)
    goto L311;
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1041;
    }
  goto ret0;

  L311:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L312;
    case ZERO_EXTEND:
      goto L375;
    }
  goto ret0;

  L312:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L313;
    }
  goto ret0;

  L313:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L314;
  goto ret0;

  L314:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L315;
    }
  goto ret0;

  L315:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 2;
      return 38;
    }
  goto ret0;

  L375:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L376;
    }
  goto ret0;

  L376:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L377;
  goto ret0;

  L377:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L378;
    }
  goto ret0;

  L378:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 2;
      return 42;
    }
  goto ret0;

  L1041:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	return 108;
      }
  goto ret0;

  L1034:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1035;
    }
  goto ret0;

  L1035:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	return 107;
      }
  goto ret0;

  L1046:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1047;
    }
  goto ret0;

  L1047:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	return 109;
      }
  goto ret0;

  L735:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L736;
    }
  goto ret0;

  L736:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 64;
	}
      }
  goto ret0;

  L769:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L770;
    }
  goto ret0;

  L770:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 66;
	}
      }
  goto ret0;

  L803:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L804;
    }
  goto ret0;

  L804:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 68;
	}
      }
  goto ret0;

  L837:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L838;
    }
  goto ret0;

  L838:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 3;
	  return 70;
	}
      }
  goto ret0;

  L867:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 74;
    }
  goto ret0;

  L892:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 2;
      return 78;
    }
  goto ret0;

  L909:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 80;
    }
  goto ret0;

  L944:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (GET_CODE (x2) == IOR && 1)
    goto L945;
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 86;
    }
  goto ret0;

  L945:
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L946;
    }
  goto ret0;

  L946:
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[2] = x3;
      return 89;
    }
  goto ret0;

  L962:
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L963;
    }
  goto ret0;

  L963:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 92;
    }
  goto ret0;

  L982:
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L983;
    }
  goto ret0;

  L983:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 96;
    }
  goto ret0;

  L997:
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L998;
    }
  goto ret0;

  L998:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 99;
    }
  goto ret0;

  L1051:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      if (GET_CODE (x2) == TRUNCATE && 1)
	goto L1052;
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 115;
	}
      break;
    case QImode:
      if (GET_CODE (x2) == TRUNCATE && 1)
	goto L1057;
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 118;
	}
    }
  goto ret0;

  L1052:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT)
	return 110;
      }
  goto ret0;

  L1057:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT)
	return 111;
      }
  goto ret0;

  L1098:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 125;
	}
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 129;
	}
    }
  goto ret0;

  L1335:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1336;
    }
  goto ret0;

  L1336:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 181;
    }
  goto ret0;

  L1407:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1408;
    }
  goto ret0;

  L1408:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 191;
    }
  goto ret0;

  L1479:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1480;
    }
  goto ret0;

  L1480:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 201;
    }
  goto ret0;

  L1615:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1616;
    }
  goto ret0;

  L1616:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 236;
  L1626:
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 238;
      }
  goto ret0;

  L1645:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1646;
    }
  goto ret0;

  L1646:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 243;
  L1656:
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 245;
      }
  goto ret0;

  L1675:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1676;
    }
  goto ret0;

  L1676:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      return 250;
    }
  goto ret0;

  L1685:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1686;
    }
  goto ret0;

  L1686:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 253;
      }
  goto ret0;

  L1705:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1706;
    }
  goto ret0;

  L1706:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 258;
    }
  goto ret0;

  L1715:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1726;
    }
  goto ret0;

  L1726:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 263;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      if (INTVAL (operands[2]) < 32767)
	return 261;
      }
  goto ret0;

  L1745:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1746;
    }
  goto ret0;

  L1746:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      return 268;
    }
  goto ret0;

  L1755:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1756;
    }
  goto ret0;

  L1756:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 271;
      }
  goto ret0;

  L1775:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1776;
    }
  goto ret0;

  L1776:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      return 276;
    }
  goto ret0;

  L1785:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1796;
    }
  goto ret0;

  L1796:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE)
	return 281;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      if (INTVAL (operands[2]) < 32767)
	return 279;
      }
  goto ret0;

  L2047:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2048;
    }
  L2055:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2056;
    }
  goto ret0;

  L2048:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2049;
    }
  goto L2055;

  L2049:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2050;
  goto L2055;

  L2050:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2051;
    }
  x2 = XEXP (x1, 0);
  goto L2055;

  L2051:
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 328;
      }
  x2 = XEXP (x1, 0);
  goto L2055;

  L2056:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L2057;
  goto ret0;

  L2057:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2058;
  goto ret0;

  L2058:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2059;
    }
  goto ret0;

  L2059:
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      if (mips_isa >= 4)
	return 329;
      }
  goto ret0;

  L1182:
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, QImode))
    {
      ro[1] = x2;
      return 148;
    }
  goto ret0;
 ret0: return -1;
}

int
recog_2 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L463;
    case SIGN_EXTEND:
      goto L75;
    case MINUS:
      goto L148;
    case MULT:
      goto L266;
    case TRUNCATE:
      goto L397;
    case DIV:
      goto L752;
    case MOD:
      goto L786;
    case UDIV:
      goto L820;
    case UMOD:
      goto L854;
    case ABS:
      goto L871;
    case FFS:
      goto L905;
    case NEG:
      goto L920;
    case NOT:
      goto L950;
    case AND:
      goto L967;
    case IOR:
      goto L987;
    case XOR:
      goto L1002;
    case ZERO_EXTEND:
      goto L1066;
    case ASHIFT:
      goto L1402;
    case ASHIFTRT:
      goto L1474;
    case LSHIFTRT:
      goto L1546;
    case EQ:
      goto L1620;
    case NE:
      goto L1650;
    case GT:
      goto L1680;
    case GE:
      goto L1695;
    case LT:
      goto L1710;
    case LE:
      goto L1720;
    case GTU:
      goto L1750;
    case GEU:
      goto L1765;
    case LTU:
      goto L1780;
    case LEU:
      goto L1790;
    case IF_THEN_ELSE:
      goto L2063;
    }
  goto ret0;

  L463:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MULT && 1)
    goto L464;
  if (reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L71;
    }
  goto ret0;

  L464:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L465;
    case ZERO_EXTEND:
      goto L511;
    }
  goto ret0;

  L465:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L466;
    }
  goto ret0;

  L466:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == SIGN_EXTEND && 1)
    goto L467;
  goto ret0;

  L467:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L468;
    }
  goto ret0;

  L468:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L492;
  goto ret0;

  L492:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && ! TARGET_64BIT)
      {
	*pnum_clobbers = 1;
	return 46;
      }
  L493:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 47;
      }
  goto ret0;

  L511:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L512;
    }
  goto ret0;

  L512:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L513;
  goto ret0;

  L513:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L514;
    }
  goto ret0;

  L514:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L538;
  goto ret0;

  L538:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && ! TARGET_64BIT)
      {
	*pnum_clobbers = 1;
	return 48;
      }
  L539:
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD && TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 49;
      }
  goto ret0;

  L71:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 11;
      }
  goto ret0;

  L75:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      switch (GET_CODE (x2))
	{
	case PLUS:
	  goto L76;
	case MINUS:
	  goto L154;
	case SUBREG:
	case MEM:
	  if (memory_operand (x2, SImode))
	    {
	      ro[1] = x2;
	      if (TARGET_64BIT)
		 return 121;
	      }
	}
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 123;
	  }
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 131;
	  }
    }
  goto ret0;

  L76:
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L77;
    }
  goto ret0;

  L77:
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 12;
      }
  goto ret0;

  L154:
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L155;
    }
  goto ret0;

  L155:
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 25;
      }
  goto ret0;

  L148:
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L149;
    }
  goto ret0;

  L149:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 24;
      }
  goto ret0;

  L266:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L267;
    case ZERO_EXTEND:
      goto L330;
    case SUBREG:
    case REG:
      if (register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  goto L233;
	}
    }
  goto ret0;

  L267:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L268;
    }
  goto ret0;

  L268:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == SIGN_EXTEND && 1)
    goto L269;
  goto ret0;

  L269:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    goto L289;
  goto ret0;

  L289:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (!TARGET_64BIT)
	{
	  *pnum_clobbers = 1;
	  return 36;
	}
      }
  L290:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	{
	  *pnum_clobbers = 2;
	  return 37;
	}
      }
  goto ret0;

  L330:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L331;
    }
  goto ret0;

  L331:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L332;
  goto ret0;

  L332:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    goto L352;
  goto ret0;

  L352:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (!TARGET_64BIT)
	{
	  *pnum_clobbers = 1;
	  return 40;
	}
      }
  L353:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	{
	  *pnum_clobbers = 2;
	  return 41;
	}
      }
  goto ret0;

  L233:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    goto L251;
  goto ret0;

  L251:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (TARGET_64BIT && mips_cpu != PROCESSOR_R4000)
	{
	  *pnum_clobbers = 2;
	  return 33;
	}
      }
  L252:
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (TARGET_64BIT && mips_cpu == PROCESSOR_R4000)
	{
	  *pnum_clobbers = 3;
	  return 34;
	}
      }
  goto ret0;

  L397:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode && GET_CODE (x2) == LSHIFTRT && 1)
    goto L398;
  goto ret0;

  L398:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode && GET_CODE (x3) == MULT && 1)
    goto L399;
  goto ret0;

  L399:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != TImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L400;
    case ZERO_EXTEND:
      goto L425;
    }
  goto ret0;

  L400:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      ro[1] = x5;
      goto L401;
    }
  goto ret0;

  L401:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L402;
  goto ret0;

  L402:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      ro[2] = x5;
      goto L403;
    }
  goto ret0;

  L403:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 64 && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 43;
      }
  goto ret0;

  L425:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      ro[1] = x5;
      goto L426;
    }
  goto ret0;

  L426:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L427;
  goto ret0;

  L427:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      ro[2] = x5;
      goto L428;
    }
  goto ret0;

  L428:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 64 && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 44;
      }
  goto ret0;

  L752:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L753;
    }
  goto ret0;

  L753:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 65;
	}
      }
  goto ret0;

  L786:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L787;
    }
  goto ret0;

  L787:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 67;
	}
      }
  goto ret0;

  L820:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L821;
    }
  goto ret0;

  L821:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 69;
	}
      }
  goto ret0;

  L854:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L855;
    }
  goto ret0;

  L855:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 3;
	  return 71;
	}
      }
  goto ret0;

  L871:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 75;
      }
  goto ret0;

  L905:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	{
	  *pnum_clobbers = 2;
	  return 79;
	}
      }
  goto ret0;

  L920:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 83;
      }
  goto ret0;

  L950:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (GET_CODE (x2) == IOR && 1)
    goto L951;
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 87;
    }
  goto ret0;

  L951:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L952;
    }
  goto ret0;

  L952:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      return 90;
    }
  goto ret0;

  L967:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L968;
    }
  goto ret0;

  L968:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT || !TARGET_DEBUG_G_MODE)
	return 93;
      }
  L978:
  if (uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 95;
      }
  goto ret0;

  L987:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L988;
    }
  goto ret0;

  L988:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT || !TARGET_DEBUG_G_MODE)
	return 97;
      }
  goto ret0;

  L1002:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1003;
    }
  goto ret0;

  L1003:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT || !TARGET_DEBUG_G_MODE)
	return 100;
      }
  L1013:
  if (uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 102;
      }
  goto ret0;

  L1066:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      if (memory_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 114;
	  }
      break;
    case HImode:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 116;
	  }
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 119;
	  }
    }
  goto ret0;

  L1402:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1403;
    }
  goto ret0;

  L1403:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 190;
      }
  goto ret0;

  L1474:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1475;
    }
  goto ret0;

  L1475:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 200;
      }
  goto ret0;

  L1546:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1547;
    }
  goto ret0;

  L1547:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 210;
      }
  goto ret0;

  L1620:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1621;
    }
  goto ret0;

  L1621:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (TARGET_64BIT)
      return 237;
  L1636:
  if (uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 240;
      }
  goto ret0;

  L1650:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1651;
    }
  goto ret0;

  L1651:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (TARGET_64BIT)
      return 244;
  L1666:
  if (uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 247;
      }
  goto ret0;

  L1680:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1681;
    }
  goto ret0;

  L1681:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 251;
      }
  goto ret0;

  L1695:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1696;
    }
  goto ret0;

  L1696:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 255;
      }
  goto ret0;

  L1710:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1711;
    }
  goto ret0;

  L1711:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 259;
      }
  goto ret0;

  L1720:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1736;
    }
  goto ret0;

  L1736:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 265;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && INTVAL (operands[2]) < 32767)
	return 262;
      }
  goto ret0;

  L1750:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1751;
    }
  goto ret0;

  L1751:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 269;
      }
  goto ret0;

  L1765:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1766;
    }
  goto ret0;

  L1766:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 273;
      }
  goto ret0;

  L1780:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1781;
    }
  goto ret0;

  L1781:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 277;
      }
  goto ret0;

  L1790:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1806;
    }
  goto ret0;

  L1806:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE)
	return 283;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && INTVAL (operands[2]) < 32767)
	return 280;
      }
  goto ret0;

  L2063:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2064;
    }
  L2071:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2072;
    }
  goto ret0;

  L2064:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L2065;
    }
  goto L2071;

  L2065:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2066;
  goto L2071;

  L2066:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L2067;
    }
  x2 = XEXP (x1, 0);
  goto L2071;

  L2067:
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 330;
      }
  x2 = XEXP (x1, 0);
  goto L2071;

  L2072:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L2073;
  goto ret0;

  L2073:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2074;
  goto ret0;

  L2074:
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2075;
    }
  goto ret0;

  L2075:
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (mips_isa >= 4)
	return 331;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_3 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DFmode:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L2;
	}
    L1234:
      if (nonimmediate_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1235;
	}
      break;
    case SFmode:
      if (register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L7;
	}
    L1226:
      if (nonimmediate_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L1227;
	}
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L12;
	}
    L1125:
      if (general_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1126;
	}
    L1202:
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1203;
	}
      break;
    case DImode:
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 28 && 1)
	goto L1256;
    L68:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L69;
	}
    L1149:
      if (general_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1150;
	}
    L1188:
      if (nonimmediate_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1189;
	}
      break;
    case HImode:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1024;
	}
    L1210:
      if (nonimmediate_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1211;
	}
      break;
    case QImode:
      if (register_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1028;
	}
    L1184:
      if (memory_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1185;
	}
    L1218:
      if (nonimmediate_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1219;
	}
      break;
    case CC_FPmode:
      switch (GET_CODE (x1))
	{
	case REG:
	  if (XINT (x1, 0) == 67 && 1)
	    goto L1814;
	}
      break;
    case CC_REV_FPmode:
      switch (GET_CODE (x1))
	{
	case REG:
	  if (XINT (x1, 0) == 67 && 1)
	    goto L1819;
	}
    }
  if (GET_CODE (x1) == PC && 1)
    goto L1878;
  L1936:
  if (register_operand (x1, VOIDmode))
    {
      ro[0] = x1;
      goto L1937;
    }
  goto ret0;

  L2:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1234;
    }
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L543;
    case MINUS:
      goto L557;
    case MULT:
      goto L159;
    case NEG:
      goto L571;
    case DIV:
      goto L601;
    case SQRT:
      goto L859;
    case ABS:
      goto L875;
    case FLOAT_EXTEND:
      goto L1114;
    case FLOAT:
      goto L1166;
    case IF_THEN_ELSE:
      goto L2095;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L543:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1234;
    }
  if (GET_CODE (x2) == MULT && 1)
    goto L544;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L4;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L544:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L545;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L545:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L546;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L546:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 50;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L4:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 0;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L557:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1234;
    }
  if (GET_CODE (x2) == MULT && 1)
    goto L558;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L588;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L558:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L559;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L559:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L560;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L560:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 52;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L588:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1234;
    }
  if (GET_CODE (x2) == MULT && 1)
    goto L589;
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 13;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L589:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L590;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L590:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 56;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L159:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L160;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L160:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 26;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L571:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1234;
    }
  if (GET_CODE (x2) == PLUS && 1)
    goto L572;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 84;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L572:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode && GET_CODE (x3) == MULT && 1)
    goto L573;
  x1 = XEXP (x0, 0);
  goto L1234;

  L573:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L574;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L574:
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      ro[2] = x4;
      goto L575;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L575:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 54;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L601:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L602;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L602:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 58;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L859:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && HAVE_SQRT_P() && TARGET_DOUBLE_FLOAT)
	return 72;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L875:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 76;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L1114:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 132;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L1166:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	    return 137;
	  }
      break;
    case DImode:
      if (nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    return 138;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L2095:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2096;
    }
  L2103:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2104;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L2096:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2097;
    }
  goto L2103;

  L2097:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2098;
  goto L2103;

  L2098:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      goto L2099;
    }
  x2 = XEXP (x1, 0);
  goto L2103;

  L2099:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 334;
      }
  x2 = XEXP (x1, 0);
  goto L2103;

  L2104:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L2105;
  x1 = XEXP (x0, 0);
  goto L1234;

  L2105:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2106;
  x1 = XEXP (x0, 0);
  goto L1234;

  L2106:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L2107;
    }
  x1 = XEXP (x0, 0);
  goto L1234;

  L2107:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 335;
      }
  x1 = XEXP (x0, 0);
  goto L1234;

  L1235:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    goto L1239;
  L1243:
  if (general_operand (x1, DFmode))
    {
      ro[1] = x1;
      if ((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT)
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DFmode)))
	return 173;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1239:
  ro[1] = x1;
  if (TARGET_HARD_FLOAT && !(TARGET_FLOAT64 && !TARGET_64BIT)
   && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DFmode)))
    return 171;
  L1240:
  ro[1] = x1;
  if (TARGET_HARD_FLOAT && (TARGET_FLOAT64 && !TARGET_64BIT)
   && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))
       || (GET_CODE (operands [0]) == MEM
	   && ((GET_CODE (operands[1]) == CONST_INT
		&& INTVAL (operands[1]) == 0)
	       || operands[1] == CONST0_RTX (DFmode))))
    return 172;
  goto L1243;

  L7:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1226;
    }
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L550;
    case MINUS:
      goto L564;
    case MULT:
      goto L164;
    case NEG:
      goto L579;
    case DIV:
      goto L606;
    case SQRT:
      goto L863;
    case ABS:
      goto L879;
    case FLOAT_TRUNCATE:
      goto L1017;
    case FLOAT:
      goto L1174;
    case IF_THEN_ELSE:
      goto L2079;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L550:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1226;
    }
  if (GET_CODE (x2) == MULT && 1)
    goto L551;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L9;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L551:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L552;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L552:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L553;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L553:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 51;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L9:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 1;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L564:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1226;
    }
  if (GET_CODE (x2) == MULT && 1)
    goto L565;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L595;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L565:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L566;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L566:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L567;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L567:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 53;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L595:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1226;
    }
  if (GET_CODE (x2) == MULT && 1)
    goto L596;
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 14;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L596:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L597;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L597:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 57;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L164:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L165;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L165:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 27;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L579:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1226;
    }
  if (GET_CODE (x2) == PLUS && 1)
    goto L580;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 85;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L580:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode && GET_CODE (x3) == MULT && 1)
    goto L581;
  x1 = XEXP (x0, 0);
  goto L1226;

  L581:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L582;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L582:
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      ro[2] = x4;
      goto L583;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L583:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 55;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L606:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L607;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L607:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 59;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L863:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && HAVE_SQRT_P())
	return 73;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L879:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 77;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L1017:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 103;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L1174:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    return 139;
	  }
      break;
    case DImode:
      if (nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    return 140;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L2079:
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2080;
    }
  L2087:
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2088;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L2080:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2081;
    }
  goto L2087;

  L2081:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2082;
  goto L2087;

  L2082:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      goto L2083;
    }
  x2 = XEXP (x1, 0);
  goto L2087;

  L2083:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 332;
      }
  x2 = XEXP (x1, 0);
  goto L2087;

  L2088:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L2089;
  x1 = XEXP (x0, 0);
  goto L1226;

  L2089:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2090;
  x1 = XEXP (x0, 0);
  goto L1226;

  L2090:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L2091;
    }
  x1 = XEXP (x0, 0);
  goto L1226;

  L2091:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 333;
      }
  x1 = XEXP (x0, 0);
  goto L1226;

  L1227:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    goto L1231;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1231:
  ro[1] = x1;
  if (TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (SFmode)))
    return 168;
  L1232:
  ro[1] = x1;
  if (TARGET_SOFT_FLOAT
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (SFmode)))
    return 169;
  x1 = XEXP (x0, 0);
  goto L1936;
 L12:
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1125;

  L1126:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == FIX && 1)
    goto L1127;
  x1 = XEXP (x0, 0);
  goto L1202;

  L1127:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (pnum_clobbers != 0 && register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 2;
	      return 133;
	    }
	  }
      break;
    case SFmode:
      if (pnum_clobbers != 0 && register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    {
	      *pnum_clobbers = 2;
	      return 134;
	    }
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1202;

  L1203:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    goto L1207;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1207:
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 158;
  L1208:
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 159;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1256:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == UNSPEC_VOLATILE && XINT (x1, 1) == 2 && XVECLEN (x1, 0) == 1 && 1)
    goto L1257;
  x1 = XEXP (x0, 0);
  goto L68;

  L1257:
  x2 = XVECEXP (x1, 0, 0);
  if (pnum_clobbers != 0 && address_operand (x2, DImode))
    {
      ro[0] = x2;
      *pnum_clobbers = 1;
      return 175;
    }
  x1 = XEXP (x0, 0);
  goto L68;
 L69:
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1149;

  L1150:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == FIX && 1)
    goto L1151;
  x1 = XEXP (x0, 0);
  goto L1188;

  L1151:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (pnum_clobbers != 0 && register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 1;
	      return 135;
	    }
	  }
      break;
    case SFmode:
      if (pnum_clobbers != 0 && register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 1;
	      return 136;
	    }
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1188;

  L1189:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    goto L1196;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1196:
  ro[1] = x1;
  if (!TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode)))
    return 151;
  L1197:
  ro[1] = x1;
  if (TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode)))
    return 153;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1024:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != HImode)
    {
      x1 = XEXP (x0, 0);
      goto L1210;
    }
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1025;
    case ZERO_EXTEND:
      goto L1061;
    case SIGN_EXTEND:
      goto L1102;
    }
  x1 = XEXP (x0, 0);
  goto L1210;

  L1025:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 105;
      }
  x1 = XEXP (x0, 0);
  goto L1210;

  L1061:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != QImode)
    {
      x1 = XEXP (x0, 0);
      goto L1210;
    }
  if (GET_CODE (x2) == TRUNCATE && 1)
    goto L1062;
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      return 117;
    }
  x1 = XEXP (x0, 0);
  goto L1210;

  L1062:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT)
	return 112;
      }
  x1 = XEXP (x0, 0);
  goto L1210;

  L1102:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      ro[1] = x2;
      return 127;
    }
  x1 = XEXP (x0, 0);
  goto L1210;

  L1211:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    goto L1215;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1215:
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 162;
  L1216:
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 163;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1028:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode && GET_CODE (x1) == TRUNCATE && 1)
    goto L1029;
  x1 = XEXP (x0, 0);
  goto L1184;

  L1029:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 106;
      }
  x1 = XEXP (x0, 0);
  goto L1184;

  L1185:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == UNSPEC && XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
    goto L1186;
  x1 = XEXP (x0, 0);
  goto L1218;

  L1186:
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      return 149;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L1219:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    goto L1223;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1223:
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 165;
  L1224:
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 166;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1814:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != CC_FPmode)
    {
      x1 = XEXP (x0, 0);
      goto L1936;
    }
  switch (GET_CODE (x1))
    {
    case EQ:
      goto L1815;
    case LT:
      goto L1825;
    case LE:
      goto L1830;
    case GT:
      goto L1835;
    case GE:
      goto L1840;
    }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1815:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1816;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1846;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1816:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 285;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1846:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 291;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1825:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1826;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1856;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1826:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 287;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1856:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 293;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1830:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1831;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1861;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1831:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 288;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1861:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 294;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1835:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1836;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1866;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1836:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 289;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1866:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 295;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1840:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1841;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1871;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1841:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 290;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1871:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 296;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1819:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_REV_FPmode && GET_CODE (x1) == NE && 1)
    goto L1820;
  x1 = XEXP (x0, 0);
  goto L1936;

  L1820:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1821;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1851;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1821:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 286;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1851:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 292;
      }
  x1 = XEXP (x0, 0);
  goto L1936;

  L1878:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  if (!TARGET_LONG64)
	    return 299;
	  }
      break;
    case DImode:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  if (TARGET_LONG64)
	    return 300;
	  }
    }
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L1551;
    case LABEL_REF:
      goto L1875;
    }
  goto ret0;

  L1551:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case CC_FPmode:
      switch (GET_CODE (x2))
	{
	case NE:
	  goto L1552;
	case EQ:
	  goto L1568;
	}
      break;
    case CC_REV_FPmode:
      switch (GET_CODE (x2))
	{
	case NE:
	  goto L1560;
	case EQ:
	  goto L1576;
	}
      break;
    case SImode:
      if (cmp_op (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1584;
	}
    L1599:
      if (equality_op (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1600;
	}
      break;
    case DImode:
      if (cmp_op (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1592;
	}
    L1607:
      if (equality_op (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1608;
	}
    }
  goto ret0;

  L1552:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L1553;
  goto ret0;

  L1553:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1554;
  goto ret0;

  L1554:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1555;
    }
  goto ret0;

  L1555:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 217;
      }
  goto ret0;

  L1568:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L1569;
  goto ret0;

  L1569:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1570;
  goto ret0;

  L1570:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1571;
    }
  goto ret0;

  L1571:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 219;
      }
  goto ret0;

  L1560:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_REV_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L1561;
  goto ret0;

  L1561:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1562;
  goto ret0;

  L1562:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1563;
    }
  goto ret0;

  L1563:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 218;
      }
  goto ret0;

  L1576:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_REV_FPmode && GET_CODE (x3) == REG && XINT (x3, 0) == 67 && 1)
    goto L1577;
  goto ret0;

  L1577:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1578;
  goto ret0;

  L1578:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1579;
    }
  goto ret0;

  L1579:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 220;
      }
  goto ret0;

  L1584:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1585;
    }
  goto L1599;

  L1585:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1586;
  goto L1599;

  L1586:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L1587;
    }
  x2 = XEXP (x1, 0);
  goto L1599;

  L1587:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      return 221;
    }
  x2 = XEXP (x1, 0);
  goto L1599;

  L1600:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1601;
    }
  goto ret0;

  L1601:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1602;
    }
  goto ret0;

  L1602:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1603;
    }
  goto ret0;

  L1603:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[4] = x2;
      return 223;
    }
  goto ret0;

  L1592:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1593;
    }
  goto L1607;

  L1593:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1594;
  goto L1607;

  L1594:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L1595;
    }
  x2 = XEXP (x1, 0);
  goto L1607;

  L1595:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      return 222;
    }
  x2 = XEXP (x1, 0);
  goto L1607;

  L1608:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1609;
    }
  goto ret0;

  L1609:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L1610;
    }
  goto ret0;

  L1610:
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1611;
    }
  goto ret0;

  L1611:
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[4] = x2;
      return 224;
    }
  goto ret0;

  L1875:
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  return 297;

  L1937:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == UNSPEC && XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
    goto L1938;
  goto ret0;

  L1938:
  x2 = XVECEXP (x1, 0, 0);
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x2;
      if (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF)
	{
	  *pnum_clobbers = 1;
	  return 310;
	}
      }
  goto ret0;
 ret0: return -1;
}

int
recog_4 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L452;
    case MINUS:
      goto L97;
    case MULT:
      goto L257;
    case DIV:
      goto L657;
    case UDIV:
      goto L713;
    case NEG:
      goto L914;
    case ASHIFT:
      goto L1341;
    case ASHIFTRT:
      goto L1413;
    case LSHIFTRT:
      goto L1485;
    }
  goto ret0;

  L452:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  if (GET_CODE (x3) == MULT && 1)
    goto L453;
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L20;
    }
  goto ret0;

  L453:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L454;
    case ZERO_EXTEND:
      goto L500;
    }
  goto ret0;

  L454:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L455;
    }
  goto ret0;

  L455:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L456;
  goto ret0;

  L456:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L457;
    }
  goto ret0;

  L457:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L458;
  goto ret0;

  L458:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L459;
  goto ret0;

  L459:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_MAD && ! TARGET_64BIT)
	return 46;
      }
  goto ret0;

  L500:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L501;
    }
  goto ret0;

  L501:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L502;
  goto ret0;

  L502:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L503;
    }
  goto ret0;

  L503:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L504;
  goto ret0;

  L504:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L505;
  goto ret0;

  L505:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_MAD && ! TARGET_64BIT)
	return 48;
      }
  goto ret0;

  L20:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L21;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L47;
    }
  goto ret0;

  L21:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L22;
  goto ret0;

  L22:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 5;
      }
  goto ret0;

  L47:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L48;
  goto ret0;

  L48:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && INTVAL (operands[2]) != -32768)
	return 8;
      }
  goto ret0;

  L97:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L98;
    }
  goto ret0;

  L98:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L99;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L125;
    }
  goto ret0;

  L99:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L100;
  goto ret0;

  L100:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 18;
      }
  goto ret0;

  L125:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L126;
  goto ret0;

  L126:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && INTVAL (operands[2]) != -32768)
	return 21;
      }
  goto ret0;

  L257:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L258;
    case ZERO_EXTEND:
      goto L321;
    }
  goto ret0;

  L258:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L259;
    }
  goto ret0;

  L259:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == SIGN_EXTEND && 1)
    goto L260;
  goto ret0;

  L260:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L261;
    }
  goto ret0;

  L261:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L262;
  goto ret0;

  L262:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT)
	return 36;
      }
  goto ret0;

  L321:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L322;
    }
  goto ret0;

  L322:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L323;
  goto ret0;

  L323:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L324;
    }
  goto ret0;

  L324:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L325;
  goto ret0;

  L325:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT)
	return 40;
      }
  goto ret0;

  L657:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L658;
    }
  goto ret0;

  L658:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L659;
    }
  goto ret0;

  L659:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L660;
  goto ret0;

  L660:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L661;
    }
  goto ret0;

  L661:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MOD && 1)
    goto L662;
  goto ret0;

  L662:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L663;
  goto ret0;

  L663:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT && optimize)
      {
	*pnum_clobbers = 3;
	return 61;
      }
  goto ret0;

  L713:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L714;
    }
  goto ret0;

  L714:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L715;
    }
  goto ret0;

  L715:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L716;
  goto ret0;

  L716:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L717;
    }
  goto ret0;

  L717:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UMOD && 1)
    goto L718;
  goto ret0;

  L718:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L719;
  goto ret0;

  L719:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT && optimize)
      {
	*pnum_clobbers = 3;
	return 63;
      }
  goto ret0;

  L914:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L915;
    }
  goto ret0;

  L915:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L916;
  goto ret0;

  L916:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 82;
      }
  goto ret0;

  L1341:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1342;
    }
  goto ret0;

  L1342:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1343;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1351;
    }
  goto ret0;

  L1343:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1344;
  goto ret0;

  L1344:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 183;
      }
  goto ret0;

  L1351:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1352;
  goto ret0;

  L1352:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1379;
  goto ret0;

  L1379:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
    return 184;
  L1380:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 187;
  goto ret0;

  L1413:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1414;
    }
  goto ret0;

  L1414:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1415;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1423;
    }
  goto ret0;

  L1415:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1416;
  goto ret0;

  L1416:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 193;
      }
  goto ret0;

  L1423:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1424;
  goto ret0;

  L1424:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1451;
  goto ret0;

  L1451:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
    return 194;
  L1452:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 197;
  goto ret0;

  L1485:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1486;
    }
  goto ret0;

  L1486:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1487;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1495;
    }
  goto ret0;

  L1487:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1488;
  goto ret0;

  L1488:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE)
	return 203;
      }
  goto ret0;

  L1495:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1496;
  goto ret0;

  L1496:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1523;
  goto ret0;

  L1523:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
    return 204;
  L1524:
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 207;
  goto ret0;
 ret0: return -1;
}

int
recog_5 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L18;
	}
    L1143:
      if (general_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1144;
	}
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L628;
	}
    }
  L1249:
  switch (GET_CODE (x2))
    {
    case REG:
      if (GET_MODE (x2) == DImode && XINT (x2, 0) == 28 && 1)
	goto L1250;
      break;
    case PC:
      goto L1885;
    }
  L1930:
  if (register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1931;
    }
  goto ret0;
 L18:
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L1143;

  L1144:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == FIX && 1)
    goto L1145;
  x2 = XEXP (x1, 0);
  goto L1249;

  L1145:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  goto L1146;
	}
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  goto L1157;
	}
    }
  x2 = XEXP (x1, 0);
  goto L1249;

  L1146:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1147;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1249;

  L1147:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	return 135;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1249;

  L1157:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1158;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1249;

  L1158:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	return 136;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1249;

  L628:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L1930;
    }
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L629;
    case UDIV:
      goto L685;
    }
  x2 = XEXP (x1, 0);
  goto L1930;

  L629:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L630;
    }
  x2 = XEXP (x1, 0);
  goto L1930;

  L630:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L631;
    }
  x2 = XEXP (x1, 0);
  goto L1930;

  L631:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L632;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L632:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L633;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L633:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MOD && 1)
    goto L634;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L634:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L635;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L635:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (optimize)
      {
	*pnum_clobbers = 3;
	return 60;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L685:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L686;
    }
  x2 = XEXP (x1, 0);
  goto L1930;

  L686:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L687;
    }
  x2 = XEXP (x1, 0);
  goto L1930;

  L687:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L688;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L688:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L689;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L689:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UMOD && 1)
    goto L690;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L690:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L691;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L691:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (optimize)
      {
	*pnum_clobbers = 3;
	return 62;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L1250:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == UNSPEC_VOLATILE && XINT (x2, 1) == 2 && XVECLEN (x2, 0) == 1 && 1)
    goto L1251;
  x2 = XEXP (x1, 0);
  goto L1930;

  L1251:
  x3 = XVECEXP (x2, 0, 0);
  if (address_operand (x3, DImode))
    {
      ro[0] = x3;
      goto L1252;
    }
  x2 = XEXP (x1, 0);
  goto L1930;

  L1252:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1253;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L1253:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == REG && XINT (x2, 0) == 1 && 1)
    return 175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1930;

  L1885:
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1886;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1893;
	}
    }
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1918;
  goto ret0;

  L1886:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1887;
  goto ret0;

  L1887:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1888;
  goto ret0;

  L1888:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (!TARGET_LONG64)
    return 302;
  goto ret0;

  L1893:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1894;
  goto ret0;

  L1894:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1895;
  goto ret0;

  L1895:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (TARGET_LONG64)
    return 303;
  goto ret0;

  L1918:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L1919;
  goto ret0;

  L1919:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L1920;
  goto ret0;

  L1920:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[0] = x5;
      goto L1921;
    }
  goto ret0;

  L1921:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 4 && 1)
    goto L1922;
  goto ret0;

  L1922:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF && 1)
    goto L1923;
  goto ret0;

  L1923:
  x5 = XEXP (x4, 0);
  ro[1] = x5;
  goto L1924;

  L1924:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1925;
  goto ret0;

  L1925:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_EMBEDDED_PIC)
	{
	  *pnum_clobbers = 1;
	  return 307;
	}
      }
  goto ret0;

  L1931:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      if (XINT (x2, 1) == 1 && XVECLEN (x2, 0) == 1 && 1)
	goto L1932;
      break;
    case CALL:
      goto L1989;
    }
  goto ret0;

  L1932:
  x3 = XVECEXP (x2, 0, 0);
  ro[1] = x3;
  goto L1933;

  L1933:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1934;
  goto ret0;

  L1934:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 31 && 1)
    if (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF)
      return 310;
  goto ret0;

  L1989:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM)
    goto ret0;
  if (call_insn_operand (x3, VOIDmode))
    {
      ro[1] = x3;
      goto L1990;
    }
  L2007:
  if (GET_CODE (x3) != MEM)
    goto ret0;
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L2008;
    case DImode:
      goto L2017;
    }
  goto ret0;

  L1990:
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L1991;

  L1991:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1992;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2007;

  L1992:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2001;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2007;

  L2001:
  ro[3] = x2;
  if (!TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 319;
  L2002:
  ro[3] = x2;
  if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 320;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2007;

  L2008:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2009;
    }
  goto ret0;

  L2009:
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2010;

  L2010:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2011;
  goto ret0;

  L2011:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2030;
  goto ret0;

  L2030:
  ro[3] = x2;
  if (!TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 321;
  L2031:
  ro[3] = x2;
  if (!TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 323;
  goto ret0;

  L2017:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      ro[1] = x4;
      goto L2018;
    }
  goto ret0;

  L2018:
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2019;

  L2019:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2020;
  goto ret0;

  L2020:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2041;
  goto ret0;

  L2041:
  ro[3] = x2;
  if (TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 322;
  L2042:
  ro[3] = x2;
  if (TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 324;
  goto ret0;
 ret0: return -1;
}

int
recog_6 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L274;
    case TRUNCATE:
      goto L383;
    case PLUS:
      goto L473;
    case FFS:
      goto L897;
    }
  goto ret0;

  L274:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L275;
    case ZERO_EXTEND:
      goto L338;
    case SUBREG:
    case REG:
      if (register_operand (x3, DImode))
	{
	  ro[1] = x3;
	  goto L224;
	}
    }
  goto ret0;

  L275:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L276;
    }
  goto ret0;

  L276:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == SIGN_EXTEND && 1)
    goto L277;
  goto ret0;

  L277:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L278;
    }
  goto ret0;

  L278:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L279;
  goto ret0;

  L279:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L280;
    }
  goto ret0;

  L280:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L281;
  goto ret0;

  L281:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 37;
      }
  goto ret0;

  L338:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L339;
    }
  goto ret0;

  L339:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L340;
  goto ret0;

  L340:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L341;
    }
  goto ret0;

  L341:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L342;
  goto ret0;

  L342:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L343;
    }
  goto ret0;

  L343:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L344;
  goto ret0;

  L344:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 41;
      }
  goto ret0;

  L224:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L225;
    }
  goto ret0;

  L225:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L226;
  goto ret0;

  L226:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L227;
    }
  goto ret0;

  L227:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L228;
  goto ret0;

  L228:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT && mips_cpu != PROCESSOR_R4000)
	return 33;
      }
  goto ret0;

  L383:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode && GET_CODE (x3) == LSHIFTRT && 1)
    goto L384;
  goto ret0;

  L384:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == MULT && 1)
    goto L385;
  goto ret0;

  L385:
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != TImode)
    goto ret0;
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L386;
    case ZERO_EXTEND:
      goto L411;
    }
  goto ret0;

  L386:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      ro[1] = x6;
      goto L387;
    }
  goto ret0;

  L387:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode && GET_CODE (x5) == SIGN_EXTEND && 1)
    goto L388;
  goto ret0;

  L388:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      ro[2] = x6;
      goto L389;
    }
  goto ret0;

  L389:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 64 && 1)
    goto L390;
  goto ret0;

  L390:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L391;
  goto ret0;

  L391:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L392;
    }
  goto ret0;

  L392:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L393;
  goto ret0;

  L393:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 43;
      }
  goto ret0;

  L411:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      ro[1] = x6;
      goto L412;
    }
  goto ret0;

  L412:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode && GET_CODE (x5) == ZERO_EXTEND && 1)
    goto L413;
  goto ret0;

  L413:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      ro[2] = x6;
      goto L414;
    }
  goto ret0;

  L414:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 64 && 1)
    goto L415;
  goto ret0;

  L415:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L416;
  goto ret0;

  L416:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L417;
    }
  goto ret0;

  L417:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L418;
  goto ret0;

  L418:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 44;
      }
  goto ret0;

  L473:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == MULT && 1)
    goto L474;
  goto ret0;

  L474:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L475;
    case ZERO_EXTEND:
      goto L521;
    }
  goto ret0;

  L475:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L476;
    }
  goto ret0;

  L476:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L477;
  goto ret0;

  L477:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L478;
    }
  goto ret0;

  L478:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L479;
  goto ret0;

  L479:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L480;
  goto ret0;

  L480:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L481;
    }
  goto ret0;

  L481:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L482;
  goto ret0;

  L482:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_MAD && TARGET_64BIT)
	return 47;
      }
  goto ret0;

  L521:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L522;
    }
  goto ret0;

  L522:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L523;
  goto ret0;

  L523:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L524;
    }
  goto ret0;

  L524:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L525;
  goto ret0;

  L525:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L526;
  goto ret0;

  L526:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L527;
    }
  goto ret0;

  L527:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L528;
  goto ret0;

  L528:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_MAD && TARGET_64BIT)
	return 49;
      }
  goto ret0;

  L897:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L898;
    }
  goto ret0;

  L898:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L899;
  goto ret0;

  L899:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L900;
    }
  goto ret0;

  L900:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L901;
  goto ret0;

  L901:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_64BIT)
	return 79;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_7 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L169;
	}
    L1117:
      if (general_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1118;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L222;
	}
    }
  if (GET_CODE (x2) == PC && 1)
    goto L1903;
  goto ret0;

  L169:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L1117;
    }
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L170;
    case TRUNCATE:
      goto L295;
    case PLUS:
      goto L433;
    case FFS:
      goto L884;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L170:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L171;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L171:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L172;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L172:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L173;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L173:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L174;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L174:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L175:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (mips_cpu != PROCESSOR_R4000)
	return 29;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L295:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == LSHIFTRT && 1)
    goto L296;
  x2 = XEXP (x1, 0);
  goto L1117;

  L296:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == MULT && 1)
    goto L297;
  x2 = XEXP (x1, 0);
  goto L1117;

  L297:
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != DImode)
    {
      x2 = XEXP (x1, 0);
      goto L1117;
    }
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L298;
    case ZERO_EXTEND:
      goto L361;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L298:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L299;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L299:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == SIGN_EXTEND && 1)
    goto L300;
  x2 = XEXP (x1, 0);
  goto L1117;

  L300:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L301;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L301:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L302;
  x2 = XEXP (x1, 0);
  goto L1117;

  L302:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L303;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L303:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L304;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L304:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L305;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L305:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      return 38;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L361:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L362;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L362:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == ZERO_EXTEND && 1)
    goto L363;
  x2 = XEXP (x1, 0);
  goto L1117;

  L363:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L364;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L364:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L365;
  x2 = XEXP (x1, 0);
  goto L1117;

  L365:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L366;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L366:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L367;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L367:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L368;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L368:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      return 42;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L433:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L434;
  x2 = XEXP (x1, 0);
  goto L1117;

  L434:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L435;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L435:
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L436;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L436:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L437;
  x2 = XEXP (x1, 0);
  goto L1117;

  L437:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L438;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L438:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L439;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L439:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L440;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L440:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_MAD)
	return 45;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L884:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L885;
    }
  x2 = XEXP (x1, 0);
  goto L1117;

  L885:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L886;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L886:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L887;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L887:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L888;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L888:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 78;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1117;

  L1118:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == FIX && 1)
    goto L1119;
  goto ret0;

  L1119:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  goto L1120;
	}
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  goto L1133;
	}
    }
  goto ret0;

  L1120:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1121;
  goto ret0;

  L1121:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1122;
    }
  goto ret0;

  L1122:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1123;
  goto ret0;

  L1123:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 133;
      }
  goto ret0;

  L1133:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1134;
  goto ret0;

  L1134:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1135;
    }
  goto ret0;

  L1135:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1136;
  goto ret0;

  L1136:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (TARGET_HARD_FLOAT)
	return 134;
      }
  goto ret0;
 L222:
  return recog_6 (x0, insn, pnum_clobbers);

  L1903:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1904;
  goto ret0;

  L1904:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L1905;
  goto ret0;

  L1905:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L1906;
  goto ret0;

  L1906:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[0] = x5;
      goto L1907;
    }
  goto ret0;

  L1907:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 4 && 1)
    goto L1908;
  goto ret0;

  L1908:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF && 1)
    goto L1909;
  goto ret0;

  L1909:
  x5 = XEXP (x4, 0);
  ro[1] = x5;
  goto L1910;

  L1910:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1911;
  goto ret0;

  L1911:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1912;
    }
  goto ret0;

  L1912:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1913;
  goto ret0;

  L1913:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 31 && 1)
    if (TARGET_EMBEDDED_PIC)
      return 307;
  goto ret0;
 ret0: return -1;
}

int
recog_8 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L184;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L237;
	}
    }
  goto ret0;

  L184:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L185;
    case DIV:
      goto L724;
    case MOD:
      goto L758;
    case UDIV:
      goto L792;
    case UMOD:
      goto L826;
    }
  goto ret0;

  L185:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L186;
    }
  goto ret0;

  L186:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L187;
    }
  goto ret0;

  L187:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L188;
  goto ret0;

  L188:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L189;
    }
  goto ret0;

  L189:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L190;
  goto ret0;

  L190:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L191;
    }
  goto ret0;

  L191:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L192;
  goto ret0;

  L192:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    goto L217;
  goto ret0;

  L217:
  ro[5] = x2;
  if (mips_cpu == PROCESSOR_R4000)
    return 30;
  L218:
  ro[5] = x2;
  if (TARGET_MAD)
    return 31;
  goto ret0;

  L724:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L725;
    }
  goto ret0;

  L725:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L726;
    }
  goto ret0;

  L726:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L727;
  goto ret0;

  L727:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L728;
    }
  goto ret0;

  L728:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L729;
  goto ret0;

  L729:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L730;
    }
  goto ret0;

  L730:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L731;
  goto ret0;

  L731:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 64;
      }
  goto ret0;

  L758:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L759;
    }
  goto ret0;

  L759:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L760;
    }
  goto ret0;

  L760:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L761;
  goto ret0;

  L761:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L762;
    }
  goto ret0;

  L762:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L763;
  goto ret0;

  L763:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L764;
    }
  goto ret0;

  L764:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L765;
  goto ret0;

  L765:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 66;
      }
  goto ret0;

  L792:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L793;
    }
  goto ret0;

  L793:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L794;
    }
  goto ret0;

  L794:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L795;
  goto ret0;

  L795:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L796;
    }
  goto ret0;

  L796:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L797;
  goto ret0;

  L797:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L798;
    }
  goto ret0;

  L798:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L799;
  goto ret0;

  L799:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 68;
      }
  goto ret0;

  L826:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L827;
    }
  goto ret0;

  L827:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L828;
    }
  goto ret0;

  L828:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L829;
  goto ret0;

  L829:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L830;
    }
  goto ret0;

  L830:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L831;
  goto ret0;

  L831:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L832;
    }
  goto ret0;

  L832:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L833;
  goto ret0;

  L833:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (!optimize)
	return 70;
      }
  goto ret0;

  L237:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L238;
    case DIV:
      goto L741;
    case MOD:
      goto L775;
    case UDIV:
      goto L809;
    case UMOD:
      goto L843;
    }
  goto ret0;

  L238:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L239;
    }
  goto ret0;

  L239:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L240;
    }
  goto ret0;

  L240:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L241;
  goto ret0;

  L241:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L242;
    }
  goto ret0;

  L242:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L243;
  goto ret0;

  L243:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L244;
    }
  goto ret0;

  L244:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L245;
  goto ret0;

  L245:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      if (TARGET_64BIT && mips_cpu == PROCESSOR_R4000)
	return 34;
      }
  goto ret0;

  L741:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L742;
    }
  goto ret0;

  L742:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L743;
    }
  goto ret0;

  L743:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L744;
  goto ret0;

  L744:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L745;
    }
  goto ret0;

  L745:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L746;
  goto ret0;

  L746:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L747;
    }
  goto ret0;

  L747:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L748;
  goto ret0;

  L748:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 65;
      }
  goto ret0;

  L775:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L776;
    }
  goto ret0;

  L776:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L777;
    }
  goto ret0;

  L777:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L778;
  goto ret0;

  L778:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L779;
    }
  goto ret0;

  L779:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L780;
  goto ret0;

  L780:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L781;
    }
  goto ret0;

  L781:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L782;
  goto ret0;

  L782:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 67;
      }
  goto ret0;

  L809:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L810;
    }
  goto ret0;

  L810:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L811;
    }
  goto ret0;

  L811:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L812;
  goto ret0;

  L812:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L813;
    }
  goto ret0;

  L813:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L814;
  goto ret0;

  L814:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L815;
    }
  goto ret0;

  L815:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L816;
  goto ret0;

  L816:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 69;
      }
  goto ret0;

  L843:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L844;
    }
  goto ret0;

  L844:
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L845;
    }
  goto ret0;

  L845:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L846;
  goto ret0;

  L846:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L847;
    }
  goto ret0;

  L847:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L848;
  goto ret0;

  L848:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L849;
    }
  goto ret0;

  L849:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L850;
  goto ret0;

  L850:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && !optimize)
	return 71;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_9 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L611;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L639;
	}
    }
  goto ret0;

  L611:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L612;
    case UDIV:
      goto L668;
    }
  goto ret0;

  L612:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L613;
    }
  goto ret0;

  L613:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L614;
    }
  goto ret0;

  L614:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L615;
  goto ret0;

  L615:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L616;
    }
  goto ret0;

  L616:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MOD && 1)
    goto L617;
  goto ret0;

  L617:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L618;
  goto ret0;

  L618:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L619;
  goto ret0;

  L619:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L620;
  goto ret0;

  L620:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L621;
    }
  goto ret0;

  L621:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L622;
  goto ret0;

  L622:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L623;
    }
  goto ret0;

  L623:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L624;
  goto ret0;

  L624:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (optimize)
	return 60;
      }
  goto ret0;

  L668:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L669;
    }
  goto ret0;

  L669:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L670;
    }
  goto ret0;

  L670:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L671;
  goto ret0;

  L671:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L672;
    }
  goto ret0;

  L672:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UMOD && 1)
    goto L673;
  goto ret0;

  L673:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L674;
  goto ret0;

  L674:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L675;
  goto ret0;

  L675:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L676;
  goto ret0;

  L676:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L677;
    }
  goto ret0;

  L677:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L678;
  goto ret0;

  L678:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L679;
    }
  goto ret0;

  L679:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L680;
  goto ret0;

  L680:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (optimize)
	return 62;
      }
  goto ret0;

  L639:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L640;
    case UDIV:
      goto L696;
    }
  goto ret0;

  L640:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L641;
    }
  goto ret0;

  L641:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L642;
    }
  goto ret0;

  L642:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L643;
  goto ret0;

  L643:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L644;
    }
  goto ret0;

  L644:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MOD && 1)
    goto L645;
  goto ret0;

  L645:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L646;
  goto ret0;

  L646:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L647;
  goto ret0;

  L647:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L648;
  goto ret0;

  L648:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L649;
    }
  goto ret0;

  L649:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L650;
  goto ret0;

  L650:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      goto L651;
    }
  goto ret0;

  L651:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L652;
  goto ret0;

  L652:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && optimize)
	return 61;
      }
  goto ret0;

  L696:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L697;
    }
  goto ret0;

  L697:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L698;
    }
  goto ret0;

  L698:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L699;
  goto ret0;

  L699:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L700;
    }
  goto ret0;

  L700:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UMOD && 1)
    goto L701;
  goto ret0;

  L701:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L702;
  goto ret0;

  L702:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L703;
  goto ret0;

  L703:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L704;
  goto ret0;

  L704:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L705;
    }
  goto ret0;

  L705:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L706;
  goto ret0;

  L706:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      goto L707;
    }
  goto ret0;

  L707:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L708;
  goto ret0;

  L708:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && optimize)
	return 63;
      }
  goto ret0;
 ret0: return -1;
}

int
recog (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  L0:
  switch (GET_CODE (x0))
    {
    case SET:
      goto L1;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L16;
      if (XVECLEN (x0, 0) == 3 && 1)
	goto L167;
      if (XVECLEN (x0, 0) == 4 && 1)
	goto L182;
      if (XVECLEN (x0, 0) == 5 && 1)
	goto L609;
      if (XVECLEN (x0, 0) == 8 && 1)
	goto L1259;
      break;
    case UNSPEC_VOLATILE:
      if (XINT (x0, 1) == 0 && XVECLEN (x0, 0) == 1 && 1)
	goto L1927;
      break;
    case CONST_INT:
      if (XWINT (x0, 0) == 0 && 1)
	return 326;
    }
  goto ret0;
 L1:
  return recog_3 (x0, insn, pnum_clobbers);

  L16:
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L17;
    case RETURN:
      goto L1898;
    case CALL:
      goto L1941;
    }
  goto ret0;
 L17:
  return recog_5 (x0, insn, pnum_clobbers);

  L1898:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1899;
  goto ret0;

  L1899:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[0] = x2;
      return 305;
    }
  goto ret0;

  L1941:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MEM)
    goto ret0;
  if (call_insn_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1942;
    }
  L1955:
  if (GET_CODE (x2) != MEM)
    goto ret0;
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L1956;
    case DImode:
      goto L1963;
    }
  goto ret0;

  L1942:
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L1943;

  L1943:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1944;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1955;

  L1944:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1951;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1955;

  L1951:
  ro[2] = x2;
  if (!TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 312;
  L1952:
  ro[2] = x2;
  if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 313;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1955;

  L1956:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1957;
    }
  goto ret0;

  L1957:
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L1958;

  L1958:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1959;
  goto ret0;

  L1959:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1974;
  goto ret0;

  L1974:
  ro[2] = x2;
  if (!TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 314;
  L1975:
  ro[2] = x2;
  if (!TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 316;
  goto ret0;

  L1963:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[0] = x3;
      goto L1964;
    }
  goto ret0;

  L1964:
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L1965;

  L1965:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1966;
  goto ret0;

  L1966:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1983;
  goto ret0;

  L1983:
  ro[2] = x2;
  if (TARGET_LONG64 && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 315;
  L1984:
  ro[2] = x2;
  if (TARGET_LONG64 && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 317;
  goto ret0;

  L167:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L168;
  goto ret0;
 L168:
  return recog_7 (x0, insn, pnum_clobbers);

  L182:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L183;
  goto ret0;
 L183:
  return recog_8 (x0, insn, pnum_clobbers);

  L609:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L610;
  goto ret0;
 L610:
  return recog_9 (x0, insn, pnum_clobbers);

  L1259:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1260;
  goto ret0;

  L1260:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, BLKmode))
    {
      ro[0] = x2;
      goto L1261;
    }
  goto ret0;

  L1261:
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, BLKmode))
    {
      ro[1] = x2;
      goto L1262;
    }
  goto ret0;

  L1262:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1263;
  goto ret0;

  L1263:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1264;
    }
  goto ret0;

  L1264:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1265;
  goto ret0;

  L1265:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L1266;
    }
  goto ret0;

  L1266:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1267;
  goto ret0;

  L1267:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L1268;
    }
  goto ret0;

  L1268:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1269;
  goto ret0;

  L1269:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[7] = x2;
      goto L1270;
    }
  goto ret0;

  L1270:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE && 1)
    goto L1271;
  goto ret0;

  L1271:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      goto L1272;
    }
  goto ret0;

  L1272:
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == USE && 1)
    goto L1273;
  goto ret0;

  L1273:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[3] = x2;
      goto L1274;
    }
  goto ret0;

  L1274:
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == USE && 1)
    goto L1275;
  goto ret0;

  L1275:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != CONST_INT)
    goto ret0;
  if (XWINT (x2, 0) == 0 && 1)
    return 177;
  if (GET_CODE (x2) != CONST_INT)
    goto ret0;
  if (XWINT (x2, 0) == 1 && 1)
    return 179;
  if (XWINT (x2, 0) == 2 && 1)
    return 180;
  goto ret0;

  L1927:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 309;
  goto ret0;
 ret0: return -1;
}

rtx
split_1 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  rtx tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L27;
    case MINUS:
      goto L105;
    case ASHIFT:
      goto L1357;
    case ASHIFTRT:
      goto L1429;
    case LSHIFTRT:
      goto L1501;
    }
  goto ret0;

  L27:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L28;
    }
  goto ret0;

  L28:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L29;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L55;
    }
  goto ret0;

  L29:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L30;
  goto ret0;

  L30:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L39;
  goto ret0;

  L39:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2])))
    return gen_split_6 (operands);
  L40:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2])))
    return gen_split_7 (operands);
  goto ret0;

  L55:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L56;
  goto ret0;

  L56:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L65;
  goto ret0;

  L65:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_9 (operands);
  L66:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_10 (operands);
  goto ret0;

  L105:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L106;
    }
  goto ret0;

  L106:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L107;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L133;
    }
  goto ret0;

  L107:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L108;
  goto ret0;

  L108:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L117;
  goto ret0;

  L117:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
    return gen_split_19 (operands);
  L118:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
    return gen_split_20 (operands);
  goto ret0;

  L133:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L134;
  goto ret0;

  L134:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L143;
  goto ret0;

  L143:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_22 (operands);
  L144:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_23 (operands);
  goto ret0;

  L1357:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1358;
    }
  goto ret0;

  L1358:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1359;
    }
  goto ret0;

  L1359:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1360;
  goto ret0;

  L1360:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1369;
  L1388:
  if (register_operand (x2, SImode))
    goto L1397;
  goto ret0;

  L1369:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_185 (operands);
  L1370:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_186 (operands);
  goto L1388;

  L1397:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_188 (operands);
  L1398:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_189 (operands);
  goto ret0;

  L1429:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1430;
    }
  goto ret0;

  L1430:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1431;
    }
  goto ret0;

  L1431:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1432;
  goto ret0;

  L1432:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1441;
  L1460:
  if (register_operand (x2, SImode))
    goto L1469;
  goto ret0;

  L1441:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_195 (operands);
  L1442:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_196 (operands);
  goto L1460;

  L1469:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_198 (operands);
  L1470:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_199 (operands);
  goto ret0;

  L1501:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1502;
    }
  goto ret0;

  L1502:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1503;
    }
  goto ret0;

  L1503:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1504;
  goto ret0;

  L1504:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1513;
  L1532:
  if (register_operand (x2, SImode))
    goto L1541;
  goto ret0;

  L1513:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_205 (operands);
  L1514:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_206 (operands);
  goto L1532;

  L1541:
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_208 (operands);
  L1542:
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_209 (operands);
  goto ret0;
 ret0: return 0;
}

rtx
split_2 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  rtx tem;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DImode:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L939;
	}
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1629;
	}
      break;
    case DFmode:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1246;
	}
    }
  goto ret0;

  L939:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    case NOT:
      goto L956;
    case AND:
      goto L972;
    case IOR:
      goto L992;
    case XOR:
      goto L1007;
    case EQ:
      goto L1640;
    case NE:
      goto L1670;
    case GE:
      goto L1700;
    case LE:
      goto L1740;
    case GEU:
      goto L1770;
    case LEU:
      goto L1810;
    case SUBREG:
    case REG:
      if (register_operand (x1, DImode))
	{
	  ro[1] = x1;
	  if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	    return gen_split_152 (operands);
	  }
    }
  goto ret0;

  L956:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (GET_CODE (x2) == IOR && 1)
    goto L957;
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	return gen_split_88 (operands);
      }
  goto ret0;

  L957:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L958;
    }
  goto ret0;

  L958:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_91 (operands);
      }
  goto ret0;

  L972:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L973;
    }
  goto ret0;

  L973:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_94 (operands);
      }
  goto ret0;

  L992:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L993;
    }
  goto ret0;

  L993:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_98 (operands);
      }
  goto ret0;

  L1007:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1008;
    }
  goto ret0;

  L1008:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_101 (operands);
      }
  goto ret0;

  L1640:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1641;
    }
  goto ret0;

  L1641:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_241 (operands);
      }
  goto ret0;

  L1670:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1671;
    }
  goto ret0;

  L1671:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_248 (operands);
      }
  goto ret0;

  L1700:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1701;
    }
  goto ret0;

  L1701:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_256 (operands);
      }
  goto ret0;

  L1740:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1741;
    }
  goto ret0;

  L1741:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_266 (operands);
      }
  goto ret0;

  L1770:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1771;
    }
  goto ret0;

  L1771:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_274 (operands);
      }
  goto ret0;

  L1810:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1811;
    }
  goto ret0;

  L1811:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_284 (operands);
      }
  goto ret0;

  L1629:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      switch (GET_CODE (x1))
	{
	case EQ:
	  goto L1630;
	case NE:
	  goto L1660;
	case GE:
	  goto L1690;
	case LE:
	  goto L1730;
	case GEU:
	  goto L1760;
	case LEU:
	  goto L1800;
	}
    }
  if (GET_CODE (x1) == CONST_INT && large_int (x1, SImode))
    {
      ro[1] = x1;
      if (!TARGET_DEBUG_D_MODE)
	return gen_split_156 (operands);
      }
  goto ret0;

  L1630:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1631;
    }
  goto ret0;

  L1631:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_239 (operands);
      }
  goto ret0;

  L1660:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1661;
    }
  goto ret0;

  L1661:
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_246 (operands);
      }
  goto ret0;

  L1690:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1691;
    }
  goto ret0;

  L1691:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_254 (operands);
      }
  goto ret0;

  L1730:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1731;
    }
  goto ret0;

  L1731:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_264 (operands);
      }
  goto ret0;

  L1760:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1761;
    }
  goto ret0;

  L1761:
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_272 (operands);
      }
  goto ret0;

  L1800:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1801;
    }
  goto ret0;

  L1801:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE)
	return gen_split_282 (operands);
      }
  goto ret0;

  L1246:
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      ro[1] = x1;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	return gen_split_174 (operands);
      }
  goto ret0;
 ret0: return 0;
}

rtx
split_insns (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  rtx tem;

  L23:
  switch (GET_CODE (x0))
    {
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L24;
      if (XVECLEN (x0, 0) == 8 && 1)
	goto L1277;
      break;
    case SET:
      goto L938;
    }
  goto ret0;

  L24:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L25;
  goto ret0;

  L25:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[0] = x2;
      goto L26;
    }
  goto ret0;
 L26:
  return split_1 (x0, insn);

  L1277:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1278;
  goto ret0;

  L1278:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == MEM && 1)
    goto L1279;
  goto ret0;

  L1279:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1280;
    }
  goto ret0;

  L1280:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == MEM && 1)
    goto L1281;
  goto ret0;

  L1281:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1282;
    }
  goto ret0;

  L1282:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1283;
  goto ret0;

  L1283:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1284;
    }
  goto ret0;

  L1284:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1285;
  goto ret0;

  L1285:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L1286;
    }
  goto ret0;

  L1286:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1287;
  goto ret0;

  L1287:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L1288;
    }
  goto ret0;

  L1288:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1289;
  goto ret0;

  L1289:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[7] = x2;
      goto L1290;
    }
  goto ret0;

  L1290:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE && 1)
    goto L1291;
  goto ret0;

  L1291:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      goto L1292;
    }
  goto ret0;

  L1292:
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == USE && 1)
    goto L1293;
  goto ret0;

  L1293:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[3] = x2;
      goto L1294;
    }
  goto ret0;

  L1294:
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == USE && 1)
    goto L1295;
  goto ret0;

  L1295:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (reload_completed && !TARGET_DEBUG_D_MODE && INTVAL (operands[2]) > 0)
      return gen_split_178 (operands);
  goto ret0;
 L938:
  return split_2 (x0, insn);
 ret0: return 0;
}

