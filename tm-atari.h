/* target def file for atarist, for use with GNU CC */

#include "tm-m68k.h"

#ifndef CROSSATARI
#undef alloca
#endif

/* See tm-m68k.h.  0 means 68000 with no 68881.  */

#define TARGET_DEFAULT 0

/* -m68020 requires special flags to the assembler.  */

/* #define ASM_SPEC "%{m68020:-mc68020}%{!m68020:-mc68010}" -- busted */
#define ASM_SPEC "%{m68020:-mc68020}%{!m68020:}"

/* for now, make all parms be on 32-bit bounds */
#undef PARM_BOUNDARY
#define PARM_BOUNDARY 32

/* Names to predefine in the preprocessor for this target machine.  */

#define CPP_PREDEFINES "-Datarist -Dgem -Dm68k"

/* default exec dir */
#ifndef STANDARD_EXEC_PREFIX
#define STANDARD_EXEC_PREFIX "/dsrg/bammi/cross-gcc/lib/gcc-"
#endif

/* Alignment of field after `int : 0' in a structure.  */

#undef EMPTY_FIELD_BOUNDARY
#define EMPTY_FIELD_BOUNDARY 16

/* Every structure or union's size must be a multiple of 2 bytes.  */

#undef STRUCTURE_SIZE_BOUNDARY
#define STRUCTURE_SIZE_BOUNDARY 16

/* code seems to assume this... */
#define DBX_DEBUGGING_INFO

/* and our more useful abort frob */
/* #define abort()	_abort_internal(__LINE__, __FILE__) */
