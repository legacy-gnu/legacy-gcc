/* write.h -> write.c */

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

/*
 * FixSs may be built up in any order.
 */

struct fix
{
  fragS *		fx_frag; /* Which frag? */
  long int		fx_where; /* Where is the 1st byte to fix up? */
  symbolS *		fx_addsy; /* NULL or Symbol whose value we add in. */
  symbolS *		fx_subsy; /* NULL or Symbol whose value we subtract. */
  long int		fx_offset; /* Absolute number we add in. */
  struct fix *		fx_next; /* NULL or -> next fixS. */
  short int		fx_size; /* How many bytes are involved? */
  char			fx_pcrel; /* TRUE: pc-relative. */
};

typedef struct fix	fixS;


COMMON fixS *	text_fix_root;	/* Chains fixSs. */
COMMON fixS *	data_fix_root;	/* Chains fixSs. */
COMMON fixS **	seg_fix_rootP;	/* -> one of above. */

/* end: write.h */
