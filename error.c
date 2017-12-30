/* error.c - fprintf(stderr, then die - */

/* Copyright (C) 1987 Free Software Foundation, Inc.

This file is part of Gas, the GNU Assembler.

The GNU assembler is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY.  No author or distributor
accepts responsibility to anyone for the consequences of using it
or for whether it serves any particular purpose or works at all,
unless he says so in writing.  Refer to the GNU Assembler General
Public License for full details.

Everyone is granted permission to copy, modify and redistribute
the GNU Assembler, but only under the conditions described in the
GNU Assembler General Public License.  A copy of this license is
supposed to have been given to you along with the GNU Assembler
so you can know your rights and responsibilities.  It should be
in a file named COPYING.  Among other things, the copyright
notice and this notice must be preserved on all copies.  */

#ifdef	DOCUMENTATION

NAME
	error() - fprintf(stderr, then die

INDEX
	error()
	exit()
	EXIT_FATAL

SYNOPSIS
	format fmt;
	
	error (fmt, foo, bar, garply, quux, ... );
	/* no return */

DESCRIPTION
	This is just like printf() except:
	(1)	The output is directed to stderr;
	(2)	After output, the program exit()s with status EXIT_FATAL.

	It is used to allow brief handling of unexpected conditions by
	printing the value of selected variables then dying. Also, if
	you use error() as your standard way out of difficult situations,
	and deny() as your standard way out of "impossible" conditions,
	then 2 breakpoints will catch most programs, and you can
	back-trace the stack to find out why.

INTERNAL
	The mechanism is kludgy, but so is <varargs.h>. All "C's" I have used,
	the trick has worked. It has to (mostly) work because a function MUST
	be able to find its arglist, and can never rely on an explicit
	argument count, so most implementers do it the pdp-11 way.

EXAMPLES
	error ("warp factor overflow in line %d of file %s",
		__LINE__, __FILE__);

AUTHORS
	Dean Elsner, after DECUS C.

#endif				/* #ifdef DOCUMENTATION */



/* #include "style.h" */
#include <stdio.h>

#ifndef NO_VARARGS
#include <varargs.h>
#endif

#define EXIT_FATAL (2)


#ifdef NO_VARARGS
/*VARARGS1*/
void
error(fmt,args)
     char * fmt;

{
  _doprnt (fmt, &args, stderr);
  exit (EXIT_FATAL);
}
#else
void
error(fmt,va_alist)
char *fmt;
va_dcl
{
	vfprintf(stderr,fmt,va_alist);
	exit(EXIT_FATAL);
}
#endif
