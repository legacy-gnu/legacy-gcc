/* Definitions of target machine for GNU compiler.

   Citicorp/TTI Unicom PBB version (using GAS with a %-register prefix)

   Copyright (C) 1987, 1988, 1990 Free Software Foundation, Inc.

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

#include "m68k.h"

/* Without STRUCTURE_SIZE_BOUNDARY, we can't ensure that structures are
   aligned such that we can correctly extract bitfields from them.
   Someone should check whether the usual compiler on this machine
   provides the equivalent behavior of STRUCTURE_SIZE_BOUNDARY.  */
/* Alternative solutions are (1) define PCC_BITFIELD_TYPE_MATTERS,
   if that fits what the usual compiler does,
   or disable the -m68000 and -mnobitfield options.  */
#error This doesn't define STRUCTURE_SIZE_BOUNDARY

/* See m68k.h.  5 means 68020 without 68881.  */

#define TARGET_DEFAULT 5

/* Define __HAVE_68881__ in preprocessor if -m68881 is specified.
   This will control the use of inline 68881 insns in certain macros.  */

#define CPP_SPEC "%{m68881:-D__HAVE_68881__}"

/* Names to predefine in the preprocessor for this target machine.  */

#define CPP_PREDEFINES "-Dm68k -Dunix -DUnicomPBB -Dmc68k -Dmc68020 -Dmc68k32"

/* We want DBX format for use with gdb under COFF.  */

#define DBX_DEBUGGING_INFO

/* Generate calls to memcpy, memcmp and memset.  */

#define TARGET_MEM_FUNCTIONS

/* -m68000 requires special flags to the assembler.  
   The -C flag is passed to a modified GNU assembler to cause COFF
   modules to be produced.  Remove it if you're not using this.
   (See vasta@apollo.com or mb@ttidca.tti.com)
   - no longer using -C flag... build gas with coff as default! */

#define ASM_SPEC \
 "   %{m68000:-mc68010}%{mc68000:-mc68010}"

/* we use /lib/libp/lib*  when profiling */

#define LIB_SPEC "%{!shlib:%{p:-L/lib/libp} %{pg:-L/lib/libp} -lc} \
   %{shlib:-lc_s crtn.o%s }"

/* shared libraries need to use crt1.o  */

#ifdef USE_GPLUS_IFILE
#define STARTFILE_SPEC \
  "g++.ifile%s %{!shlib:%{pg:mcrt0.o%s}%{!pg:%{p:mcrt0.o%s}%{!p:crt0.o%s}}}\
   %{shlib:crt1.o%s } "
#else
#define STARTFILE_SPEC \
  "%{!shlib:%{pg:mcrt0.o%s}%{!pg:%{p:mcrt0.o%s}%{!p:crt0.o%s}}}\
   %{shlib:crt1.o%s } "
#endif

/* cpp has to support a #sccs directive for the /usr/include files */

#define SCCS_DIRECTIVE

/* GAS register prefix assembly syntax: */

/* User labels have no prefix */
#undef  USER_LABEL_PREFIX 
#define USER_LABEL_PREFIX ""

/* local labels are prefixed with ".L" */
#undef  LOCAL_LABEL_PREFIX
#define LOCAL_LABEL_PREFIX ".L"

/* registers are prefixed with "%" */
#undef  REGISTER_PREFIX
#define REGISTER_PREFIX "%"

#undef REGISTER_NAMES
#define REGISTER_NAMES \
{"%d0", "%d1", "%d2", "%d3", "%d4", "%d5", "%d6", "%d7",	\
 "%a0", "%a1", "%a2", "%a3", "%a4", "%a5", "%a6", "%sp",	\
 "%fp0", "%fp1", "%fp2", "%fp3", "%fp4", "%fp5", "%fp6", "%fp7", \
 "%fpa0", "%fpa1", "%fpa2", "%fpa3", "%fpa4", "%fpa5", "%fpa6", "%fpa7", \
 "%fpa8", "%fpa9", "%fpa10", "%fpa11", "%fpa12", "%fpa13", "%fpa14", "%fpa15",\
 "%fpa16","%fpa17", "%fpa18", "%fpa19", "%fpa20", "%fpa21", "%fpa22","%fpa23",\
 "%fpa24","%fpa25", "%fpa26", "%fpa27", "%fpa28", "%fpa29", "%fpa30","%fpa31",}

#undef FUNCTION_FINAL_EXTRA_EPILOGUE
#define FUNCTION_FINAL_EXTRA_EPILOGUE(FILE, SIZE)			\
  { extern int current_function_returns_pointer;		\
    if (current_function_returns_pointer)			\
      asm_fprintf (FILE, "\tmovl %Rd0,%Ra0\n"); } 

#define ASM_RETURN_CASE_JUMP   return "jmp %%pc@(2,%0:w)"

/* This is how to store into the string LABEL
   the symbol_ref name of an internal numbered label where
   PREFIX is the class of label and NUM is the number within the class.
   This is suitable for output with `assemble_name'.  */

#undef ASM_GENERATE_INTERNAL_LABEL
#define ASM_GENERATE_INTERNAL_LABEL(LABEL,PREFIX,NUM)                   \
        sprintf (LABEL, "*.%s%d", PREFIX, NUM)

/* Describe how to output filenames for dbx.  */

/* These look awfully like the default definitions
   --it's not clear whether these really need to be redefined here.  --rms.  */
#define DBX_OUTPUT_MAIN_SOURCE_FILENAME(FILE, FILENAME)		\
  fprintf (FILE, "\t.stabs \"%s\",%d,0,0,.Ltext\n.Ltext:\n",	\
	   FILENAME, N_SO)

#define DBX_OUTPUT_SOURCE_FILENAME(FILE, FILENAME)		\
  fprintf (FILE, "\t.stabs \"%s\",%d,0,0,.Ltext\n",		\
	   FILENAME, N_SOL)

/* g++ stuff: */
/* now obsolete, since we no longer need collect with a properly functioning
   coff loader. */
#define NO_UNDERSCORES
#define ASM_INT_OP ".long "
#define DBX_IN_COFF

/*
Local variables:
version-control: t
End:
*/
