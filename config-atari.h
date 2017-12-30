
/* we use an extra file, as we don't do links */

/* generic m68k config file */

#include "config-m68k.h"

/* exc that we don't want the funny alloca... */

#ifndef CROSSATARI
#undef alloca
#endif

#include "stddef.h"

/* specs for start file and link specs */

#ifndef CROSSATARI
#define STARTFILE_SPEC  \
  "%{pg:$GNULIB$/gcrt0.o%s}%{!pg:%{p:$GNULIB$\\mcrt0.o%s}%{!p:$GNULIB$\\crt0.o%s}}"
#else
#define STARTFILE_SPEC  \
  "%{pg:/dsrg/bammi/cross-gcc/lib/gcrt0.o%s}%{!pg:%{p:/dsrg/bammi/cross-gcc/lib/mcrt0.o%s}%{!p:/dsrg/bammi/cross-gcc/lib/crt0.o%s}}"
#endif

#define LIB_SPEC \
  "%{!p:%{!pg:-lgnu.olb}}%{p:-lgnu-p.olb}%{pg:gnu-p.olb}"

