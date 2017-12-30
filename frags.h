/* frags.h - Header file for the frag concept. */

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

extern struct obstack	frags;
				/* Frags ONLY live in this obstack. */
				/* We use obstack_next_free() macro */
				/* so please don't put any other objects */
				/* on this stack! */

/*
 * A macro to speed up appending exactly 1 char
 * to current frag.
 */
/* JF changed < 1 to <= 1 to avoid a race conditon */
#define FRAG_APPEND_1_CHAR(datum)	\
{					\
	if (obstack_room( &frags ) <= 1) {\
		frag_wane (frag_now);	\
		frag_new (0);		\
	}				\
	obstack_1grow( &frags, datum );	\
}
      

/* end: frags.h */
