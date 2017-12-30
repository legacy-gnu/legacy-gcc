/* `make' - recompile files as needed.
   Copyright (C) 1988 Free Software Foundation, Inc.
   written by Richard Stallman and Roland McGrath.

		       NO WARRANTY

  BECAUSE GNU MAKE IS LICENSED FREE OF CHARGE, WE PROVIDE ABSOLUTELY
NO WARRANTY, TO THE EXTENT PERMITTED BY APPLICABLE STATE LAW.  EXCEPT
WHEN OTHERWISE STATED IN WRITING, FREE SOFTWARE FOUNDATION, INC,
RICHARD M. STALLMAN AND/OR OTHER PARTIES PROVIDE GNU MAKE "AS IS"
WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY
AND PERFORMANCE OF GNU MAKE IS WITH YOU.  SHOULD GNU MAKE PROVE
DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR
CORRECTION.

 IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW WILL RICHARD M.
STALLMAN, THE FREE SOFTWARE FOUNDATION, INC., AND/OR ANY OTHER PARTY
WHO MAY MODIFY AND REDISTRIBUTE GNU MAKE AS PERMITTED BELOW, BE
LIABLE TO YOU FOR DAMAGES, INCLUDING ANY LOST PROFITS, LOST MONIES, OR
OTHER SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE
USE OR INABILITY TO USE (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR
DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY THIRD PARTIES OR
A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS) GNU MAKE,
EVEN IF YOU HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH
DAMAGES, OR FOR ANY CLAIM BY ANY OTHER PARTY.

		GENERAL PUBLIC LICENSE TO COPY

  1. You may copy and distribute verbatim copies of GNU Make source
code as you receive it, in any medium, provided that you conspicuously
and appropriately publish on each copy a valid copyright notice
"Copyright (C) 1988 Free Software Foundation, Inc." (or with whatever
year is appropriate), and include following the copyright notice a
verbatim copy of the above disclaimer of warranty and of this License.
You may charge a distribution fee for the physical act of transferring
a copy.

  2. You may modify your copy or copies of GNU Make or
any portion of it, and copy and distribute such modifications under
the terms of Paragraph 1 above, provided that you also do the following:

    a) cause the modified files to carry prominent notices stating
    that you changed the files and the date of any change; and

    b) cause the whole of any work that you distribute or publish,
    that in whole or in part contains or is a derivative of GNU Make
    or any part thereof, to be licensed at no charge to all
    third parties on terms identical to those contained in this
    License Agreement (except that you may choose to grant more extensive
    warranty protection to some or all third parties, at your option).

    c) You may charge a distribution fee for the physical act of
    transferring a copy, and you may at your option offer warranty
    protection in exchange for a fee.

Mere aggregation of another unrelated program with this program (or its
derivative) on a volume of a storage or distribution medium does not bring
the other program under the scope of these terms.

  3. You may copy and distribute GNU Make (or a portion or derivative
of it, under Paragraph 2) in object code or executable form under the terms
of Paragraphs 1 and 2 above provided that you also do one of the following:

    a) accompany it with the complete corresponding machine-readable
    source code, which must be distributed under the terms of
    Paragraphs 1 and 2 above; or,

    b) accompany it with a written offer, valid for at least three
    years, to give any third party free (except for a nominal
    shipping charge) a complete machine-readable copy of the
    corresponding source code, to be distributed under the terms of
    Paragraphs 1 and 2 above; or,

    c) accompany it with the information you received as to where the
    corresponding source code may be obtained.  (This alternative is
    allowed only for noncommercial distribution and only if you
    received the program in object code or executable form alone.)

For an executable file, complete source code means all the source code for
all modules it contains; but, as a special exception, it need not include
source code for modules which are standard libraries that accompany the
operating system on which the executable file runs.

  4. You may not copy, sublicense, distribute or transfer GNU Make
except as expressly provided under this License Agreement.  Any attempt
otherwise to copy, sublicense, distribute or transfer GNU Make is void and
your rights to use the program under this License agreement shall be
automatically terminated.  However, parties who have received computer
software programs from you with this License Agreement will not have
their licenses terminated so long as such parties remain in full compliance.

  5. If you wish to incorporate parts of GNU Make into other free
programs whose distribution conditions are different, write to the Free
Software Foundation at 675 Mass Ave, Cambridge, MA 02139.  We have not yet
worked out a simple rule that can be stated here, but we will often permit
this.  We will be guided by the two goals of preserving the free status of
all derivatives of our free software and of promoting the sharing and reuse of
software.

 In other words, you are welcome to use, share and improve this program.
 You are forbidden to forbid anyone else to use, share and improve
 what you give them.   Help stamp out software-hoarding!  */

#if 0	/* dummy tags for etags */
endcopyr (){}
endcopyright (){}
endlicense (){}
#endif

#if 0	/* dummy tags for etags */
rcs (){}
log (){}
#endif

/*
 * $Header: make.c,v 2.0 88/06/28 21:57:40 mcgrath Rel $
 *
 $Log:	make.c,v $
 * Revision 2.0  88/06/28  21:57:40  mcgrath
 * Second release.
 * 
 * Revision 1.66  88/06/19  16:34:15  mcgrath
 * Made it continue after ignored errors.
 * 
 * Revision 1.65  88/06/19  15:36:13  mcgrath
 * Added variable references inside variable references.
 * E.g.: $($(x)) ==> $(y) when x = y.  They are recursive so that
 * if x = $(y) and y = z (notice recursive variable definitions),
 * then $($(x)) goes -> $($(y)) -> $(z) -> value of z.
 * 
 * Revision 1.64  88/06/18  21:21:11  mcgrath
 * Fixed an error message.
 * 
 * Revision 1.63  88/06/18  13:59:47  mcgrath
 * Made error messages use the name of invokation instead
 * of always using `make'.
 * 
 * Revision 1.62  88/06/18  13:35:05  mcgrath
 * * Fixed up some error messages.
 * * Made it say "*** Error n (ignored)" rather than nothing under -i.
 * * Put run_shell_command inside execute_command_line.
 * 
 * Revision 1.61  88/06/17  20:59:49  mcgrath
 * * Removed Bourne shell $(a-b), etc. variable reference constructs.
 * * It is not longer a fatal error if Make doesn't know how to make
 *   a file when -k is in effect.
 * 
 * Revision 1.60  88/06/15  01:33:29  mcgrath
 * Made `foreach' control variables always be nonrecursive.
 * They are restored to whatever recursiveness and value they
 * had before the `foreach' call when it is done.
 * 
 * Revision 1.59  88/06/14  21:33:18  mcgrath
 * Moved .s to the end of the default suffix list.
 * 
 * Revision 1.59  88/06/12  03:00:00  rms
 * Move .s to end of default suffix list.
 *
 * Revision 1.58  88/06/10  11:01:41  mcgrath
 * Removed an unused variable.
 * 
 * Revision 1.57  88/06/09  21:31:13  mcgrath
 * Fixed a bug in dealing with double-colon files.
 * 
 * Revision 1.56  88/06/02  15:22:18  mcgrath
 * Changed RCS rules to give both the RCS filename and the working
 * filename to `co' so the workfile will go in the right place if they
 * have different paths for some weird reason.
 * 
 * Revision 1.55  88/06/02  14:52:47  mcgrath
 * Made pattern_search and selective_vpath_search consider files
 * mentioned in makefiles to be existent even if they are not targets.
 * 
 * Revision 1.54  88/05/31  00:40:34  mcgrath
 * Made recursive variables referenced with $X work right.
 * 
 * Revision 1.53  88/05/30  20:31:20  mcgrath
 * * Made converted single-suffix (".o:", etc.) rules nonterminal.
 * * Added `foreach' and `sort' functions.
 * 
 * Revision 1.52  88/05/29  19:19:15  mcgrath
 * Doubled-up a `%' in a printf format.
 * 
 * Revision 1.51  88/05/26  18:31:37  mcgrath
 * * Removed built-in suffix rules for .? -> .s
 * * Rewrote precious intermediate file pattern stuff to work right.
 * 
 * Revision 1.50  88/05/22  14:48:17  mcgrath
 * Major Beta release before release 2.0.
 * 
 * Revision 1.25  88/05/22  14:29:21  mcgrath
 * Fixed minor bug
 * 
 * Revision 1.24  88/05/21  16:39:54  mcgrath
 * Fixed idiotic (really; I'm losing it) bug in -w stuff.  (sigh)
 * 
 * Revision 1.23  88/05/20  21:38:59  mcgrath
 * Changed to use new globbing function `glob_filename'.
 * 
 * Revision 1.22  88/05/18  23:26:15  mcgrath
 * Fixed stupid incorrect lengths for `filter' and `filter-out'
 * in `function_table'.
 * 
 * Revision 1.21  88/05/18  20:56:55  mcgrath
 * Removed the `struct ruleset' stuff; did extended static rules
 * in a much simpler way.  The new syntax is for example,
 * `*.o: %.o: %.c'.  It is a non-fatal error for the rule target (*.o)
 * not to match the pattern target (%.o).
 * 
 * Revision 1.20  88/05/17  23:10:28  mcgrath
 * Made it a fatal error to use the `LIB((NAME))' syntax.
 * 
 * Revision 1.19  88/05/17  22:30:37  mcgrath
 * Fixed some bugs introduced by the bugfix in the last version (sigh).
 * 
 * Revision 1.18  88/05/16  17:47:01  mcgrath
 * * Changed touching back to reading and writing rather than using utimes.
 * * Changed nonwarranty notice.
 * * Changed the way RCS keywords are handled for version information.
 * 
 * Revision 1.17  88/05/15  17:50:11  mcgrath
 * Made most references to the `name' field of a `struct dep' use
 * the macro `dep_name (d)' which uses `d->name' if it is not nil and
 * `d->file->name' if it is.  This is so that when `snap_deps' makes
 * `struct file's for all the dependencies, further references to their
 * names will use those in the `struct file's which may be changed by
 * VPATH search.
 * 
 * Revision 1.16  88/05/14  15:27:42  mcgrath
 * * Added Emacs c-mode local variables.
 * * A file's modtime is now looked at before implicit rule
 *   search because finding its modtime may change its name via VPATH.
 * * Fixed bug in VPATH pattern recognition that made `%'
 *   matching one char not work.
 * 
 * Revision 1.15  88/05/11  21:29:04  mcgrath
 * Made `$<' be the first dependency of any rule, not just implicit rules.
 * 
 * Revision 1.14  88/05/07  20:32:39  mcgrath
 * * Made all internal functions `static'.
 * * Changed to use new globbing function I added
 *   to glob.c to make it work right.
 * 
 * Revision 1.13  88/05/07  13:44:06  mcgrath
 * Made `touch' use utimes(2) rather than reading and writing.
 * 
 * Revision 1.12  88/05/06  17:13:06  mcgrath
 * Removed SHFLAGS.
 * 
 * Revision 1.11  88/05/04  18:33:34  mcgrath
 * Fixed Fixed bug which caused core dumps when $< was used
 * in a pattern rule with no deps.
 * 
 * Revision 1.10  88/05/04  17:52:40  mcgrath
 * * Made `define' directives make recursive (`='-style) variables.
 * * Removed the `expand' function, since the above change makes in unnecessary.
 * 
 * Revision 1.9  88/05/03  22:27:39  mcgrath
 * * Fixed bug which made recursive expansion not quite work (ack!!).
 * * Made `MAKE' and `MAKEOVERRIDES' be figured out after environment
 *   variables are read in so they will have the right values.
 * * Miscellaneous cosmetic cleanup.
 * 
 * Revision 1.8  88/05/03  16:53:35  mcgrath
 * * Fixed bug in expansion functions code.
 * * Cosmetic changes.
 * 
 * Revision 1.7  88/04/30  15:27:16  mcgrath
 * * Fixed bug which made `ifeq "x" "y"' conditionals fail.
 * * Minor cleanup in conditional_line.
 * 
 * Revision 1.6  88/04/24  00:56:44  roland
 * Removed $($@) automatic macro.
 * 
 * Revision 1.5  88/04/23  21:36:12  roland
 * * Added -v switch the print version information.
 * * Made -w switch be passed in MAKEFLAGS.
 * * Made `main' use exit rather than return (more portable).
 * * Made `pattern_search' and `vpath_search' consider files
 *   mentioned in the makefile but that don't really exist to
 *   be existent only if they are targets in the makefile.
 *   This is the way Unix Make (Sun at least) does it and
 *   it makes more sense.
 * * Given to RMS for beta-testing.
 * 
 Revision 1.4  88/04/23  18:22:28  roland
 * Fixed a minor bug which caused core dumps every time Make ran.
 * Changed all messages to use `...' rather than "...".
 * Given to RMS for beta-testing.
 
 Revision 1.3  88/04/23  17:37:24  roland
 * Changed RCS header stuff slightly (added a keyword).
 * Added support for $(a:-b), etc. as in Sun sh.
 * Fixed bug fix making :: still not work right.
 * Changed format of the message given for -w.
 * Miscellaneous cosmetic cleanup.
 * Added `struct ruleset': contains a chain of rules,
   a pointer to the last rule in the chain, and info about
   the implicit rule limits (which were previously global
   variables).  Pattern rules are put in the ruleset in
   the global variable `global_ruleset'.  There is a chain
   of rulesets which will be listed by -p (if it exists).
   Nothing adds to the chain of rulesets yet.
   The `struct file' has a `ruleset' entry for the set of
   implicit rules that should be used for that file (it should
   be one in the `rulesets' chain) and `pattern_search' will
   honor this entry.
   All of this is the groundwork for `extended static rules' which
   are sets of implicit rules which apply to a given set of files.
   This has not yet been fully implemented because it will need
   a complex design to read in extended static rules (as well as
   a decision of a syntax; `files: %-target: %-deps' is a possibility)
   and put them into rulesets associated with the right files.
   This will be fully implemented sometime in the near future.
 
 *
 */

#if 0	/* dummy tags for etags */
endrcs (){}
endlog (){}
#endif

#if 0	/* dummy tag for etags  */
flags (){}
#endif

/* Flags:
 *	-b ignored for compatability with System V Make
 *	-c change directory
 *	-d debug
 *	-e env_overrides
 *	-f makefile
 *	-i ignore_errors
 *	-k keep_going
 *	-m ignored for compatibility with something or other
 *	-n just_print
 *	-o consider file old
 *	-p print_data_base
 *	-q question
 *	-r no_builtin_rules
 *	-s silent
 *	-S turn off -k
 *	-t touch
 *	-v print version information
 *	-w log working directory
 */

#if 0	/* dummy tags for etags */
definitions (){}
defs (){}
#endif

#include <signal.h>
#include <stdio.h>
#include <strings.h>

#ifdef atarist

#include <ctype.h>
#include <types.h>
#include <dir.h>
#include <file.h>
#include <param.h>
#include <stat.h>
/* #include <time.h> */
/* #include <wait.h> */

#define abort()	\
	{ fprintf(stderr, "Aborting at line %d of file %s\n",	\
		__LINE__, __FILE__); exit(999); }

#else

#include <sys/types.h>
#include <sys/dir.h>
#include <sys/file.h>
#include <sys/param.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/wait.h>

#endif

/* Somebody sent this in.  I assume machines that
   pre-define `sparc' will need it.  */
#ifdef	sparc
#include <alloca.h>
#endif	/* sparc	*/

/* We record the status of a command that got a signal
   as the signal number | 0200 (| 0400 if it got a coredump).  */
#define SIGNAL_STATUS 0200
#define SIGNAL_COREDUMP 0400

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

#ifdef case_insensitive
#define streq(a, b) \
  ((a) == (b) || \
   (char_upcase(*(a)) == char_upcase(*(b)) && \
    (*(a) == '\0' || !ci_strcmp ((a) + 1, (b) + 1))))

#else
#define streq(a, b) \
  ((a) == (b) || \
   (*(a) == *(b) && (*(a) == '\0' || !strcmp ((a) + 1, (b) + 1))))
#endif

#define file_mtime(f) ((f)->last_mtime != 0 ? (f)->last_mtime : f_mtime (f))
#define initbuffer(lb) (lb)->buffer = (char *) xmalloc ((lb)->size = 200)
#define freebuffer(lb) free ((lb)->buffer)
#define dep_name(d) ((d)->name == 0 ? (d)->file->name : (d)->name)

/* The name we were invoked with.  */

static char *program;

/* A `struct linebuffer' is a structure which holds a line of text.
   `readline' reads a line from a stream into a linebuffer
   and works regardless of the length of the line.  */

struct linebuffer
  {
    /* Note:  This is the number of bytes malloc'ed for `buffer'
       It does not indicate `buffer's real length.
       Instead, a losing C asciz null-byte indicates end-of-string */
    long size;
    char *buffer;
  };

/* Nonzero => file to delete if fatal signal happens.
   While actually running shell commands, this is their target.  */

char *signal_delete_file;

/* But only delete the file if it has been changed;
   that is, its mtime is not the same as this.  */

long signal_delete_mtime;

/* The filename and pointer to line number of the
   makefile currently being read in.  */

char *reading_filename;
long *reading_lineno_ptr;

/* Structure that gives the commands to make a file
   and information about where these commands came from.  */

struct commands
  {
    char *filename;		/* file that contains commands */
    long lineno;		/* line number in file */
    char *commands;		/* commands text */
  };

/* Structure that represents the info on one file
   that the makefile says how to make.
   All of these are chained together through `next'.  */

struct file
  {
    struct file *next;
    char *name;
    struct dep *deps;
    struct commands *cmds;	/* Commands to execute for this target */
    char *stem;			/* common stem, if an implicit
    				   rule has been used */
    int update_status;		/* Status of the last attempt to update,
				   or -1 if none has been made.  */
    long last_mtime;		/* File's modtime, if already known.  */
    struct file *prev;		/* Previous entry for same file name;
				   used when there are multiple double-colon
				   entries for the same file.  */
    char double_colon;		/* Nonzero for double-colon entry */
    char precious;		/* Non-0 means don't delete this file on quit */
    char recursive;		/* Non-0 means do this file's commands
    				   even if -q, -t or -n.  */
    char tried_implicit;	/* Nonzero if have searched for implicit rule
				   for making this file; don't search again */
    char updating;		/* Nonzero while updating deps of this file */
    char updated;		/* Nonzero if this file has been remade.  */
    char is_target;		/* Nonzero if file is described as target */
    char phony;			/* Nonzero if this is a phony file
				   ie, a dependent of .PHONY.  */
    char intermediate;		/* Nonzero if this is an intermediate file.  */
  };

/* Number of intermediate files entered.  */

int num_intermediates;

/* Hash table of files the makefile knows how to make.  */

#define FILE_BUCKETS	53
struct file *files[FILE_BUCKETS];

/* Hash table of files in the various directories.
   This makes file_exists_p faster for files in these directories.  */

struct dirdata
{
  struct dirdata *next;
  char *dir;			/* Name of directory */
  char *name;			/* ame of file in the directory */
  int impossible;		/* This file is impossible */
};

#define DIR_HASH_SIZE 1007

struct dirdata *dir_hash_table[DIR_HASH_SIZE];

/* Structure used for pattern rules.  */

struct rule
  {
    struct rule *next;
    char *name;			/* Name (target) of the rule  */
    int namelen;		/* Length of that string; to save time */
    char *patsuffix;		/* Pointer to char after %  */
    struct dep *deps;		/* Dependents of the rule  */
    struct commands *cmds;	/* Commands to execute  */
    char recursive;		/* If commands contain "$(MAKE)"  */
    char terminal;		/* If terminal (double colon)  */
    char subdir;		/* If references nonexistent subdirectory  */
    char in_use;		/* If in use by a parent pattern_search  */
  };


/* Chain of all pattern rules  */

struct rule *pattern_rules;

/* Pointer to last rule in the chain, so we can add onto the end  */

struct rule *last_pattern_rule;

/* Number of rules in the chain  */

int num_pattern_rules;

/* Maximum number of dependencies of any pattern rule  */

int max_pattern_deps;

/* Maximum length of the name of a dependencies of any pattern rule  */

int max_pattern_dep_length;

/* Structure used to represent a selective VPATH searchpath.  */

struct vpath
  {
    struct vpath *next;	/* Pointer to next struct in the linked list.  */
    char *pattern;	/* The pattern to match.  */
    int patlen;		/* Length of the pattern.  */
    char *patsuffix;	/* Pointer to the char after `%' in pattern.  */
    char **searchpath;	/* Null-terminated list of directories.  */
    int maxlen;		/* Maximum length of any entry in the list.  */
  };

/* Linked-list of all selective VPATHs.  */

struct vpath *vpaths;

/* Structure for the general VPATH given in the macro.  */

struct vpath *general_vpath;

/* Incremented when we find a file needs to be remade,
   even if it has no commands or if we are not really executing commands.  */

int files_remade;

/* Structure representing one dependency of a file.
   Each struct file's `deps' points to a chain of these,
   chained through the `next'.

   Note that the first three words of this match a struct nameseq.  */

struct dep
  {
    struct dep *next;
    char *name;
    int quotedparen;
    struct file *file;
    int changed;
  };

/* Structure used in chains of names, for parsing and globbing */

struct nameseq
  {
    struct nameseq *next;
    char *name;
    int quotedparen;
  };

/* First file defined in the makefile whose name does not
   start with `.'.  This is the default to remake if the
   command line does not specify.  */

struct file *default_goal_file;

/* Pointer to structure for the file .SUFFIXES
   whose dependencies are the suffixes to be searched.  */

struct file *suffix_file;

/* Maximum length of a suffix.  */

int maxsuffix;

/* Pointer to structure for the file .DEFAULT
   whose commands are used for any file that has none of its own.
   This is zero if the makefiles do not define .DEFAULT.  */

struct file *default_file;

/* Codes in a macro definition saying where the definition came from.
   Increasing numeric values signify less-overridable definitions.  */
enum macro_origin
  {
    o_env,		/* Macro from environment.  */
    o_file,		/* Macro given in a makefile.  */
    o_env_override,	/* Macro from environment, if -e.  */
    o_command,		/* Macro given by user.  */
    o_override, 	/* Macro from an `override' directive in a makefile.  */
  };

/* Structure that represents one macro definition.
   Each bucket of the hash table `macros' is a chain of these,
   chained through `next'.  */

struct macro
  {
    struct macro *next;		/* Link the chain  */
    char *name;			/* Macro name  */
    char *value;		/* Macro value  */
    enum macro_origin origin;	/* Macro origin  */
    char recursive;		/* Gets recursively re-evaluated  */
    char expanding;		/* Is currently expanding  */
  };

/* Hash table of all macro definitions.  */

#define MACRO_BUCKETS	43
struct macro *macros[MACRO_BUCKETS];

/* Pointers to struct macro's for the built-in macros,
   $*, $@, $<, $% and their F and D pairs, $^ and $?, and $($/).   */

struct macro *star_macro, *starF_macro, *starD_macro;
struct macro *at_macro, *atF_macro, *atD_macro;
struct macro *less_macro, *lessF_macro, *lessD_macro;
struct macro *percent_macro, *percentF_macro, *percentD_macro;
struct macro *caret_macro, *qmark_macro;
struct macro *dollar_slash_macro;

/* Pointer to struct macro for SHELL.  So we can look up the value fast.  */

struct macro *shell_macro;

/* Pointer to struct macro for IFS (sh internal field separator).  */

struct macro *ifs_macro;

/* Value of the MAKELEVEL macro at startup (or 0).  */

int makelevel;

/* The next two describe the macro output buffer.
   This buffer is used to hold the macro-expansion of a line of the makefile.
   It is made bigger with realloc whenever it is too small.
   macro_buffer_length is the size currently allocated.
   macro_buffer is the address of the buffer.  */

unsigned macro_buffer_length;
char *macro_buffer;

/* Values of command-line options.  */

/* Nonzero means do not print commands to be executed (-s).  */

int silent_flag;

/* Nonzero means just touch the files
   that would appear to need remaking (-t)  */

int touch_flag;

/* Nonzero means just print what commands would need to be executed,
   don't actually execute them (-n).  */

int just_print_flag;

/* Print debugging trace info (-d).  */

int debug_flag;

/* Environment macros override makefile definitions.  */

int env_overrides;

/* Nonzero means ignore status codes returned by commands
   executed to remake files.  Just treat them all as successful (-i).  */

int ignore_errors_flag;

/* Nonzero means don't remake anything, just print the data base
   that results from reading the makefile (-p).  */

int print_data_base_flag;

/* Nonzero means don't remake anything; just return a nonzero status
   if the specified targets are not up to date (-q).  */

int question_flag;

/* Nonzero means do not use any of the builtin rules (-r).  */

int no_builtin_rules_flag;

/* Nonzero means keep going even if remaking some file fails (-k).  */

int keep_going_flag;

/* Nonzero means print working directory before starting and after
   finishing make. */

int print_directory_flag;

/* Nonzero means print version information.  */

int print_version_flag;

#if 0	/* dummy tags for etags */
declarations (){}
decls (){}
#endif

/* Forward declarations */

static struct macro *define_macro ();
static struct macro *lookup_macro ();
static char *macro_expand ();
static char *macro_buffer_output ();
static int try_macro_definition ();
static long do_define ();
static struct file *enter_file ();
static struct file *lookup_file ();
static int update_file ();
static long readline ();
static void print_spaces ();
static long f_mtime (), name_mtime (), library_file_mtime ();
static int vpath_search ();
static char *savestring (), *concat ();
static char *xmalloc (), *xrealloc ();
static char *alloca ();
static char *sindex (), *lindex (), *wstok ();
static char *string_glob ();
static char *end_of_token (), *next_token (), *find_next_token ();
static void new_environ ();
static void fatal (), error (), perror_with_name (), pfatal_with_name ();
static struct nameseq *parse_file_seq ();
static struct nameseq *multi_glob ();
static void decode_switches ();
static void define_automatic_macros ();
static void print_data_base ();
static void read_all_makefiles ();
static struct dep *copy_dep_chain ();
static int conditional_line ();
static void snap_deps ();
static struct vpath *construct_vpath_list ();
static void build_vpath_lists ();
static void construct_include_path ();
static void dir_load ();
static void file_impossible ();
static int file_impossible_p ();
static void convert_to_pattern ();
static void new_pattern_rule ();
static void install_pattern_rule ();
static void count_implicit_rule_limits ();
static int pattern_search ();

static int update_file_1 (), execute_file_commands (), try_implicit_rule ();
static int execute_command_line ();

static void log_working_directory ();
static void print_version ();

static int alpha_compare ();
static int ar_name ();
static int ar_touch (), ar_scan_1 ();
extern int ar_scan (), ar_member_touch ();

extern char **glob_filename ();

extern char *getwd ();
extern long time ();

/* Data base of implicit rules */

/* For calling install_pattern_rule.  */
struct pspec {char *target, *dep, *commands;};

/* This is the default list of suffixes for suffix rules.
   `.s' must come last, so that a `.o' file will be made from
   a `.c' or `.p' or ... file rather than from a .s file.  */

#ifdef atarist
char *default_suffixes = ".ttp .olb .o .c .y .ye .yr .l .F .e .r .f .p .h .s";
#else
char *default_suffixes = ".out .a .o .c .y .ye .yr .l .F .e .r .f .p .h .s";
#endif

struct pspec default_pattern_rules[] =
  {
    "(%)", "%",
    "ar r $@ $<",

    /* The X.out rules are only in BSD's default set because
       BSD Make has no null-suffix rules, so `foo.out' and
       `foo' are the same thing.  */
    "%.out", "%",
    "@rm -f $@ \n cp $< $@",

    /* For libraries, so they won't get ranlib'd unnecessarily.  */
    "%(__.SYMDEF)", "%",
    "$(RANLIB) $<",

    0, 0, 0
  };

struct pspec default_terminal_rules[] =
  {
    /* RCS  */
    "%", "%,v",
    "$(CO) $(COFLAGS) $< $@",
    "%", "RCS/%,v",
    "$(CO) $(COFLAGS) $< $@",

    /* SCCS  */
    "%", "s.%",
    "$(GET) $(GFLAGS) $<",
    "%", "SCCS/s.%",
    "$(GET) $(GFLAGS) $<",

    0, 0, 0
  };

char *default_suffix_rules[] =
  {
    ".o",
    "$(CC) $(LDFLAGS) $^ $(LOADLIBES) -o $@",
    ".s",
    "$(CC) $(ASFLAGS) $(LDFLAGS) $^ $(LOADLIBES) -o $@",
    ".c",
    "$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LOADLIBES) -o $@",
    ".f",
    "$(FC) $(FFLAGS) $(LDFLAGS) $^ $(LOADLIBES) -o $@",
    ".p",
    "$(PC) $(PFLAGS) $(LDFLAGS) $^ $(LOADLIBES) -o $@",
    ".F",
    "$(FC) $(FFLAGS) $(LDFLAGS) $^ $(LOADLIBES) -o $@",
    ".e",
    "$(FC) $(FFLAGS) $(LDFLAGS) $^ $(LOADLIBES) -o $@",
    ".r",
    "$(FC) $(FFLAGS) $(LDFLAGS) $^ $(LOADLIBES) -o $@",

    ".s.o",
    "$(AS) $(ASFLAGS) $< -o $@",
    ".c.o",
    "$(CC) $(CFLAGS) -c $< -o $@",
    ".f.o",
    "$(FC) $(FFLAGS) -c $< -o $@",
    ".p.o",
    "$(PC) $(PFLAGS) -c $< -o $@",
    ".F.o",
    "$(FC) $(FFLAGS) -c $< -o $@",
    ".e.o",
    "$(EC) $(EFLAGS) -c $< -o $@",
    ".r.o",
    "$(RC) $(RFLAGS) -c $< -o $@",

    ".y.c",
    "$(YACC) $(YFLAGS) $< \n mv -f y.tab.c $@",
    ".l.c",
    "$(LEX) $(LFLAGS) $< \n mv -f lex.yy.c $@",

    ".F.f",
    "$(FC) $(FFLAGS) -F $< -o $@",
    ".e.f",
    "$(EC) $(EFLAGS) -F $< -o $@",
    ".r.f",
    "$(RC) $(RFLAGS) -F $< -o $@",

    ".ye.e",
    "$(YACCE) $(YFLAGS) $< \n mv -f y.tab.e $@",

    ".yr.r",
    "$(YACCR) $(YFLAGS) $< \n mv -f y.tab.r $@",
    /* This might actually make lex.yy.c if there's no %R%
       directive in $*.l, but in that case why were you
       trying to make $*.r anyway?  */
    ".l.r",
    "$(LEX) $(LFLAGS) $< \n mv -f lex.yy.r $@",

    0
  };

char *default_macros[] =
  {
    "AS", "as",
    "CC", "cc",
    "CO", "co",
    "EC", "f77",
    "FC", "f77",
    "GET", "get",
    "LEX", "lex",
#ifdef atarist
    "RANLIB", "ar sr",
#else
    "RANLIB", "ranlib",
#endif
    "RC", "f77",
    "PC", "pc",
    "YACC", "yacc",	/* Or "bison -y"  */
    "YACCE", "yacc -e",
    "YACCR", "yacc -r",
    0
  };

/* Default directories to search for include files in  */

#ifdef atarist
char *default_include_directories[] =
  {
    "d:\\gnu\\lib",
    0
  };
#else
char *default_include_directories[] =
  {
    "/usr/gnu/include",
    "/usr/local/include",
    "/usr/include",
    0
  };
#endif

/* List of directories to search for include files in  */

char **include_directories;

/* Maximum length of an element of the above.  */

int max_incl_len;

#if 0	/* dummy tag for etags	*/
code (){}
#endif

/* Handle bus errors, illegal instruction, etc. */
static
fatal_error_signal (sig)
     int sig;
{
  struct stat st;

#ifndef atarist
  signal (sig, SIG_DFL);
  (void) sigsetmask (0);

  /* Don't die until our children have finished dying.  */
  while (wait ((union wait *) 0) != -1)
    ;
#endif

  /* If we have specified a file to delete for this moment,
     and it exists and is not a directory, delete it.  */

  if (signal_delete_file
      && stat (signal_delete_file, &st) >= 0
      && (st.st_mode & S_IFMT) != S_IFDIR
      && st.st_mtime != signal_delete_mtime)
    {
      fprintf (stderr, "\n%s: Deleting file %s\n",
	       program, signal_delete_file);
      fflush (stderr);
      if (unlink (signal_delete_file) < 0)
	perror_with_name ("unlink: ", signal_delete_file);
    }

  /* Delete any non-precious intermediate files that were made.  */

  if (num_intermediates > 0)
    {
      register int i;
      register struct file *f;

      /* Examine each `struct file' in the hash table.  */
      for (i = 0; i < FILE_BUCKETS; ++i)
	for (f = files[i]; f != 0; f = f->next)
	  if (f->intermediate && !f->precious && f->updated)
	    {
	      fprintf (stderr, "%s: Deleting file %s\n", program, f->name);
	      fflush (stderr);
	      if (!just_print_flag && unlink (f->name) < 0)
		perror_with_name ("unlink: ", f->name);
	    }
    }

  /* Signal the same code; this time it will really be fatal.  */

#ifdef atarist
/* ... I think this is just an obscure way to exit ... */
  exit(sig);
#else
  if (kill (getpid (), sig) < 0)
    /* It shouldn't return, but if it does, die anyway.  */
    pfatal_with_name ("kill");
#endif
}

int
main (argc, argv, envp)
     int argc;
     char **argv;
     char **envp;
{
  register struct file *f;
  register int i;
  int num_remade = 0;
  int status = 0;
  int this_status;
  register char *cmd_defs;
  register int cmd_defs_len, cmd_defs_idx;

  bzero ((char *) files, sizeof files);
  bzero ((char *) macros, sizeof macros);
  bzero ((char *) dir_hash_table, sizeof dir_hash_table);

  files_remade = 0;
  macro_buffer = 0;
  default_goal_file = 0;
  signal_delete_file = 0;
  signal_delete_mtime = 0;
  reading_filename = 0;
  reading_lineno_ptr = 0;
  num_intermediates = 0;
  vpaths = 0;
  general_vpath = 0;
  pattern_rules = last_pattern_rule = 0;
  
  signal (SIGHUP, fatal_error_signal);
  signal (SIGQUIT, fatal_error_signal);
  signal (SIGINT, fatal_error_signal);
  signal (SIGILL, fatal_error_signal);
  signal (SIGTRAP, fatal_error_signal);
  signal (SIGIOT, fatal_error_signal);
  signal (SIGEMT, fatal_error_signal);
  signal (SIGFPE, fatal_error_signal);
  signal (SIGBUS, fatal_error_signal);
  signal (SIGSEGV, fatal_error_signal);
  signal (SIGSYS, fatal_error_signal);
  signal (SIGTERM, fatal_error_signal);
#ifdef SIGXCPU
  signal (SIGXCPU, fatal_error_signal);
#endif
#ifdef SIGXFSZ
  signal (SIGXFSZ, fatal_error_signal);
#endif

#ifdef atarist
  program = "make";
#else
  if (argv[0] == 0)
    program = "make";
  else 
    {
      program = rindex (argv[0], '/');
      if (program == 0)
	program = argv[0];
      else
	++program;
    }
#endif

  /* Read in macros from the environment.  It is important that this be
     done before `MAKE' and `MAKEOVERRIDES' are figured out so their
     definitions will not be ones from the environment.  */

  for (i = 0; envp[i] != 0; ++i)
    {
      register char *ep = envp[i];
      while (*ep++ != '=')
	;
      define_macro (envp[i], ep - envp[i] - 1, ep,
		    env_overrides ? o_env_override : o_env, 1);
    }

  /* Search for command line arguments that define macros,
     and do the definitions.  Also save up the text of these
     arguments in CMD_DEFS so we can put them into the values
     of $(MAKEOVERRIDES) and $(MAKE).  */

  cmd_defs_len = 100;
  cmd_defs = (char *) xmalloc (cmd_defs_len);
  cmd_defs_idx = 0;

  for (i = 1; i < argc; i++)
    {
      /* Don't even try an arg that is a switch.  */
      if (!strcmp (argv[i], "-f") || !strcmp (argv[i], "-o"))
	i++;
      else if (argv[i][0] != '-')
	{
	  /* It's not a switch; try it as a macro definition.  */
	  if (try_macro_definition (argv[i], o_command))
	    {
	      /* It succeeded.  The macro is already defined.
		 Backslash-quotify it and append it to CMD_DEFS,
		 then clobber it to `-' in ARGV
		 so that it won't be taken for a goal target.  */
	      register char *p = argv[i];
	      int l = strlen (p);
	      if (cmd_defs_len - ((l * 2) + 1) < 0)
		{
		  cmd_defs_len += l * 2;
		  cmd_defs = (char *) xrealloc (cmd_defs, cmd_defs_len);
		}
	      while (*p)
		{
		  if (index ("'\"*?[]$<>(){}|&~`\\ \t\r\n\f\v", *p) != 0)
		    cmd_defs[cmd_defs_idx++] = '\\';
		  cmd_defs[cmd_defs_idx++] = *p++;
		}
	      cmd_defs[cmd_defs_idx++] = ' ';
	      argv[i] = "-";
	    }
	}
    }

  if (cmd_defs_idx > 0)
    {
      cmd_defs[cmd_defs_idx] = '\0';
      define_macro ("MAKEOVERRIDES", 13, cmd_defs, o_override, 0);
    }

  /* Set the "MAKE" macro to the name we were invoked with.
     (If it is a relative pathname with a slash, prepend our directory name
     so the result will run the same program regardless of current dir.
     If it is a name with no slash, we can only hope that PATH did not
     find it in the current directory.)

     Append at the end the command-line macro definitions gathered above
     so sub-makes get them as command-line definitions.  */

#ifdef atarist
  if (argv[0] != 0 && argv[0][0] != '\\' && index (argv[0], '\\') != 0)
#else
  if (argv[0] != 0 && argv[0][0] != '/' && index (argv[0], '/') != 0)
#endif
    {
      char dir[MAXPATHLEN];
      char *str;
      if (getwd (dir) == 0)
	{
	  error ("getwd: %s", dir);
	  dir[0] = '\0';
	}
#ifdef atarist
      str = concat (dir, "\\", argv[0]);
#else
      str = concat (dir, "/", argv[0]);
#endif
      if (cmd_defs_idx > 0)
	{
	  char *s = concat (str, " ", cmd_defs);
	  free (str);
	  str = s;
	}
      define_macro ("MAKE", 4, str, o_env, 0);
      free (str);
    }
  else if (cmd_defs_idx > 0)
    {
      char *str = concat (argv[0], " ", cmd_defs);
      define_macro ("MAKE", 4, str, o_env, 0);
      free (str);
    }
  else
    define_macro ("MAKE", 4, argv[0], o_env, 0);

  free (cmd_defs);

  /* Decode the switches now */

  decode_switches (argc, argv);

  /* Parse any -c flags and move ourselves about.  */

  for (i = 1; i < argc; ++i)
    if (!strcmp (argv[i], "-c"))
      {
	++i;
	if (i >= argc)
	  fatal ("no directory given after -c command switch");
	if (chdir (argv[i]) < 0)
	  pfatal_with_name (argv[i]);
      }

  /* Now that we know the default directory, hash its contents.  */

  if (print_directory_flag)
    log_working_directory (1);

  dir_load (".");

  /* Define the initial list of suffixes for old-style rules.  */

  suffix_file = enter_file (".SUFFIXES");

  if (!no_builtin_rules_flag)
    {
      char *ptr;
      char **p1;

      ptr = default_suffixes;
      /* Why do multi-glob here?  None of the suffixes contains *.
	 But multi-glob is easiest way of reversing the chain.  */
      suffix_file->deps
	= (struct dep *) multi_glob (parse_file_seq (&ptr, '\0',
						     sizeof (struct dep)),
				     sizeof (struct dep));

      /* Enter the suffix rules as files.  */
      for (p1 = default_suffix_rules; *p1;)
	{
	  struct file *f = enter_file (*p1++);

	  f->cmds = (struct commands *) xmalloc (sizeof (struct commands));
	  f->cmds->commands = *p1++;
	  f->cmds->filename = 0;
	  f->cmds->lineno = 0;
	}

      /* Install the default macro definitions (CC, etc.)  */
      for (p1 = default_macros; *p1;)
	{
	  char *name = *p1++;
	  define_macro (name, strlen (name), *p1++, o_file, 0);
	}
    }

  /* Define some internal and special macros.  */

  define_automatic_macros ();

  /* Read all the specified or default makefiles */

  read_all_makefiles (argc, argv);

  ignore_errors_flag = ignore_errors_flag || lookup_file (".IGNORE");

  silent_flag = silent_flag || lookup_file (".SILENT");

  default_file = lookup_file (".DEFAULT");

  /* Mark files given with -o flags as very old (00:00:01.00 Jan 1, 1970)
     and as having been updated already.  */

  for (i = 1; i < argc; ++i)
    if (argv[i][0] == '-' && argv[i][1] == 'o' && argv[i][2] == '\0')
      {
	struct file *f;
	++i;
	if (i >= argc)
	  fatal ("no file name given after -o flag");
	f = enter_file (argv[i]);
	f->last_mtime = 1L;
	f->updated = 1;
	f->update_status = 0;
      }

  /* Make each `struct dep' point at the `struct file'
     for the file depended on.  */

  snap_deps ();

  /* Install the default pattern rules.  */

  if (!no_builtin_rules_flag)
    {
      struct pspec *p;
      /* Install the default pattern rules.  */
      for (p = default_pattern_rules; p->target != 0; ++p)
	install_pattern_rule (p, 0);
      /* Install the default terminal (RCS and SCCS) rules.  */
      for (p = default_terminal_rules; p->target != 0; ++p)
	install_pattern_rule (p, 1);
    }

  /* Convert old-style suffix rules to pattern rules.  */
  convert_to_pattern ();

  /* Compute max dep length and max # deps of any implicit rule.  */
  count_implicit_rule_limits ();

  /* Construct the listings of directories in VPATH lists.  */
  build_vpath_lists ();

  /* Construct the list of include directories to search.  */
  construct_include_path (argc, argv);

  if (print_data_base_flag)
    print_data_base ();
  else if (print_version_flag)
    /* We don't print the version under -p
       because print_data_base does it.  */
    print_version ();

  /* Search command line for files to remake.  */

  for (i = 1; i < argc; i++)
    {
      /* Anything not a switch or an argument of a switch
	 is a file to be remade.
	 Note that macro definition args were replaced with
	 dummies that look like switches.  */
      if (!strcmp (argv[i], "-f") || !strcmp (argv[i], "-c")
          || !strcmp (argv[i], "-o") || !strcmp (argv[i], "-I"))
	++i;
      else if (argv[i][0] != '-')
	{
	  f = enter_file (argv[i]);
	  num_remade++;
	  this_status = update_file (f, 0);
	  if (this_status)
	    {
	      status = this_status;
	      if (!keep_going_flag)
		break;
	    }
	}
    }

  /* Command line did not specify any file to remake => use default.  */

  if (num_remade == 0)
    {
      if (default_goal_file)
	status = update_file (default_goal_file, 0);
      else
	fatal ("no target");
    }

  /* Remove the intermediate files.  */

  if (num_intermediates > 0)
    for (i = 0; i < FILE_BUCKETS; ++i)
      {
	register struct file *f;
	for (f = files[i]; f != 0; f = f->next)
	  if (f->intermediate && !f->precious && f->updated)
	    {
	      if (!silent_flag)
		printf ("rm -f %s\n", f->name);
	      if (!just_print_flag && unlink (f->name) < 0)
		perror_with_name ("unlink: ", f->name);
	    }
      }

  if (print_directory_flag)
    log_working_directory (0);

  exit (status);
  /* NOTREACHED */
}

static void
decode_switches (argc, argv)
     int argc;
     char **argv;
{
  register int i;
  register char *sw;
  char keptflag;
  void decode_env_switches ();

  debug_flag = 0;
  env_overrides = 0;
  ignore_errors_flag = 0;
  keep_going_flag = 0;
  just_print_flag = 0;
  print_data_base_flag = 0;
  question_flag = 0;
  no_builtin_rules_flag = 0;
  silent_flag = 0;
  touch_flag = 0;
  print_directory_flag = 0;
  print_version_flag = 0;

  decode_env_switches ("MAKEFLAGS", 9);
  decode_env_switches ("MFLAGS", 5);

  for (i = 1; i < argc; i++)
    {
      keptflag = '\0';
      sw = argv[i];
      if (*sw++ == '-')
	while (*sw)
	  switch (*sw++)
	    {
	    case 'b':
	    case 'm':
	      break;
	    case 'c':
	      keptflag = 'c';
	      break;
	    case 'd':
	      debug_flag = 1;
	      break;
	    case 'e':
	      env_overrides = 1;
	      break;
	    case 'f':
	      keptflag = 'f';
	      break;
	    case 'I':
	      keptflag = 'I';
	      break;
	    case 'i':
	      ignore_errors_flag = 1;
	      break;
	    case 'k':
	      keep_going_flag = 1;
	      break;
	    case 'n':
	      just_print_flag = 1;
	      break;
	    case 'o':
	      keptflag = 'o';
	      break;
	    case 'p':
	      print_data_base_flag = 1;
	      break;
	    case 'q':
	      question_flag = 1;
	      break;
	    case 'r':
	      no_builtin_rules_flag = 1;
	      break;
	    case 's':
	      silent_flag = 1;
	      break;
	    case 'S':
	      keep_going_flag = 0;
	      break;
	    case 't':
	      touch_flag = 1;
	      break;
	    case 'v':
	      print_version_flag = 1;
	      break;
	    case 'w':
	      print_directory_flag = 1;
	      break;
	    default:
	      fatal ("unknown switch: %c", sw[-1]);
	    }
      if (keptflag != '\0')
	{
	  argv[i][1] = keptflag;
	  argv[i][2] = '\0';
	}
    }
}

static void
decode_env_switches (envar, len)
     char *envar;
     int len;
{
  struct macro *m;
  register char *args;

  m = lookup_macro (envar, len);
  if (m == 0 || *m->value == '\0')
    return;

  args = m->value;
  while (*args)
    switch (*args++)
      {
      case 'e':
	env_overrides = 1;
        break;
      case 'i':
	ignore_errors_flag = 1;
        break;
      case 'k':
	keep_going_flag = 1;
        break;
      case 'n':
	just_print_flag = 1;
        break;
      case 'q':
	question_flag = 1;
        break;
      case 'r':
	no_builtin_rules_flag = 1;
        break;
      case 's':
	silent_flag = 1;
        break;
      case 't':
	touch_flag = 1;
        break;
      case 'v':
	print_version_flag = 1;
	break;
      case 'w':
	print_directory_flag = 1;
	break;
      }

  return;
}

/* Implement macros.  */

/* Define macro named NAME with value VALUE.  VALUE is copied.
   LENGTH is the length of NAME, which does not
   need to be null-terminated.
   ORIGIN specifies the origin of the macro (makefile, command line
   or environment).
   If RECURSIVE is nonzero a flag is set in the macro saying
   that it should be recursively re-evaluated.  */

static struct macro *
define_macro (name, length, value, origin, recursive)
     char *name, *value;
     int length;
     enum macro_origin origin;
     char recursive;
{
  register struct macro *m;
  register int i;
  register int hashval = 0;

  for (i = 0; i < length; ++i)
    hashval += name[i];
  hashval %= MACRO_BUCKETS;

  for (m = macros[hashval]; m != 0; m = m->next)
    if (*m->name == *name
        && !strncmp (m->name + 1, name + 1, length - 1)
	&& m->name[length] == '\0')
      break;

  if (m != 0)
    {
      /* A macro of this name is already defined.
	 If the old definition is from a stronger source than this one,
	 don't redefine.  */
      if ((int) origin >= (int) m->origin)
	{
	  m->value = savestring (value, strlen (value));
	  m->origin = origin;
	  m->recursive = recursive;
	}
      return m;
    }

  /* Create a new macro definition and add to hash table.  */

  m = (struct macro *) xmalloc (sizeof (struct macro));
  m->name = savestring (name, length);
  m->value = savestring (value, strlen (value));
  m->origin = origin;
  m->recursive = recursive;
  m->expanding = 0;
  m->next = macros[hashval];
  return (macros[hashval] = m);
}

/* Lookup a macro whose name is a string starting at NAME
   and with LENGTH chars.  NAME need not be null-terminated.
   Returns address of the `struct macro' containing all info on the macro,
   or nil if no such macro is defined.  */

static struct macro *
lookup_macro (name, length)
     char *name;
     int length;
{
  register struct macro *m;
  register int i;
  register int hashval = 0;

  for (i = 0; i < length; ++i)
    hashval += name[i];
  hashval %= MACRO_BUCKETS;

  for (m = macros[hashval]; m != 0; m = m->next)
    if (*m->name == *name
        && !strncmp (m->name + 1, name + 1, length - 1)
	&& m->name[length] == 0)
      return m;

  return 0;
}

/* Define the automatic macros, and record the addresses
   of their structures so we can change their values quickly.  */

static void
define_automatic_macros ()
{
  char mflags[100];	/* 100 is more than # of distinct option letters */
  register int i;
  register struct macro *m;

  star_macro = define_macro ("*", 1, "", o_override, 0);
  starF_macro = define_macro ("*F", 2, "", o_override, 0);
  starD_macro = define_macro ("*D", 2, "", o_override, 0);
  at_macro = define_macro ("@", 1, "", o_override, 0);
  atF_macro = define_macro ("@F", 2, "", o_override, 0);
  atD_macro = define_macro ("@D", 2, "", o_override, 0);
  less_macro = define_macro ("<", 1, "", o_override, 0);
  lessF_macro = define_macro ("<F", 2, "", o_override, 0);
  lessD_macro = define_macro ("<D", 2, "", o_override, 0);
  percent_macro = define_macro ("%", 1, "", o_override, 0);
  percentF_macro = define_macro ("%F", 2, "", o_override, 0);
  percentD_macro = define_macro ("%D", 2, "", o_override, 0);
  qmark_macro = define_macro ("?", 1, "", o_override, 0);
  caret_macro = define_macro ("^", 1, "", o_override, 0);
  dollar_slash_macro = define_macro ("$/", 1, "", o_override, 0);

  m = lookup_macro ("MAKELEVEL", 9);
  if (m && m->value)
    makelevel = atoi (m->value);
  else
    makelevel = 0;

  shell_macro = lookup_macro ("SHELL", 5);
  if (shell_macro == 0)
    shell_macro = define_macro ("SHELL", 5, "/bin/sh", o_file, 0);

  /* Don't let SHELL come from the environment
     if MAKELEVEL is 0.  Also, SHELL must not be empty.  */
  if (*shell_macro->value == '\0'
      || (shell_macro->origin == o_env && makelevel == 0))
    {
      shell_macro->origin = o_file;
      shell_macro->value = savestring ("/bin/sh", 7);
    }

  ifs_macro = lookup_macro ("IFS", 3);

  /* Define the built-in macro MAKEFLAGS to contain the command line switches.
     We can ignore here those switches that cause commands from the
     makefile not to be run.  */

  i = 0;
  mflags[i++] = '-';
  if (env_overrides) mflags[i++] = 'e';
  if (ignore_errors_flag) mflags[i++] = 'i';
  if (keep_going_flag) mflags[i++] = 'k';
  if (just_print_flag) mflags[i++] = 'n';
  if (question_flag) mflags[i++] = 'q';
  if (no_builtin_rules_flag) mflags[i++] = 'r';
  if (silent_flag) mflags[i++] = 's';
  if (touch_flag) mflags[i++] = 't';
  if (print_version_flag) mflags[i++] = 'v';
  if (print_directory_flag) mflags[i++] = 'w';
  mflags[i] = '\0';
  if (i == 1)
    mflags[0] = '\0';
  /* On Sun, value of MFLAGS starts with a `-'
     but value of MAKEFLAGS lacks the `-'.  Be compatible.  */
  define_macro ("MAKEFLAGS", 9, &mflags[1], o_env, 0);
  define_macro ("MFLAGS", 6, mflags, o_env, 0);
}

/* Try to interpret LINE (a null-terminated string)
   as a macro definition.  If it is one, define the macro and return 1.
   Otherwise return 0.

   ORIGIN be o_file, o_override, o_env, o_env_override, or o_command
   specifying that the macro definition comes from a makefile,
   an override directive, the environment with or without the -e switch,
   or the command line.

   A macro definition has the form "name = value" or "name := value".
   Any whitespace around the "=" or ":=" is removed.  The first
   form defines a macro that is recursively re-evaluated.  The second
   form defines a macro whose value is macro-expanded at the time
   of definition and then is evaluated only once at the time of expansion.  */

static int
try_macro_definition (line, origin)
     char *line;
     enum macro_origin origin;
{
  register int c;
  register char *p = line;
  register char *beg;
  register char *end;
  register int recursive;

  if (*p == '\t')
    return 0;
  while (1)
    {
      c = *p++;
      if (c == '\0' || c == '#')
	return 0;
      if (c == '=')
	{
	  end = p - 1;
	  recursive = 1;
	  break;
	}
      else if (c == ':')
	if (*p == '=')
	  {
	    end = p - 1;
	    c = *p++;
	    recursive = 0;
	    break;
	  }
	else
	  return 0;
    }
  beg = line;
  while (beg[0] == ' ' || beg[0] == '\t') beg++;
  while (end[-1] == ' ' || end[-1] == '\t') end--;

  while (*p == ' ' || *p == '\t') p++;

  define_macro (beg, end - beg, recursive ? p : macro_expand (p),
	        origin, recursive);

  return 1;
}

/* Store into MACRO_BUFFER at O the result of scanning TEXT
   and replacing each occurrence of SUBST with REPLACE.
   TEXT is null-terminated.
   SLEN is the length of SUBST and RLEN is the length of REPLACE.
   If SUFFIX_ONLY is nonzero, the substitutions are only done
   at the ends of whitespace-delimited words.  */

static char *
subst_expand (o, text, subst, replace, slen, rlen, suffix_only)
     char *o;
     char *text;
     char *subst, *replace;
     int slen, rlen;
     int suffix_only;
{
  register char *t = text;
  register char *p;


  if (slen == 0)
    {
      /* The first occurance of "" in any string is its end.  */
      register int len = strlen (t);
      o = macro_buffer_output (o, t, len);
      t += len;
      if (rlen > 0)
	o = macro_buffer_output (o, replace, rlen);
    }

  while (p = sindex (t, 0, subst, slen))
    {
      /* Output everything before this occurance of the string to replace.  */
      if (p > t)
	o = macro_buffer_output (o, t, p - t);
      /* Advance T past the string to be replaced.  */
      t = p + slen;

      /* If we're substituting only at the end of whitespace-delimited
	 words, check if we're at the end of one.  */
      if (suffix_only && (*t != '\0' && *t != ' ' && *t != '\t'))
	/* Struck out.  Output the rest of the string that is
	   no longer to be replaced.  */
	o = macro_buffer_output (o, subst, slen);
      else if (rlen > 0)
	/* Output the replacement string.  */
	o = macro_buffer_output (o, replace, rlen);
    }

  /* Output everything left on the end.  */
  if (*t != '\0')
    o = macro_buffer_output (o, t, strlen (t));

  return o;
}

/* Store into MACRO_BUFFER at O the result of scanning TEXT
   and replacing strings matching PATTERN with REPLACE.  */

static char *
patsubst_expand (o, text, pattern, replace)
     char *o;
     char *text;
     register char *pattern, *replace;
{
  register char *pattern_percent = index (pattern, '%');
  register int pattern_prepercent_len, pattern_postpercent_len;
  register char *replace_percent = index (replace, '%');
  register int replace_prepercent_len, replace_postpercent_len;
  register char *t;
  int len;
  int doneany = 0;


  if (pattern_percent == 0)
    /* With no % in the pattern, this is just a simple substitution.  */
    return subst_expand (o, text, pattern, replace,
			 strlen (pattern), strlen (replace), 0);


  /* We store the length of the part of the pattern before
     the % in PATTERN_PREPERCENT_LEN so we don't have to do
     the pointer arithmetic to compute it more than once.  */
  pattern_prepercent_len = pattern_percent - pattern;
  /* We store the length of the part of the pattern after
     the pattern in PATTERN_POSTPERCENT_LEN so we don't have
     to compute it more than once.  */
  pattern_postpercent_len = strlen (pattern_percent + 1);

  if (replace_percent == 0)
    /* We store the length of the replacement so we only
       need to compute it once.  */
    replace_prepercent_len = strlen (replace);
  else
    {
      /* We store the length of the part of the replacement before
	 the % in REPLACE_PREPERCENT_LEN so we don't have to do
	 the pointer arithmetic to compute it more than once.  */
      replace_prepercent_len = replace_percent - replace;
      /* We store the length of the part of the replacement after
	 the pattern in REPLACE_POSTPERCENT_LEN so we don't have
	 to compute it more than once.  */
      replace_postpercent_len = strlen (replace_percent + 1);
    }


  while (t = find_next_token (&text, &len))
    {
      int fail = 0;

      /* Is it big enough to match?  */
      if (len < pattern_prepercent_len + pattern_postpercent_len)
	fail = 1;

      /* Does the prefix match?  */
      if (!fail && pattern_prepercent_len > 0
	  && (*t != *pattern
	      || t[pattern_prepercent_len - 1] != pattern_percent[-1])
	      || strncmp (t + 1, pattern + 1, pattern_prepercent_len - 1))
	fail = 1;

      /* Does the suffix match?  */
      if (!fail && pattern_postpercent_len > 0
	  && (t[len - 1] != pattern_percent[pattern_postpercent_len]
	      || t[len - pattern_postpercent_len] != pattern_percent[1]
	      || strncmp (&t[len - pattern_postpercent_len],
			  &pattern_percent[1], pattern_postpercent_len - 1)))
	fail = 1;

      if (fail)
	/* It didn't match.  Output the string.  */
	o = macro_buffer_output (o, t, len);
      else
	{
	  /* It matched.  Output the replacement.  */

	  /* Output the part of the replacement before the %.  */
	  o = macro_buffer_output (o, replace, replace_prepercent_len);

	  if (replace_percent != 0)
	    {
	      /* Output the part of the matched string that
		 matched the % in the pattern.  */
	      o = macro_buffer_output (o, t + pattern_prepercent_len,
				       len - (pattern_prepercent_len
				              + pattern_postpercent_len));
	      /* Output the part of the replacement after the %.  */
	      o = macro_buffer_output (o, replace_percent + 1,
				       replace_postpercent_len);
	    }
	}

      /* Output a space, but not if the replacement is "".  */
      if (!(!fail && replace_percent == 0 && replace_postpercent_len == 0))
	{
	  o = macro_buffer_output (o, " ", 1);
	  doneany = 1;
	}
    }
  if (doneany)
    /* Kill the last space.  */
    --o;

  return o;
}

/* Handle macro-expansion-time functions such as $(dir foo/bar) ==> foo/  */

/* These enumeration constants distinguish the various expansion-time
   built-in functions.  */

enum function
  {
    function_subst,
    function_addsuffix,
    function_addprefix,
    function_dir,
    function_notdir,
    function_suffix,
    function_basename,
    function_wildcard,
    function_firstword,
    function_findstring,
    function_strip,
    function_join,
    function_patsubst,
    function_filter,
    function_filter_out,
    function_foreach,
    function_sort,
    function_invalid
  };

/* Greater than the length of any function name.  */
#define MAXFUNCTIONLEN 17

/* The function names and lengths of names, for looking them up.  */

struct { char *name; int len; enum function function; } function_table[] =
  {
    { "subst", 5, function_subst },
    { "addsuffix", 9, function_addsuffix },
    { "addprefix", 9, function_addprefix },
    { "dir", 3, function_dir },
    { "notdir", 6, function_notdir },
    { "suffix", 6, function_suffix },
    { "basename", 8, function_basename },
    { "wildcard", 8, function_wildcard },
    { "firstword", 9, function_firstword },
    { "findstring", 10, function_findstring },
    { "strip", 5, function_strip },
    { "join", 4, function_join },
    { "patsubst", 8, function_patsubst },
    { "filter", 6, function_filter },
    { "filter-out", 10, function_filter_out },
    { "foreach", 7, function_foreach },
    { "sort", 4, function_sort },
    { 0, 0, function_invalid }
  };

/* Return 1 if PATTERN matches WORD, 0 if not.  */
static int
pattern_matches (pattern, word)
     register char *pattern, *word;
{
  char *percent = index (pattern, '%');
  int len;

  if (percent == 0)
    return !strcmp (pattern, word);

  len = strlen (pattern + 1);

  if (strlen (word) < (percent - pattern) + len
      || strncmp (pattern, word, percent - pattern))
    return 0;

  return !strcmp (percent + 1, word + (strlen (word) - len));
}


/* Expand an argument for an expansion function.
   The text starting at STR and ending at END is macro-expanded
   into a null-terminated string that is returned as the value.
   This is done without clobbering `macro_buffer' or the current
   macro-expansion that is in progress.  */

static char *
expand_argument (str, end)
     char *str, *end;
{
  char *save_macro_buffer = macro_buffer;
  unsigned save_length = macro_buffer_length;
  char *tmp;
  char *value;

  macro_buffer = 0;
  tmp = savestring (str, end - str);
  value = macro_expand (tmp);
  free (tmp);

  macro_buffer = save_macro_buffer;
  macro_buffer_length = save_length;

  return value;
}


/* Perform the function specified by FUNCTION on the text at TEXT.
   END is points to the end of the argument text (exclusive).
   The output is written into MACRO_BUFFER starting at O.  */

static char *
expand_function (o, function, text, end)
     char *o;
     enum function function;
     char *text;
     char *end;
{
  char *p, *p2;
  int i;
  int doneany = 0;

/* Note this absorbs a semicolon and is safe to use in conditionals.  */
#define BADARGS(func)  \
  if (reading_filename)						\
    fatal ("%s:%ld: Insufficient arguments to function `%s'",	\
	   reading_filename, *reading_lineno_ptr, func);	\
  else fatal ("insufficient arguments to function `%s'", func)

  switch (function)
    {
    default:
      abort ();
      break;
      
    case function_sort:
      /* Expand the argument.  */
      text = expand_argument (text, end);

      {
	char **words = (char **) xmalloc (10 * sizeof (char *));
	int nwords = 10;
	register int wordi = 0;

	/* Chop TEXT into words and put them in WORDS.  */
	for (p = wstok(text); p != 0; p = wstok((char *) 0))
	  {
	    if (wordi >= nwords - 1)
	      {
		nwords += 5;
		words = (char **) xrealloc (words, nwords * sizeof (char *));
	      }
	    words[wordi++] = savestring (p, strlen (p));
	  }
	words[wordi] = 0;

	/* Now sort the list of words.  */
	qsort ((char *) words, wordi, sizeof (char *), alpha_compare);

	/* Now write the sorted list.  */
	for (wordi = 0; words[wordi] != 0; ++wordi)
	  {
	    i = strlen (words[wordi]);
	    if (words[wordi + 1] == 0 || strlen (words[wordi + 1]) != i
		|| *words[wordi] != *words[wordi + 1]
		|| strcmp (words[wordi], words[wordi + 1]))
	      {
		o = macro_buffer_output (o, words[wordi], i);
		o = macro_buffer_output (o, " ", 1);
	      }
	    free (words[wordi]);
	  }
	/* Kill the last space.  */
	--o;

	free (words);
      }

      free (text);
      break;
      
    case function_foreach:
      {
	/* Get three comma-separated arguments but
	   expand only the first two.  */
	char *var, *list;
	register struct macro *m;
	char *saved_value;
	int saved_recursive;
	
	p = lindex (text, end, ',');
	if (p == 0)
	  BADARGS ("foreach");
	var = expand_argument (text, p);
	++p;
	p2 = lindex (p, end, ',');
	if (p2 == 0)
	  BADARGS ("foreach");
	list = expand_argument (p, p2);
	++p2;
	text = savestring (p2, end - p2);

	p2 = text + strlen (text);
	i = strlen (var);
	m = lookup_macro (var, i);
	if (m == 0)
	  {
	    saved_value = "";
	    saved_recursive = 0;
	    m = define_macro (var, i, saved_value, o_file, 0);
	  }
	else
	  {
	    saved_value = m->value;
	    saved_recursive = m->recursive;
	    m->recursive = 0;
	  }
	for (p = wstok(list); p != 0; p = wstok((char *) 0)) 
	  {
	    char *result;
	    m->value = p;
	    result = expand_argument (text, p2);
	    o = macro_buffer_output (o, result, strlen (result));
	  }
	m->value = saved_value;
	m->recursive = saved_recursive;

	free (var);
	free (list);
	free (text);
      }
      break;

    case function_filter:
    case function_filter_out:
      /* Get two comma-separated arguments and expand each one.  */
      p = lindex (text, end, ',');
      if (p == 0)
	BADARGS (function == function_filter ? "filter" : "filter-out");
      text = expand_argument (text, p);
      p = expand_argument (p + 1, end);
      
      /* Match the %-style pattern TEXT in P and output words
	 that match (for filter) or ones that don't (for
	 filter-out).  */
      if (function == function_filter_out)
	/* For filter-out it's simple: just use the patsubst
	   function to replace matching words with nothing.  */
	o = patsubst_expand (o, p, text, "");
      else
	/* For filter we must do it ourselves.  */
	for (p2 = wstok (p); p2 != 0; p2 = wstok ((char *) 0))
	  if (pattern_matches (text, p2))
	    {
	      o = macro_buffer_output (o, p2, strlen (p2));
	      o = macro_buffer_output (o, " ", 1);
	      /* Give us a little marker.  */
	      p = 0;
	    }
      if (p == 0)
	/* Kill the last space.  */
	--o;
      
      free (p);
      free (text);
      break;
      
    case function_patsubst:
      /* Get three comma-separated arguments and expand each one.  */
      p = lindex (text, end, ',');
      if (p == 0)
	BADARGS ("patsubst");
      p2 = lindex (p + 1, end, ',');
      if (p2 == 0)
	BADARGS ("patsubst");
      text = expand_argument (text, p);
      ++p;
      p = expand_argument (p, p2);
      ++p2;
      p2 = expand_argument (p2, end);
      
      o = patsubst_expand (o, p2, text, p);
      
      free (text);
      free (p);
      free (p2);
      break;
    case function_join:
      /* Get two comma-separated arguments and expand each one.  */
      p = lindex (text, end, ',');
      if (p == 0)
	BADARGS ("join");
      text = expand_argument (text, p);
      ++p;
      p = expand_argument (p, end);
      
      {
	/* Write each word of the first argument directly followed
	   by the corresponding word of the second argument.
	   If the two arguments have a different number of words,
	   the excess words are just output separated by blanks.  */
	register char *tp, *pp;
	int tlen, plen;
	i = 0;
	do
	  {
	    tp = find_next_token (&text, &tlen);
	    if (tp != 0)
	      o = macro_buffer_output (o, tp, tlen);
	    
	    pp = find_next_token (&p, &plen);
	    if (pp != 0)
	      o = macro_buffer_output (o, pp, plen);
	    
	    if (tp != 0 || pp != 0)
	      {
		o = macro_buffer_output (o, " ", 1);
		doneany = 1;
	      }
	  }
	while (tp != 0 || pp != 0);
	if (doneany)
	  /* Kill the last blank.  */
	  --o;
      }
      
      free (text);
      free (p);
      break;
      
    case function_strip:
      text = expand_argument (text, end);
      p = text;
      i = 0;
      while (*p)
	{
	  while (*p == ' ' || *p == '\t' || *p == '\n')
	    ++p;
	  
	  p2 = p;
	  while (*p && *p != ' ' && *p != '\t' && *p != '\n')
	    ++p;
	  
	  o = macro_buffer_output (o, p2, p - p2);
	  o = macro_buffer_output (o, " ", 1);
	  doneany = 1;
	}
      if (doneany)
	/* Kill the last space.  */
	--o;
      
      free (text);
      free (p);
      break;
      
    case function_wildcard:
      text = expand_argument (text, end);
      
      p = string_glob (text, 0);
      o = macro_buffer_output (o, p, strlen (p));
      
      free (text);
      break;
      
    case function_subst:
      /* Get three comma-separated arguments and expand each one.  */
      p = lindex (text, end, ',');
      if (p == 0)
	BADARGS ("subst");
      p2 = lindex (p + 1, end, ',');
      if (p2 == 0)
	BADARGS ("subst");
      text = expand_argument (text, p);
      ++p;
      p = expand_argument (p, p2);
      ++p2;
      p2 = expand_argument (p2, end);
      
      o = subst_expand (o, p2, text, p, strlen (text), strlen (p), 0);
      
      free (text);
      free (p);
      free (p2);
      break;
      
    case function_firstword:
      text = expand_argument (text, end);
      /* Find the first word in TEXT.  */
      
      p = wstok (text);
      o = macro_buffer_output (o, p, strlen (p));
      
      free (text);
      break;
      
    case function_findstring:
      /* Get two comma-separated arguments and expand each one.  */
      p = lindex (text, end, ',');
      if (p == 0)
	BADARGS ("findstring");
      text = expand_argument (text, p);
      ++p;
      p = expand_argument (p, end);
      
      /* Find the first occurence of the first string in the second.  */
      i = strlen (text);
      if (sindex (p, 0, text, i) != 0)
	o = macro_buffer_output (o, text, i);
      
      free (p);
      free (text);
      break;
      
    case function_addsuffix:
    case function_addprefix:
      /* Get two comma-separated arguments and expand each one.  */
      p2 = lindex (text, end, ',');
      if (p2 == 0)
	BADARGS (function == function_addsuffix ? "addsuffix" : "addprefix");
      text = expand_argument (text, p2);
      i = strlen (text);
      ++p2;
      p2 = expand_argument (p2, end);
      
      for (p = wstok (p2); p != 0; p = wstok ((char *) 0))
	{
	  if (function == function_addprefix)
	    o = macro_buffer_output (o, text, i);
	  o = macro_buffer_output (o, p, strlen (p));
	  if (function == function_addsuffix)
	    o = macro_buffer_output (o, text, i);
	  o = macro_buffer_output (o, " ", 1);
	  doneany = 1;
	}
      if (doneany)
	/* Kill last space.  */
	--o;
      
      free (p2);
      free (text);
      break;
      
    case function_dir:
    case function_basename:
      text = expand_argument (text, end);
      for (p2 = wstok (text); p2; p2 = wstok ((char *) 0))
	{
#ifdef atarist
	  p = rindex (p2, function == function_dir ? '\\' : '.');
#else
	  p = rindex (p2, function == function_dir ? '/' : '.');
#endif
	  if (p != 0)
	    {
	      if (function == function_dir)
		++p;
	      o = macro_buffer_output (o, p2, p - p2);
	    }
	  else if (function == function_dir)
	    o = macro_buffer_output (o, "./", 2);
	  else  /* The entire name is the basename.  */
	    o = macro_buffer_output (o, p2, strlen (p2));
	  o = macro_buffer_output (o, " ", 1);
	  doneany = 1;
	}
      if (doneany)
	/* Kill last space.  */
	--o;
      
      free (text);
      break;
      
    case function_notdir:
    case function_suffix:
      text = expand_argument (text, end);
      for (p2 = wstok (text); p2; p2 = wstok ((char *) 0))
	{
#ifdef atarist
	  p = rindex (p2, function == function_notdir ? '\\' : '.');
#else
	  p = rindex (p2, function == function_notdir ? '/' : '.');
#endif
	  if (p != 0)
	    {
	      ++p;
	      o = macro_buffer_output (o, p, strlen (p));
	    }
	  else if (function == function_notdir)
	    o = macro_buffer_output (o, p2, strlen (p2));
	  if ((p && *p) || function == function_notdir)
	    o = macro_buffer_output (o, " ", 1);
	  doneany = 1;
	}
      if (doneany)
	/* Kill last space.  */
	--o;
      free (text);
      break;
    }

  return o;
}

/* Scan LINE for macro references and expansion-function calls.
   Build in `macro_buffer' the result of expanding those references and calls.
   Return the address of the resulting string, which is null-terminated
   and is valid only until the next time this function is called.  */

static char *
macro_expand (line)
     register char *line;
{
  register struct macro *m;
  register char *p, *o, *p1;


  /* If we don't have a macro output buffer yet, get one.
     The same buffer is reused each time macro_expand is called,
     and made bigger whenever necessary.  */

  if (macro_buffer == 0)
    {
      macro_buffer_length = 200;
      macro_buffer = (char *) xmalloc (macro_buffer_length);
    }

  p = line;
  o = macro_buffer;
  *o = '\0';

  while (1)
    {
      /* Copy all following uninteresting chars all at once to the
         macro output buffer, and skip them.  Uninteresting chars end
	 at the next $ or the end of the input.  */

      p1 = index (p, '$');
      o = macro_buffer_output (o, p, p1 ? p1 - p : strlen (p) + 1);

      if (p1 == 0)
	break;
      p = p1 + 1;

      /* Dispatch on the char that follows the $.  */

      switch (*p)
	{
	case '$':
	  /* $$ seen means output one $ to the output buffer.  */

	  o = macro_buffer_output (o, p, 1);
	  break;

	case '(':
	case '{':
	  /* $(...) or ${...} is the general case of substitution.  */

	  {
	    char openparen = *p;
	    char closeparen = (openparen == '(') ? ')' : '}';
	    register char *beg = p + 1;
	    char *end;
	    register int code;
	    int maxlen;

	    /* Is there a macro reference inside the parens or braces?
	       If so, expand it before doing anything else.  */

	    p1 = index (beg, '$');
	    if (p1 != 0)
	      {
		/* BEG now points past the opening paren or brace.
		   Count parens or braces until it is matched.  */
		int count = 0;
		for (p = beg; *p != '\0'; ++p)
		  {
		    if (*p == openparen)
		      ++count;
		    else if (*p == closeparen && --count < 0)
		      break;
		  }
		if (count >= 0)
		  /* There were insufficient closing parens or braces
		     to terminate the macro reference.  */
		  return macro_buffer;
		else
		  {
		    char *name = expand_argument (beg, p);
		    p1 = concat ("$(", name, ")");
		    free (name);
		    name = expand_argument (p1, p1 + strlen (p1));
		    o = macro_buffer_output (o, name, strlen (name));
		    free (name);
		  }
		break;
	      }

	    /* First, see if this is a reference to a built-in function.
	       That is so if the text inside the parens starts with
	       the name of a function ended by a space or tab.  */

	    p1 = lindex (beg, beg + MAXFUNCTIONLEN, '\0');
	    maxlen = p1 ? p1 - beg : MAXFUNCTIONLEN;

	    for (code = 0; function_table[code].name; ++code)
	      {
		if (maxlen < function_table[code].len)
		  continue;
		p1 = beg + function_table[code].len;
		if ((*p1 == ' ' || *p1 == '\t')
		    && !strncmp (function_table[code].name, beg,
				 function_table[code].len))
		  break;
	      }
	    if (function_table[code].name)
	      {
		/* We have found a call to an expansion-time function.
		   Find the end of the arguments, and do the function.  */

		int count = 0;
		char *argbeg;

		/* Space after function name isn't part of the args.  */
		p = p1;
		while (*p == ' ' || *p == '\t')
		  ++p;
		argbeg = p;

		/* Count nested use of whichever kind of parens we use,
		   so that nested calls and macro refs work.  */

		for (; *p; ++p)
		  {
		    if (*p == openparen)
		      ++count;
		    else if (*p == closeparen && --count < 0)
		      break;
		  }

		/* We found the end; expand the function call.  */

		o = expand_function (o, function_table[code].function,
				     argbeg, p);
		break;
	      }

	    /* This is not a reference to a built-in function.
	       There are several things it could be.  In any case,
	       find the end of it, which is the first close-paren
	       of the appropriate type.  (We do not count them.)  */

	    end = index (beg, closeparen);
	    if (end == 0)
	      /* There was no ending ) or } !!
		 Swallow the line (and screw the hook and sinker).  */
	      return (macro_buffer);

	    /* This is not a reference to a built-in function.  Is it
	       an old-fashioned substitution spec, $(FOO:BAR=UGH)?  */

	    if ((p = lindex (beg, end, ':')) && (p1 = lindex (p, end, '=')))
	      {
		int slen = p1 - p - 1;
		int rlen = end - p1 - 1;
		m = lookup_macro (beg, p - beg);
		if (m != 0 && *m->value != '\0')
		  o = subst_expand (o, m->value, p+1, p1+1, slen, rlen, 1);
	      }

	    /* No, this must be an ordinary macro reference.  */
	    else
	      {
		/* Look up the value of the macro.  */
		m = lookup_macro (beg, end - beg);

		if (m != 0 && *m->value != '\0')
		  if (m->expanding)
		    fatal ("Recursive variable `%s' references\
itself (eventually)",
			   m->name);
		  else if (m->recursive)
		    {
		      /* Re-expand the macro value.  */
		      m->expanding = 1;
		      p = expand_argument (m->value,
				           m->value + strlen (m->value));
		      m->expanding = 0;

		      /* Output the re-expanded value.  */
		      o = macro_buffer_output (o, p, strlen (p));
		    }
		  else
		    o = macro_buffer_output (o, m->value, strlen (m->value));
	      }

	    /* Advance p past the macro reference to resume scan.  */
	    p = end;
	  }
	  break;

	case '\0':
	case '\t':
	case ' ':
	  break;

	default:
	  /* A $ followed by a random char is a macro reference:
	     $a is equivalent to $(a).  */

	  m = lookup_macro (p, 1);
	  if (m != 0 && *m->value != '\0')
	    if (m->expanding)
	      fatal ("Recursive variable `%s' references itself (eventually)",
		     m->name);
	    else if (m->recursive)
	      {
		/* Re-expand the macro value.  */
		m->expanding = 1;
		p1 = expand_argument (m->value,
				      m->value + strlen (m->value));
		m->expanding = 0;
		
		/* Output the re-expanded value.  */
		o = macro_buffer_output (o, p1, strlen (p1));
	      }
	    else
	      o = macro_buffer_output (o, m->value, strlen (m->value));

	  break;
	}      
      ++p;
    }
  return macro_buffer;
}

/* Subroutine of macro_expand and friends:
   The text to add is LENGTH chars starting at STRING to the macro_buffer.
   The text is added to the buffer at PTR, and the updated pointer into
   the buffer is returned as the value.  Thus, the value returned by
   each call to macro_buffer_output should be the first argument to
   the following call.  */

static char *
macro_buffer_output (ptr, string, length)
     char *ptr, *string;
     int length;
{
  register int newlen = length + (ptr - macro_buffer);
  register char *new;

  if (newlen > macro_buffer_length)
    {
      macro_buffer_length = max (2 * macro_buffer_length, newlen + 100);
      new = (char *) xrealloc (macro_buffer, macro_buffer_length);
      ptr += new - macro_buffer;
      macro_buffer = new;
    }

  bcopy (string, ptr, (int) length);
  return (ptr + length);
}

/* Access the hash table of all file records.
   lookup_file  given a name, return the struct file * for that name,
           or nil if there is none.
   enter_file   similar, but create one if there is none.  */

static struct file *
lookup_file (name)
     char *name;
{
  register struct file *f;
  register char *n;
  register int hashval = 0;

#ifdef atarist
  while (name[0] == '.' && name[1] == '\\' && name[2])
#else
  while (name[0] == '.' && name[1] == '/' && name[2])
#endif
    name += 2;

  if (*name == '\0')
    abort ();

  for (n = name; *n; ++n)
#ifdef case_insensitive
    hashval += char_upcase(*n);
#else
    hashval += *n;
#endif
  hashval %= FILE_BUCKETS;

  for (f = files[hashval]; f != 0; f = f->next)
    if (streq (f->name, name))
      return (f);
  return (0);
}

static struct file *
enter_file (name)
     char *name;
{
  register struct file *f, *lastf;
  register char *n;
  register int hashval = 0;

#ifdef atarist
  while (name[0] == '.' && name[1] == '\\' && name[2])
#else
  while (name[0] == '.' && name[1] == '/' && name[2])
#endif
    name += 2;

  if (*name == '\0')
    abort ();

  for (n = name; *n; ++n)
#ifdef case_insensitive
    hashval += char_upcase(*n);
#else
    hashval += *n;
#endif
  hashval %= FILE_BUCKETS;

  for (lastf = f = files[hashval]; f != 0; lastf = f, f = f->next)
    if (streq (f->name, name))
      break;

  if (f != 0)
    if (f->double_colon)
      {
	/* If there is a double-colon entry for NAME, we want to
	   add another entry, but make it so the original one,
	   now pointed to by F, will always be the first found.  */
	/* Remove F from the chain.  */
	if (f == lastf)
	  /* If F and LASTF are the same, we are at the beginning
	     of the chain and must change the head pointer.  */
	  files[hashval] = f->next;
	else
	  lastf->next = f->next;
      }
    else
      return f;

  lastf = (struct file *) xmalloc (sizeof (struct file));
  bzero ((char *) lastf, sizeof (struct file));
  lastf->name = name;
  lastf->update_status = -1;

  lastf->next = files[hashval];
  files[hashval] = lastf;
  if (f != 0)
    {
      /* Put F in front of the newly created LASTF.  */
      f->next = files[hashval];
      files[hashval] = f;
    }

  return lastf;
}

/* Print version information.
   This prints:

     GNU Make version X.Y (Rel), by Richard Stallman and Roland McGrath.
     Copyright (C) 1988 Free Software Foundation, Inc.
     This is free software; see the source file for copying conditions.
     There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A
     PARTICULAR PURPOSE.

   where X.Y is the second word of `$Revision: 2.0 $' and Rel is
   the second word of `$State: Rel $'.  */

static void
print_version ()
{
  char *revision = &"$Revision: 2.0 $"[11];
  char *state = &"$State: Rel $"[8];
  int rlen, slen;
  

  /* If this was compiled from a checked-out and locked version
     of the source, the RCS keywords have no values.  */
  if (revision[-2] == '$' || state[-2] == '$')
    {
      revision = "(New)";
      state = "in progess";
      rlen = 5;
      slen = 10;
    }
  else
    {
      rlen = index (revision, ' ') - revision;
      slen = index (state, ' ') - state;
    }
  

  printf ("GNU Make version %.*s (%.*s), ", rlen, revision, slen, state);

  puts ("by Richard Stallman and Roland McGrath.\n\
Copyright (C) 1988 Free Software Foundation, Inc.\n\
This is free software; see the source file for copying conditions.\n\
There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A\n\
PARTICULAR PURPOSE.\n");

  /* Flush stdout so the user doesn't have to wait to see the
     version information while things are thought about.  */
  fflush (stdout);
}

/* Print the contents of the files and macros hash tables.  */

static void
print_data_base ()
{
  register struct macro *m;
  register struct file *f;
  register struct dep *d;
  register struct rule *r;
  register struct dirdata *dir;
  register int i, j, k;

  print_version ();

  puts ("\nMacros\n");

  j = 0;
  for (i = 0; i < MACRO_BUCKETS; ++i)
    for (m = macros[i]; m != 0; m = m->next)
      {
	++j;
	printf ("%s = %s\n", m->name, m->value);
      }

  printf ("\n%d macros in %d hash buckets, average %f macros per bucket.\n",
	  j, MACRO_BUCKETS, ((float) j) / MACRO_BUCKETS);

  puts ("\nImplicit rules\n");

  j = k = 0;
  for (r = pattern_rules; r != 0; r = r->next)
    {
      ++j;
      printf ("%s:", r->name);
      if (r->terminal)
	{
	  ++k;
	  puts ("   (terminal)");
	}
      else
	putchar ('\n');
      for (d = r->deps; d != 0; d = d->next)
	printf (" depends on %s\n", dep_name (d));
      if (r->cmds)
	{
	  struct commands *c = r->cmds;
	  if (c->filename)
	    printf (" commands to execute (from `%s', line %ld):\n  %s",
		    c->filename, c->lineno, c->commands);
	  else
	    printf (" commands to execute:\n  %s\n", c->commands);
	}
    }

  printf ("\n%d implicit rules, %d (%f%%) terminal.\n", j, k, 100 * k / j);

  puts ("\nDirectories\n");

  j = k = 0;
  for (i = 0; i < DIR_HASH_SIZE; ++i)
    for (dir = dir_hash_table[i]; dir != 0; dir = dir->next)
      {
	++k;
	if (dir->name[0] == '.' && dir->name[1] == '\0')
	  {
	    ++j;
	    puts (dir->dir);
	  }
      }

  printf ("\n%d directories with a total of %d files in %d hash buckets,\n",
	   j, k, DIR_HASH_SIZE);
  printf ("average of %f files per bucket.\n", ((float) k) / DIR_HASH_SIZE);

  puts ("\nFiles\n");

  j = 0;
  for (i = 0; i < FILE_BUCKETS; ++i)
    for (f = files[i]; f != 0; f = f->next)
      {
	++j;
	fputs (f->name, stdout);
	if (f->is_target)
	  putchar (':');
	if (f->double_colon)
	  putchar (':');
	if (f->stem != 0)
	  printf ("   (implicit rule stem `%s')", f->stem);
	putchar ('\n');
	for (d = f->deps; d != 0; d = d->next)
	  printf (" depends on %s\n", dep_name (d));
	if (f->cmds)
	  {
	    struct commands *c = f->cmds;
	    if (c->filename)
	      printf (" commands to execute (from `%s', line %ld):\n  %s",
		      c->filename, c->lineno, c->commands);
	    else
	      printf (" commands to execute:\n  %s\n", c->commands);
	  }
      }

  printf ("\n%d files in %d hash buckets, average %f files per bucket.\n",
	  j, FILE_BUCKETS, ((float) j) / FILE_BUCKETS);

  puts ("\nDone");
  fflush (stdout);
}

void read_makefile (), record_files ();

/* Look at out command args to determine the names of the makefiles
   and read all those files, adding their macro definitions and rules
   to the macro and file hash tables.  */

static void
read_all_makefiles (argc, argv)
     int argc;
     char **argv;
{
  struct macro *m;
  register int i;
  int num_makefiles = 0;

  /* If there's a non-null macro MAKEFILES,
     its value a list of files to read first thing.
     But don't let it prevent reading the default makefiles
     and don't let the default goal come from there.  */

  m = lookup_macro ("MAKEFILES", 9);
  if (m && *m->value)
    {
      char *rest = m->value;
      char *name;
      int length;
      /* Set NAME to start of next token and LENGTH to its length.
	 REST is updated for finding remaining tokens.  */
      while (name = find_next_token (&rest, &length))
	{
	  name = savestring (name, length);
	  if (file_exists_p (name))
	    read_makefile (name, 1, 0);
	  else
	    free (name);
	}
    }

  /* Read makefiles specified with -f switches.  */

  for (i = 1; i < argc; i++)
    if (!strcmp (argv[i], "-f"))
      {
	++i;
	if (i >= argc)
	  fatal ("no description argument after -f command option");
	read_makefile (argv[i], 0, 2);
	++num_makefiles;
      }

  /* If there were no -f switches, try the default names.  */

  if (num_makefiles == 0)
    {
      if (file_exists_p ("makefile"))
	read_makefile ("makefile", 0, 2);
      else if (file_exists_p ("Makefile"))
	read_makefile ("Makefile", 0, 2);
      else if (argc <= 1)
	fatal ("no target arguments or description file");
    }
}

/* Read file FILENAME as a makefile and add its contents to the data base.
   NODEFAULT means don't take the default goal target from this makefile.
   ERRORLEVEL determines the behavior if the file is not found.
   If it is <= 0, nothing happens.  If it is 1, a message is issued.
   If it is > 1, a message is issued and the program exits.  */

static void
read_makefile (filename, nodefault, errorlevel)
     char *filename;
     int nodefault;
     int errorlevel;
{
  register FILE *infile;
  struct linebuffer lb;
  int commands_len = 200;
  char *commands = (char *) xmalloc (200);
  int commands_idx = 0;
  long commands_started;
  register char *p;
  char *p2;
  int ignoring = 0;

  struct nameseq *filenames = 0;
  struct dep *deps = 0;
  long lineno = 1;
  long nlines = 0;
  int two_colon;
  char *cmdleft;
  char *t;
  char *pattern = 0;
  
#ifdef	lint	/* Suppress `used before set' messages.  */
  two_colon = 0;
#endif

  /* First, get a stream to read.  */

  if (!strcmp (filename, "-"))
    infile = stdin;
  else
    infile = fopen (filename, "r");

#ifdef atarist
  if (infile == 0 && nodefault && *filename != '\\' && include_directories)
#else
  if (infile == 0 && nodefault && *filename != '/' && include_directories)
#endif
    {
      register int i;
      char *name = (char *) alloca (max_incl_len + 1 + strlen (filename) + 1);
      for (i = 0; include_directories[i] != 0; ++i)
	{
#ifdef atarist
	  sprintf (name, "%s\\%s", include_directories[i], filename);
#else
	  sprintf (name, "%s/%s", include_directories[i], filename);
#endif
	  infile = fopen (name, "r");
	  if (infile != 0)
	    {
	      filename = name;
	      break;
	    }
	}
    }

  /* If file can't be found at all, either ignore it or give up entirely.  */

  if (infile == 0)
    {
      if (errorlevel > 1)
	pfatal_with_name (filename);
      else if (errorlevel > 0)
	perror_with_name ("", filename);
      return;
    }

  reading_filename = filename;
  reading_lineno_ptr = &lineno;

  /* Loop over lines in the file.
     The strategy is to accumulate target names in FILENAMES,
     dependencies in DEPS and commands in COMMANDS.
     These are used to define a rule
     when the start of the next rule (or eof) is encountered.  */

  initbuffer (&lb);

  while (!feof (infile))
    {
      lineno += nlines;
      nlines = readline (&lb, infile, filename, lineno);

      p = lb.buffer;

#define	word1eq(s, l) 	((p[l] == '\0' || p[l] == ' ' || p[l] == '\t') && \
			 !strncmp (s, p, l))

      while (*p == ' ' || *p == '\t')
	++p;
      if (*p == '\0')
	continue;
      p = lb.buffer;
      if (word1eq ("ifdef", 5) || word1eq ("ifndef", 6)
	  || word1eq ("ifeq", 4) || word1eq ("ifneq", 5)
	  || word1eq ("else", 4) || word1eq ("endif", 5))
	{
	  int i = conditional_line (p, filename, lineno);
	  if (i >= 0)
	    {
	      ignoring = i;
	      continue;
	    }
	  else
	    fatal ("%s:%ld: invalid syntax in conditional", filename, lineno);
	}
      if (ignoring)
	continue;
      else if (word1eq ("define", 6))
	{
	  p += 6;
	  p2 = next_token (p);
	  p = end_of_token (p2);
	  lineno = do_define (&lb, savestring (p2, p - p2),
			      lineno, infile, filename);
	  continue;
	}
      else if (word1eq ("endef", 5))
	fatal ("%s:%ld: extraneous `endef'", filename, lineno);
      else if (word1eq ("override", 8))
	{
	  p += 8;
	  p2 = next_token (p);
	  if (p2 == 0 || !try_macro_definition (p2, o_override))
	    fatal ("%s:%ld: Empty `override' directive", filename, lineno);
	}
      else if (word1eq ("include", 7))
	{
	  /* We have found an `include' line specifying a nested
	     makefile to be read at this point.  */
	  p += 8;
	  p2 = next_token (p);
	  if (p2 == 0)
	    fatal ("%s:%ld: no filename for `include'", filename, lineno);
	  p = end_of_token (p2);
	  p = savestring (p2, p - p2);
	  read_makefile (p, 1, 1);
	  continue;
	}
      else if (word1eq ("vpath", 5))
	{
	  char *pattern;
	  p += 5;
	  p2 = macro_expand (p);
	  p = next_token (p2);
	  if (p != 0)
	    {
	    p2 = end_of_token (p);
	    pattern = savestring (p, p2 - p);
	    p = next_token (p2);
	    if (p != 0)
	      {
		p2 = end_of_token (p);
		p = savestring (p, p2 - p);
	      }
	      /* No searchpath means remove all previous selective VPATH's
		 with the same pattern.  */
	    }
	  else
	    /* No pattern means remove all previous selective VPATH's.  */
	    pattern = 0;
	  (void) construct_vpath_list (pattern, p);
	  if (pattern != 0)
	    free (pattern);
	  if (p != 0)
	    free (p);
	  continue;
	}
#undef	word1eq
      else if (try_macro_definition (p, o_file))
	continue;
      else if (*p == '\t')
	{
	  /* This line is a shell command */
	  int len;

	  if (filenames == 0)
	    fatal ("%s:%ld: commands commence before first target",
	           filename, lineno);

	  /* Add this command line to end of the line being accumulated.  */
	  if (commands_idx == 0)
	    commands_started = lineno;
	  len = strlen (p);
	  if (len + 1 + commands_idx > commands_len)
	    {
	      commands_len = (len + 1 + commands_idx) * 2;
	      commands = (char *) xrealloc (commands, commands_len);
	    }
	  bcopy (p, &commands[commands_idx], len);
	  commands_idx += len;
	  commands[commands_idx++] = '\n';
	}
      else
	{
	  /* This line describes some target files.
	     Record the previous rule.  */

	  struct commands *cmds;

	  if (commands_idx > 0)
	    {
	      register int i = 0;
	      while (i < commands_idx
		     && (commands[i] == ' ' || commands[i] == '\t'
			 || commands[i] == '\n'))
		++i;
	      if (i < commands_idx)
		{
		  cmds = (struct commands *)
		    xmalloc (sizeof (struct commands));
		  cmds->filename = filename;
		  cmds->lineno = commands_started;
		  cmds->commands = savestring (commands, commands_idx);
		}
	      else
		cmds = 0;
	    }
	  else
	    cmds = 0;
	  record_files (filenames, pattern, deps, cmds, two_colon,
			filename, lineno, !nodefault);


	  /* Does this line contain a semicolon (that isn't quoted with \)?
	     If so, find the first such.  */
	  cmdleft = index (p, ';');
	  while (cmdleft != 0 && cmdleft[-1] == '\\')
	    {
	      register char *q = &cmdleft[-1];
	      register int backslash = 0;
	      while (*q-- == '\\')
		backslash = !backslash;
	      if (backslash)
		cmdleft = index (cmdleft + 1, ';');
	      else
		break;
	    }
	  if (cmdleft != 0)
	    {
	      p = savestring (p, cmdleft - p);
	      p2 = macro_expand (p);
	      free (p);
	    }
	  else
	    p2 = macro_expand (p);

	  if (*p2 == '\0' || *p2 == ':')
	    fatal ("%s:%ld: missing target name", filename, lineno);
	  filenames = multi_glob (parse_file_seq (&p2, ':',
						  sizeof (struct nameseq)),
				  sizeof (struct nameseq));
	  if (*p2++ == '\0')
	    fatal ("%s:%ld: missing separator", filename, lineno);
	  /* Is this a one-colon or two-colon entry?  */
	  two_colon = *p2 == ':';
	  if (two_colon) p2++;

	  /* Is this an extended static rule: `target: %targ: %dep; ...'?  */
	  p = index (p2, ':');
	  while (p != 0 && p[-1] == '\\')
	    {
	      register char *q = &p[-1];
	      register int backslash = 0;
	      while (*q-- == '\\')
		backslash = !backslash;
	      if (backslash)
		p = index (p + 1, ';');
	      else
		break;
	    }
	  if (p != 0)
	    {
	      struct nameseq *target;
	      target = parse_file_seq (&p2, ':', sizeof (struct nameseq));
	      ++p2;
	      if (target == 0)
		fatal ("%s:%ld: missing target pattern", filename, lineno);
	      else if (target->next != 0)
		fatal ("%s:%ld: multiple target patterns", filename, lineno);
	      pattern = target->name;
	      if (index (pattern, '%') == 0)
		fatal ("%s:%ld: target pattern contains no `%%'",
		       filename, lineno);
	    }
	  else
	    pattern = 0;
	  
	  /* Parse the dependencies.  */
	  deps = (struct dep *)
	    multi_glob (parse_file_seq (&p2, ';', sizeof (struct dep)),
			sizeof (struct dep));

	  commands_idx = 0;
	  /* Did we stop at end of line, or at a semicolon?  */
	  if (cmdleft != 0)
	    {
	      /* Semicolon means rest of line is a command */
	      int len = strlen (cmdleft + 1);

	      /* Add this command line to the buffer.  */
	      if (len + 2 > commands_len)
		{
		  commands_len = (len + 2) * 2;
		  commands = (char *) xrealloc (commands, commands_len);
		}
	      bcopy (cmdleft + 1, commands, len);
	      commands_idx += len;
	      commands[commands_idx++] = '\n';
	    }
	}
    }

  if (ignoring)
    fatal ("missing endif");

  /* At eof, record the last rule.  */
  {
    struct commands *cmds;

    if (commands_idx > 0)
      {
	register int i = 0;
	while (i < commands_idx
	       && (commands[i] == ' ' || commands[i] == '\t'
	           || commands[i] == '\n'))
	  ++i;
	if (i < commands_idx)
	  {
	    cmds = (struct commands *) xmalloc (sizeof (struct commands));
	    cmds->filename = filename;
	    cmds->lineno = commands_started;
	    cmds->commands = savestring (commands, commands_idx);
	  }
	else
	  cmds = 0;
      }
    else
      cmds = 0;
    record_files (filenames, pattern, deps, cmds, two_colon,
		  filename, lineno, !nodefault);
  }

  freebuffer (&lb);
  free ((char *) commands);
  if (infile != stdin)
    fclose (infile);

  reading_filename = 0;
  reading_lineno_ptr = 0;
}

/* Execute a `define' directive.
   The first line has already been read, and NAME is the name of
   the variable to be defined.  The following lines remain to be read.
   LINENO, INFILE and FILENAME refer to the makefile being read.
   The value returned is LINENO, updated for lines read here.  */

static long
do_define (lbp, name, lineno, infile, filename)
     struct linebuffer *lbp;
     char *name;
     long lineno;
     FILE *infile;
     char *filename;
{
  int length = 0;
  long nlines = 0L;
  char *definition = (char *) xmalloc (1);
  register char *p;

#define	word1eq(s,l)	((p[l] == '\0' || p[l] == ' ' || p[l] == '\t') && \
                         !strncmp (s, p, l))

  while (!feof (infile))
    {
      lineno += nlines;
      nlines = readline (lbp, infile, filename, lineno);

      p = lbp->buffer;
      if (word1eq ("endef", 5))
	{
	  /* Define the macro.  */
	  define_macro (name, strlen (name), definition, o_file, 1);
	  break;
	}
      else
	{
	  int len = strlen (p);
	  int olength = length;

	  /* Increase the buffer if necessary.  */
	  length += len + (olength != 0);
	  if (olength == 0)
	    definition = (char *) xmalloc (length + 1);
	  else
	    definition = (char *) xrealloc (definition, length + 1);

	  /* Separate lines with a newline.  */
	  if (olength > 0)
	    definition[olength++] = '\n';
	  bcopy (p, &definition[olength], len);
	  definition[length] = 0;
	}
    }

  return lineno;
}

/* Glob-expand LINE.
   The returned pointer is only good until the next call to this
   routine.

   The RECURSIVE flag is only used internally.  */

static char *
string_glob (line, recursive)
     char *line;
     int recursive;
{
  static char *result, *result_end;
  static int result_length = 0;
  char **globbed;
  register int i, d, len;
  register char *p, *s;

  s = line;
  while (*s && *s != ' ' && *s != '\t')
    ++s;

  p = savestring (line, s - line);
  globbed = glob_filename (p);
  free (p);

  while (*s == ' ' || *s == '\t')
    ++s;

  /* NOSTRICT */
  if ((int) globbed == 0)
    fatal ("virtual memory exhausted");
  /* NOSTRICT */
  else if ((int) globbed == -1)
    pfatal_with_name (".");

  if (result_length == 0)
    {
      result_length = 200;
      result = xmalloc (200);
    }

  p = recursive ? result_end : result;
  *p = '\0';
  for (i = 0; globbed[i] != 0; ++i)
    {
      len = strlen (globbed[i]) + 1;
      d = p - result;
      if (d > 0)
	++d;
      d += len;
      if (d > result_length)
	{
	  result_length = d + (globbed[i + 1] ? 20 : 0);
	  result = xrealloc (result, result_length);
          p = result + (d - len - (d > len ? 1 : 0));
	}
      if (d > len)
	*p++ = ' ';
      bcopy (globbed[i], p, len);
      free (globbed[i]);
      p += len - 1;
    }
  result_end = p;
  free ((char *) globbed);

  if (*s != '\0')
    (void) string_glob (s, 1);

  return (result);
}

/* Interpret conditional commands "ifdef", "ifndef", "ifeq",
   "ifneq", "else" and "endif".
   LINE is the input line, with the command as its first word.

   FILENAME and LINENO are the filename and line number in the
   current makefile.  They are used for error messages.

   Value is -1 if the line is invalid,
   0 if following text should be interpreted,
   1 if following text should be ignored.  */

static int
conditional_line (line, filename, lineno)
     char *line;
     char *filename;
     long lineno;
{
  static int if_cmds = 0;
  static char *ignoring = 0;
  static int max_ignoring = 0;
  int notdef;
  char *cmdname;
  register int i;

  if (*line == 'i')
    {
      /* It's an "if..." command.  */
      notdef = line[2] == 'n';
      if (notdef)
	{
	  cmdname = line[3] == 'd' ? "ifndef" : "ifneq";
	  line += cmdname[3] == 'd' ? 7 : 6;
	}
      else
	{
	  cmdname = line[2] == 'd' ? "ifdef" : "ifeq";
	  line += cmdname[2] == 'd' ? 6 : 5;
	}
    }
  else
    {
      /* It's an "else" or "endif" command.  */
      notdef = line[1] == 'n';
      cmdname = notdef ? "endif" : "else";
      line += notdef ? 5 : 4;
    }

  while (*line == ' ' || *line == '\t')
    ++line;

  if (*cmdname == 'e')
    {
      if (*line != '\0')
	return -1;
      /* "Else" or "endif".  */
      if (if_cmds == 0)
	fatal ("%s:%ld: extraneous `%s'\n", filename, lineno, cmdname);
      /* NOTDEF indicates an "endif" command.  */
      if (notdef)
	--if_cmds;
      else
	ignoring[if_cmds - 1] = !ignoring[if_cmds - 1];
      for (i = 0; i < if_cmds; ++i)
	if (ignoring[i]) return 1;
      return 0;
    }

  ++if_cmds;

  if (if_cmds > (max_ignoring - 1))
    {
      max_ignoring += 5;
      if (ignoring)
	ignoring = xrealloc (ignoring, max_ignoring);
      else
	ignoring = xmalloc (max_ignoring);
    }

  if (cmdname[notdef ? 3 : 2] == 'd')
    {
      /* "Ifdef" or "ifndef".  */
      struct macro *m;
      register char *p = line;

      while (*p != '\0' && *p != ' ' && *p != '\t')
	++p;
      i = p - line;
      while (*p == ' ' || *p == '\t')
	++p;
      if (*p != '\0')
	return -1;
      m = lookup_macro (line, i);
      ignoring[if_cmds - 1] = (m && *m->value) == notdef;
      for (i = 0; i < if_cmds; ++i)
	if (ignoring[i]) return 1;
      return 0;
    }
  else
    {
      /* "Ifeq" or "ifneq".  */
      char *s1, *s2;
      int len;
      char termin = *line == '(' ? ',' : *line;

      if (termin != ',' && termin != '"' && termin != '\'')
	return -1;

      s1 = ++line;
      /* Find the end of the first string.  */
      if (termin == ',')
	{
	  register int count = 0;
	  for (; *line != '\0'; ++line)
	      {
		if (*line == '(')
		  ++count;
		else if (*line == ')')
		  --count;
		else if (*line == ',' && count <= 0)
		  break;
	      }
	}
      else
	while (*line != '\0' && *line != termin)
	  ++line;

      if (*line == '\0')
	return -1;

      *line++ = '\0';

      s2 = macro_expand (s1);
      /* We must allocate a new copy of the expanded string because
	 macro_expand re-uses the same buffer.  */
      len = strlen (s2);
      s1 = (char *) alloca (len + 1);
      bcopy (s2, s1, len + 1);

      /* Find the start of the second string.  */
      while (*line == ' ' || *line == '\t')
	++line;

      termin = termin == ',' ? ')' : *line;
      if (termin != ')' && termin != '"' && termin != '\'')
	return -1;
      ++line;
      s2 = line;

      /* Find the end of the second string.  */
      if (termin == ')')
	{
	  register int count = 0;
	  for (; *line != '\0'; ++line)
	      if (*line == '(')
		++count;
	      else if (*line == ')')
		if (count <= 0)
		  break;
		else
		  --count;
	}
      else
	while (*line != '\0' && *line != termin)
	  ++line;
      if (*line == '\0')
	return -1;

      if (*line != '\0')
	{
	  *line = '\0';
	  ++line;
	  while (*line == ' ' || *line == '\t')
	    ++line;
	  if (*line != '\0')
	    return -1;
	}
      s2 = macro_expand (s2);
      ignoring[if_cmds - 1] = streq (s1, s2) == notdef;
      for (i = 0; i < if_cmds; ++i)
	if (ignoring[i]) return 1;
      return 0;
    }
}

/* Record a description line for files FILENAMES,
   with dependencies DEPS, commands to execute COMMANDS.
   TWO_COLON is nonzero if a double colon was used.
   If not nil, PATTERN is the `%' pattern to make this
   an extended static rule.

   The links of FILENAMES are freed, and so are any names in it
   that are not incorporated into other data structures.

   If any of the command lines for a file contain "$(MAKE)"
   or "${MAKE}" then the file's recursive flag is set.  */

static void
record_files (filenames, pattern, deps, commands, two_colon,
	      filename, lineno, set_default)
     struct nameseq *filenames;
     char *pattern;
     struct dep *deps;
     struct commands *commands;
     int two_colon;
     char *filename;
     long lineno;
     int set_default;
{
  struct nameseq *nextf;

  for (; filenames != 0; filenames = nextf)
    {
      register char *name = filenames->name;
      char *p = index (name, '%');
      register struct file *f, *f1;
      register struct rule *r;
      register struct dep *d;
      struct dep *this;

      nextf = filenames->next;
      free ((char *) filenames);

      if (p != 0 && pattern != 0)
	fatal ("%s:%ld: mixed pattern and static rules", filename, lineno);

      /* If there are multiple filenames, copy the chain DEPS
	 for all but the last one.  It is not safe for the same deps
	 to go in more than one place in the data base.  */
      this = nextf != 0 ? copy_dep_chain (deps) : deps;

      if (pattern != 0)
	/* If this is an extended static rule:
	   `targets: target%pattern: dep%pattern; cmds',
	   Translate each dependency pattern into a plain filename
	   using the target pattern and this target's filename.  */
	if (!pattern_matches (pattern, name))
	  {
	    /* Give a warning if the rule is meaningless.  */
	    error ("%s:%ld: target `%s' doesn't match the target pattern",
		   filename, lineno, name);
	    this = 0;
	  }
	else
	  {
	    /* We use patsubst_expand to do the work of translating
	       the target pattern, the target's name and the dependencies'
	       patterns into plain dependency filenames.  */

	    /* Allocate MACRO_BUFFER if it doesn't exist.  */
	    if (macro_buffer == 0) (void) macro_expand ("");

	    for (d = this; d != 0; d = d->next)
	      {
		char *o;
		if (index (d->name, '%') == 0)
		  continue;
		o = patsubst_expand (macro_buffer, name, pattern, d->name);
		free (d->name);
		d->name = savestring (macro_buffer, o - macro_buffer);
	      }
	  }
      
      /* Check for a pattern rule.  */
      if (p != 0)
	{
	  r = (struct rule *) xmalloc (sizeof (struct rule));
	  r->name = name;
	  r->namelen = strlen (name);
	  r->patsuffix = p + 1;
	  r->terminal = two_colon;
	  r->deps = this;
	  r->cmds = commands;
	  /* If the new rule duplicates an old one, delete the old one. */
	  new_pattern_rule (r, 1);
	  f = 0;
	}
      else if (!two_colon)
	{
	  /* Single-colon.  Combine these dependencies
	     with any others in file's existing record, if any.  */
	  f = enter_file (name);
	  if (f->double_colon)
	    fatal ("target file `%s' has both : and :: entries", f->name);
	  /* Check for two single-colon entries both with commands.
	     Check is_target so that we don't lose on files such as .c.o
	     whose commands were preinitialized.  */
	  if (commands != 0 && f->cmds != 0 && f->is_target)
	    fatal ("target file `%s' has commands specified twice", f->name);
	  f->is_target = 1;
	  if (commands != 0)
	    f->cmds = commands;
	  /* Defining .SUFFIXES with no dependencies
	     clears out the list of suffixes.  */
	  if (f == suffix_file && this == 0)
	    f->deps = 0;
	  else if (f->deps)
	    {
	      d = f->deps;
	      while (d->next != 0)
		d = d->next;
	      d->next = this;
	    }
	  else
	    f->deps = this;
	}
      else
	{
	  /* Double-colon.  Make a new record even if file has one.  */
	  f1 = lookup_file (name);
	  if (f1 != 0 && !f1->double_colon)
	    fatal ("target file `%s' has both : and :: entries", f->name);
	  f = enter_file (name);
	  f->deps = this;
	  f->cmds = commands;
	  f->double_colon = 1;
	  f->is_target = 1;
	  f->prev = f1;
	}

      /* Check for $(MAKE) or ${MAKE} in the commands.  */
      if (commands != 0
          && (sindex (commands->commands, 0, "${MAKE}", 7) != 0
	      || sindex (commands->commands, 0, "$(MAKE)", 7) != 0))
	{
	  if (f != 0)
	    f->recursive = 1;
	  else
	    r->recursive = 1;
	}

      /* Free name if not needed further.  */
      if (f != 0 && name != f->name)
	free (name);

      /* See if this is first file seen in a top-level makefile
	 whose name does not start with a `.'.  */
      if (default_goal_file == 0 && set_default && f && *name != '.')
	{
	  int reject = 0;

	  /* If this file is a suffix, don't
	     let it be the default goal file.  */

	  for (d = suffix_file->deps; d != 0; d = d->next)
	    if (streq (name, dep_name (d)))
	      {
		reject = 1;
		break;
	      }

	  if (!reject)
	    default_goal_file = f;
	}
    }
}

/* Copy a chain of `struct dep', making a new chain
   with the same contents as the old one.  */

static struct dep *
copy_dep_chain (d)
     struct dep *d;
{
  register struct dep *c;
  struct dep *firstnew = 0;
  struct dep *lastnew;

  while (d)
    {
      c = (struct dep *) xmalloc (sizeof (struct dep));
      bcopy ((char *) d, (char *) c, sizeof (struct dep));
      c->next = 0;
      if (firstnew == 0)
	firstnew = lastnew = c;
      else
	lastnew = lastnew->next = c;

      d = d->next;
    }

  return firstnew;
}

/* Parse a string into a sequence of filenames
   represented as a chain of struct nameseq's in reverse order.
   Return that chain.

   The string is passed as STRINGP, the address of a string pointer.
   The string pointer is updated to point at the first character
   not parsed, which either is a null char or equals STOPCHAR.

   SIZE is how big to construct chain elements.
   This is useful if we want them actually to be other structures
   that have room for additional info.  */

static struct nameseq *
parse_file_seq (stringp, stopchar, size)
     char **stringp;
     char stopchar;
     int size;
{
  register struct nameseq *new = 0;
  register struct nameseq *new1;
  register char *p = *stringp;
  char *q;
  char *name;
  register int c;

  while (1)
    {
      /* Skip whitespace; see if any more names are left.  */
      while (*p == ' ' || *p == '\t')
	++p;
      if (*p == '\0')
	break;
      if (*p == stopchar)
	break;
      /* Yes, find end of next name.  */
      q = p;
      while (1)
	{
	  c = *p++;
	  if (c == '\0')
	    break;
	  else if (c == '\\' &&
	           (*p == '\\' || *p == ' ' || *p == '\t' || *p == stopchar))
	    ++p;
	  else if (c == ' ' || c == '\t' || c == stopchar)
	    break;
	}
      p--;

      /* Extract the filename just found, and skip it.  */
      name = savestring (q, p - q);

      /* Add it to the front of the chain.  */
      new1 = (struct nameseq *) xmalloc (size);
      new1->name = name;
      new1->next = new;
      new = new1;
    }

  *stringp = p;
  return (new);
}

/* Compare strings *S1 and *S2.
   Return negative if the first is less, positive if it is greater,
   zero if they are equal.  */

static int
alpha_compare (s1, s2)
     char **s1, **s2;
{
  if (**s1 != **s2)
    return **s1 - **s2;
  return strcmp (*s1, *s2);
}

/* Remove quoting backslashes from a string
   by compacting the string down into itself.
   Backslashes quoted by other backslashes are not removed.  */

static void
dequote (string)
     char *string;
{
  register char *in, *out;
  register int c;

  in = string;
  out = string;

  while (c = *in++)
    {
      if (c != '\\')
	*out++ = c;
      else if (c = *in++)
	*out++ = c;
    }

  *out = '\0';
}

/* Given a chain of struct nameseq's describing a sequence of filenames,
   in reverse of the intended order,
   return a new chain describing the result of globbing the filenames.
   The new chain is in forward order.
   The links of the old chain are freed or used in the new chain.
   Likewise for the names in the old chain.

   SIZE is how big to construct chain elements.
   This is useful if we want them actually to be other structures
   that have room for additional info.  */

static struct nameseq *
multi_glob (chain, size)
     struct nameseq *chain;
     int size;
{
  register struct nameseq *new = 0;
  register struct nameseq *tem;
  register struct nameseq *old;
  register char **vector;
  register int i;
  int length;
  struct nameseq *nexto;


  for (old = chain; old != 0; old = nexto)
    {
      nexto = old->next;

      if (glob_pattern_p (old->name))
	{
	  vector = glob_filename (old->name);
	  /* NOSTRICT */
	  if ((int) vector == 0)
	    fatal ("virtual memory exhausted");
	  /* NOSTRICT */
	  else if ((int) vector == -1)
	    pfatal_with_name (old->name);
	  free (old->name);
	  for (i = 0; vector[i]; i++);
	  length = i;
	  qsort ((char *) vector, length, sizeof (char *), alpha_compare);
	  for (i = length - 1; i >= 0; i--)
	    {
	      tem = (struct nameseq *) xmalloc (size);
	      tem->name = vector[i];
	      tem->next = new;
	      tem->quotedparen = 1;
	      new = tem;
	    }
	  free ((char *) vector);
	  free ((char *) old);
	}
      else
	{
	  old->quotedparen = !strcmp (old->name + strlen (old->name) - 2,
				      "\\)");
	  dequote (old->name);
	  old->next = new;
	  new = old;
	}
    }

  return (new);
}


/* For each dependency of each file, make it point at the
   file that it depends on.

   Also mark the files depended on by .PRECIOUS and .PHONY.  */

static void
snap_deps ()
{
  register struct file *f;
  register struct dep *d;
  register int i;

  /* Enter each dependency name as a file.  */
  for (i = 0; i < FILE_BUCKETS; ++i)
    for (f = files[i]; f != 0; f = f->next)
      for (d = f->deps; d != 0; d = d->next)
	{
	  d->file = enter_file (dep_name (d));
	  d->name = 0;
	}
  

  /* Compute maximum length of all the suffixes.  */
  maxsuffix = 0;
  for (d = suffix_file->deps; d != 0; d = d->next)
    {
      maxsuffix = max (maxsuffix, strlen (dep_name (d)));
    }

  f = lookup_file (".PRECIOUS");
  if (f != 0)
    for (d = f->deps; d != 0; d = d->next)
      for (f = d->file; f != 0; f = f->prev)
	f->precious = 1;

  f = lookup_file (".PHONY");
  if (f != 0)
    for (d = f->deps; d != 0; d = d->next)
      for (f = d->file; f != 0; f = f->prev)
	{
	  /* Mark this file as phony and non-existent.  */
	  f->phony = 1;
	  f->last_mtime = -1L;
	}
}

/* If FILE is not up to date, execute the commands for it.
   Return 0 if successful, 1 if unsuccessful;
   but with some flag settings, just call `exit' if unsuccessful.

   DEPTH is the depth in recursions of this function.
   We increment it during the consideration of our dependencies,
   then decrement it again after finding out whether this file
   is out of date.

   If there are multiple entries for FILE, consider each in turn.  */

static int
update_file (file, depth)
     struct file *file;
     int depth;
{
  register int status;
  register struct file *f = file;
  int ofiles_remade = files_remade;

  while (f)
    {
      status = update_file_1 (f, depth);
      if (status && !keep_going_flag)
	return (status);
      f = f->prev;
    }

  /* For a top level target, if we have found nothing whatever to do for it,
     print a message saying nothing needs doing.  */

  if (ofiles_remade == files_remade
      && !print_data_base_flag
      && depth == 0 && !silent_flag && !question_flag)
    {
      printf ("%s: File `%s' is up to date.\n", program, file->name);
      fflush (stdout);
    }

  return (status);
}

/* Consider a single `struct file' and update it as appropriate.  */

#define DEBUGPR(msg) \
  if (debug_flag) \
    {  print_spaces (depth);  printf (msg, file->name); fflush (stdout);  }

static int
update_file_1 (file, depth)
     struct file *file;
     int depth;
{
  register long this_mtime;
  int must_make;
  int dep_status = 0;
  register struct dep *d;

  DEBUGPR ("Considering target file `%s'.\n");
  depth++;

  if (file->updated)
    {
      depth--;
      if (file->update_status > 0)
	{
	  DEBUGPR ("Recently tried and failed to update file `%s'.\n");
	  return (file->update_status);
	}

      DEBUGPR ("File `%s' was considered already.\n");
      return 0;
    }
  else
    {
      file->updating = 1;	/* Notice recursive update of same file.  */

      /* Looking at the file's modtime beforehand allows the possibility
	 that its name may be changed by a VPATH search, and thus it may
	 not need an implicit rule.  If this were not done, the file
	 might get implicit commands that apply to its initial name, only
	 to have that name replaced with another found by VPATH search.  */

      this_mtime = file_mtime (file);
      must_make = this_mtime == -1L;
      if (must_make)
	DEBUGPR ("File `%s' does not exist.\n");

      /* If file was specified as a target with no commands,
	 come up with some default commands */

      if (!file->phony && file->cmds == 0 && !file->tried_implicit)
	{
	  if (try_implicit_rule (file, depth))
	    {
	      DEBUGPR ("An implicit rule found for `%s'.\n");
	    }
	  else
	    {
	      DEBUGPR ("No implicit rule found for `%s'.\n");
	      if (default_file)
		file->cmds = default_file->cmds;
	    }
	  file->tried_implicit = 1;
	}

      /* Update all non-intermediate files we depend on, if necessary,
	 and see whether any of them is more recent than this file.  */

      for (d = file->deps; d != 0; d = d->next)
	{
	  if (d->file->updating)
	    fatal ("dependency loop involving `%s' and `%s'",
		   dep_name (d), file->name);

	  dep_status |= check_dep (d->file, depth, this_mtime, &must_make);
	  if (dep_status && !keep_going_flag)
	    break;
	}

      /* Now we know whether this target needs updating.
	 If it does, update all the intermediate files we depend on.  */

      if (must_make)
	{
	  for (d = file->deps; d != 0; d = d->next)
	    if (d->file->intermediate)
	      {
		dep_status |= update_file (d->file, depth);
		if (dep_status && !keep_going_flag)
		  break;
	      }
	}

      file->updating = 0;

      DEBUGPR ("Finished dependencies of target file `%s'.\n");

      if (print_data_base_flag)
	{
	  depth--;
	  DEBUGPR ("Would now consider updating `%s'.\n");
	  return (0);
	}

      /* If any dependency failed, give up now.  */

      if (dep_status)
	{
	  depth--;
	  if (depth == 0 && keep_going_flag)
	    {
	      printf ("%s: Target `%s' not remade because of errors.\n",
		      program, file->name);
	      fflush (stdout);
	    }
	  DEBUGPR ("Giving up on target file `%s'.\n");
	  return (dep_status);
	}

      /* Now record which dependencies are more recent than this file,
	 so we can create $@.  */

      for (d = file->deps; d != 0; d = d->next)
	{
	  d->changed = this_mtime == -1L || this_mtime < file_mtime (d->file);

	  if (debug_flag && this_mtime != -1L)
	    {
	      print_spaces (depth);
	      printf ("File `%s' is %s than file `%s'.\n",
		      file->name, d->changed ? "older" : "newer",
		      dep_name (d));
	      fflush (stdout);
	    }
	}
    }

  /* Here depth returns to the value it had when we were called */
  depth--;

  if (!must_make)
    {
      DEBUGPR ("No need to remake target file `%s'.\n");
      file->update_status = 0;
      file->updated = 1;
      return (0);
    }

  DEBUGPR ("Must remake target file `%s'.\n");

  /* Now, take appropriate actions to remake the file.  */
  return remake_file (file);
}

/* Check whether another file (whose mtime is THIS_MTIME)
   needs updating on account of a dependency which is file FILE.
   If it does, store 1 in *MUST_MAKE_PTR.
   In the process, update any non-intermediate files
   that FILE depends on (including FILE itself).
   Return nonzero if any updating failed.  */

static int
check_dep (file, depth, this_mtime, must_make_ptr)
     struct file *file;
     int depth;
     long this_mtime;
     int *must_make_ptr;
{
  register struct dep *d;
  int dep_status = 0;

  ++depth;
  file->updating = 1;

  if (!file->intermediate)
    /* If this is a non-intermediate file, update it
       and record whether it is newer than THIS_MTIME.  */
    {
      dep_status = update_file (file, depth);
      if (file_mtime (file) > this_mtime)
	*must_make_ptr = 1;
    }
  else
    /* FILE is an intermediate file.
       Update all non-intermediate files we depend on, if necessary,
       and see whether any of them is more recent than the file
       on whose behalf we are checking.  */
    for (d = file->deps; d != 0; d = d->next)
      {
	if (d->file->updating)
	  fatal ("dependency loop involving `%s' and `%s'",
		 dep_name (d), file->name);

	dep_status |= check_dep (d->file, depth, this_mtime, must_make_ptr);
	if (dep_status && !keep_going_flag)
	  break;
      }

  file->updating = 0;
  return dep_status;
}

/* Having checked and updated the dependencies of FILE,
   do whatever is appropriate to remake FILE itself.
   Return the status from executing FILE's commands.  */

static int
remake_file (file)
     struct file *file;
{
  int status;

  file->update_status = 0;
  files_remade++;

  /* If file is a recursive submake, ignore -t and -q for this file.  */

  if (!file->is_target && !file->phony && file->cmds == 0)
    {
      fprintf (stderr, "%s: *** No specificaton for making file `%s'.",
	       program, file->name);
      if (keep_going_flag)
	{
	  fputs ("  Continuing.\n", stderr);
	  status = 1;
	}
      else
	{
	  fputs ("  Stop.\n", stderr);
	  exit (1);
	}
    }
  else if (question_flag && !file->recursive)
    /* pretend that updating "failed".  */
    status = 1;
  else if (file->cmds == 0)
    /* The only effect of this if statement
       is that files with no commands (not even implicit ones)
       and files marked as phony do not get touched with -t.  */
    status = 0;
  else if (touch_flag && !file->phony && !file->recursive)
    {
      /* Should set file's modification date and do nothing else.  */
      if (!silent_flag)
	{
	  printf ("touch %s\n", file->name);
	  fflush (stdout);
	}

      if (ar_name (file->name))
	status = ar_touch (file->name);
      else
	{
	  int fd = open (file->name, O_RDWR | O_CREAT, 0666);

#define	TOUCH_ERROR(call) \
  if (1) { perror_with_name (call, file->name); goto end_touch; } else

	  status = fd < 0;
	  if (status)
	    TOUCH_ERROR ("touch: open: ");
	  else
	    {
	      struct stat statbuf;
	      char buf;

	      if (fstat (fd, &statbuf) < 0)
		TOUCH_ERROR ("touch: fstat: ");
	      /* Rewrite character 0 same as it already is.  */
	      if (read (fd, &buf, 1) < 0)
		TOUCH_ERROR ("touch: read: ");
	      if (lseek (fd, 0, 0) < 0L)
		TOUCH_ERROR ("touch: lseek: ");
	      if (write (fd, &buf, 1) < 0)
		TOUCH_ERROR ("touch: write: ");
	      /* If file length was 0, we just changed it.
		 So change it back.  */
	      if (statbuf.st_size == 0)
		if (ftruncate (fd, 0) < 0)
		  TOUCH_ERROR ("touch: ftruncate: ");
	      close (fd);
	    }
	  end_touch:;

	}
    }
  else
    status = execute_file_commands (file);

  file->update_status = status;
  file->last_mtime = just_print_flag
                     ? time ((long *) 0) : name_mtime (file->name);
  file->updated = 1;

  return (status);
}

/* Discard each backslash-newline combination from LINE.
   This is done by copying the text at LINE into itself.  */

static void
collapse_continuations (line)
     char *line;
{
  register char *in, *out;

  in = out = line;

  while (*in)
    {
      if (in[0] == '\\')
	{
	  if (in[1] == '\n')
	    {
	      in += 2;
	      *out++ = ' ';
	    }
	  else
	    {
	      *out++ = *in++;
	      if (in[0] != '\0')
		*out++ = *in++;
	    }
	}
      else
	*out++ = *in++;
    }

  *out = '\0';

  return;
}

/* Execute the commands associated with FILE.
   Returns nonzero if some command got an unignored error.
   Returns zero if have successfully executed the commands.  */

static int
execute_file_commands (file)
     struct file *file;
{
  register char *line, *p, *next;
  /* Set to zero if we see that it is not safe
     to execute commands directly.  */
  int use_internal = 1;
  int status = 0;
  char *expansion;
  struct commands *cmds = file->cmds;

  /* Don't go through all the preparations if the
     command is nothing but whitespace.  */

  for (p = cmds->commands; *p; ++p)
    if (*p != ' ' && *p != '\t' && *p != '\n')
      break;
  if (*p == '\0')
    return 0;

  /* First set the automatic macros according to this file */

  free (atD_macro->value);
  free (starD_macro->value);
  free (lessD_macro->value);
  free (percentD_macro->value);
  free (at_macro->value);
  free (percent_macro->value);

#ifdef atarist

#define	LASTSLASH(m)	rindex (m->value, '\\')
#define	FILEONLY(m)	line ? line + 1 : m->value
#define	DIRONLY(m)	line == 0 ? savestring (".\\", 2) :		\
			((line == m->value) ? savestring ("\\", 1) :	\
			savestring (m->value, line - m->value + 1))

#else

#define	LASTSLASH(m)	rindex (m->value, '/')
#define	FILEONLY(m)	line ? line + 1 : m->value
#define	DIRONLY(m)	line == 0 ? savestring ("./", 2) :		\
			((line == m->value) ? savestring ("//", 1) :	\
			savestring (m->value, line - m->value + 1))

#endif

  if (ar_name (file->name))
    {
      line = index (file->name, '(');
      at_macro->value = savestring (file->name, line - file->name);
      ++line;
      percent_macro->value = savestring (line, strlen (line) - 1);
    }
  else
    {
      at_macro->value = savestring (file->name, strlen (file->name));
      percent_macro->value = savestring ((char *) 0, 0);
    }
  star_macro->value = file->stem != 0 ? file->stem : "";
  less_macro->value = file->deps != 0 ? dep_name (file->deps) : "";
  line = LASTSLASH (at_macro);
  atF_macro->value = FILEONLY (at_macro);
  atD_macro->value = DIRONLY (at_macro);
  dollar_slash_macro->value = atF_macro->value;
  line = LASTSLASH (star_macro);
  starF_macro->value = FILEONLY (star_macro);
  starD_macro->value = DIRONLY (star_macro);
  line = LASTSLASH (less_macro);
  lessF_macro->value = FILEONLY (less_macro);
  lessD_macro->value = DIRONLY (less_macro);
  line = LASTSLASH (percent_macro);
  percentF_macro->value = FILEONLY (percent_macro);
  percentD_macro->value = DIRONLY (percent_macro);
#undef	LASTSLASH
#undef	FILEONLY
#undef	DIRONLY

  /* Compute the values for $^ and $?.  */

  {
    register int dep_size = 0, c_size = 0;
    register char *cline;
    register struct dep *d;

    for (d = file->deps; d != 0; d = d->next)
      {
	register int i = strlen (dep_name (d)) + 1;
	c_size += i;
	if (d->changed)
	  dep_size += i;
      }

    /* Add 1 to size here to make room for the null that
       `strcat' inserts after the final space.  */
    line = (char *) xmalloc (dep_size + 1);
    cline = (char *) xmalloc (c_size + 1);
    *line = *cline = '\0';

    if (c_size > 0)
      {
	for (d = file->deps; d != 0; d = d->next)
	  {
	    strcat (cline, dep_name (d));
	    strcat (cline, " ");
	    if (d->changed)
	      {
		strcat (line, dep_name (d));
		strcat (line, " ");
	      }
	  }
	/* remove final space */
	line[dep_size - 1] = cline[c_size - 1] = '\0';
      }
    caret_macro->value = cline;
    qmark_macro->value = line;
  }

  /* Arrange for fatal signal to delete this target,
     unless it depends on .PRECIOUS:  */

  if (!file->precious)
    {
      signal_delete_file = file->name;
      signal_delete_mtime = file->last_mtime;
    }

  /* Expand macros and functions.  Error messages refer to
     the file and line where these commands were found.  */
  reading_filename = cmds->filename;
  reading_lineno_ptr = &(cmds->lineno);
  next = expansion = macro_expand (cmds->commands);
  reading_filename = 0;
  reading_lineno_ptr = 0;

  /* Now execute the command lines */

  line = (char *) alloca (strlen (expansion) + 1);
  while (next && *next)
    {
      int noprint = 0;
      int noerror = 0;
      char *end = next;

      /* Find the end of this line.  Backslash-newlines don't
	 mean the end.  */

      while (*end && *end != '\n')
	{
	  if (end[0] == '\\' && end[1] != 0)
	    end += 2;
	  else
	    end++;
	}

      strncpy (line, next, end - next);
      line[end - next] = 0;
      next = *end ? end + 1 : 0;

      /* Print each line that does not start with `@',
	 unless -s was specified.  */
      while (*line)
	{
	  if (*line == '@')
	    noprint = 1;
	  else if (*line == '-')
	    noerror = 1;
	  else if (*line != ' ' && *line != '\t')
	    break;
	  line++;
	}

      if (just_print_flag || (!silent_flag && !noprint))
	{
	  puts (line);
	  fflush (stdout);
	}

      /* If -n was specified, don't really execute, unless file
	 is a recursive submake.
	 But do pretend we changed this file's date.  */
      if (just_print_flag && !file->recursive)
	continue;

      /* Delete backslash-newlines from this line.  */

      collapse_continuations (line);

      /* Execute the command line.  */

      status = execute_command_line (line);

      if (status)
	{
	  fprintf (stderr, "%s: *** ", program);
	  if (status & SIGNAL_STATUS)
	    {
	      extern char *sys_siglist[];
	      int sig = status & ~(SIGNAL_STATUS|SIGNAL_COREDUMP);
	      if (sig < NSIG)
		fputs (sys_siglist[sig], stderr);
	      else
		fprintf (stderr, "Signal %d", sig);
	      if (status & SIGNAL_COREDUMP)
		fputs (" (core dumped)", stderr);
	    }
	  else
	    fprintf (stderr, "Error %d", status);

	  if (ignore_errors_flag || noerror)
	    {
	      fputs (" (ignored)\n", stderr);
	      /* We say it succeeded anyway so other things
		 that depend on this target will still be made.  */
	      status = 0;
	    }
	  else
	    {
	      putc ('\n', stderr);
	      fflush (stderr);
	      break;
	    }
	}
    }

  /* Target is final; no further reason to delete it.  */
  signal_delete_file = 0;
  signal_delete_mtime = 0;

  /* Now free the macro values made above.  */
  free (caret_macro->value);
  free (qmark_macro->value);
  caret_macro->value = qmark_macro->value = "";

  return (status);
}

/* For a FILE which has no commands specified, try to figure out some
   from the implicit pattern rules.
   Returns 1 if a suitable implicit rule was found,
   after modifying FILE to contain the appropriate commands and deps,
   or returns 0 if no implicit rule was found.  */

static int
try_implicit_rule (file, depth)
     struct file *file;
     int depth;
{
  register char *filename;

  DEBUGPR ("Looking for an implicit rule for `%s'.\n");

  /* If this is an archive member reference,
     use just the archive member name to search for implicit rules.  */
  if (ar_name (file->name))
    {
      filename = index (file->name, '(');
      DEBUGPR ("Looking for archive-member implicit rule for `%s'.\n");
      if (pattern_search (file, filename, depth, 0))
	return 1;
    }

  return pattern_search (file, (char *) 0, depth, 0);
}

#define DEBUGP2(msg, a1, a2) \
  if (debug_flag) \
    { print_spaces (depth); printf (msg, a1, a2); fflush (stdout);  }

/* Search the pattern rules for a rule with an existing
   dependent to make NAME.  If NAME is nil,
   FILE->name is used.  If a rule is found, the
   appropriate commands and deps are put in FILE
   and 1 is returned.  If not, 0 is returned.

   If an intermediate file is found by pattern search,
   the intermediate file is set up as a target by the recursive call
   and is also made a dependency of FILE.

   DEPTH is used for debugging messages.  */

static int
pattern_search (file, name, depth, recursions)
     struct file *file;
     char *name;
     int depth;
     int recursions;
{
  /* Filename we are searching for a rule for.  */
  char *filename = name != 0 ? name : file->name;

  /* Length of FILENAME.  */
  int namelen = strlen (filename);

  /* The last slash in FILENAME (or nil if there is none).  */
  char *lastslash;

  /* This is a file-object used as an argument in
     recursive calls.  It never contains any data
     except during a recursive call.  */
  struct file *intermediate_file = 0;

  /* Number of dependencies of the current rule that
     have been found using a recursive pattern_search.  */
  int intermediate_files_found = 0;

  /* List of dependencies found recursively.  */
  struct file **intermediate_files
    = (struct file **) alloca (max_pattern_deps * sizeof (struct file *));

  /* List of patterns used to find intermediate targets.  */
  char **intermediate_patterns
    = (char **) alloca (max_pattern_deps * sizeof (char *));

  /* This buffer records all the dependencies actually found for a rule.  */
  char **found_files = (char **) alloca (max_pattern_deps * sizeof (char *));
  /* Number of dep names now in FOUND_FILES.  */
  int deps_found;

  /* Names of possible dependencies are constructed in this buffer.  */
  register char *depname = (char *) alloca (namelen + max_pattern_dep_length);

  /* The start and length of the stem of FILENAME for the current rule.  */
  register char *stem;
  register int stemlen;

  /* Buffer in which we store all the rules that are possibly applicable.  */
  struct rule **tryrules
    = (struct rule **) alloca (num_pattern_rules * sizeof (struct rule *));

  /* Number of valid elements in tryrules.  */
  int nrules = 0;

  /* Nonzero if should consider intermediate files as dependencies.  */
  int intermed_ok;

  /* Nonzero if we have matched a pattern-rule target
     that is not just `%'.  */
  int specific_rule_matched = 0;

  register int i;
  register struct rule *rule;
  register struct dep *dep;

  char *p;

  /* Set LASTSLASH to point at the last slash in FILENAME
     but not counting any slash at the end.  (foo/bar/ counts as
     bar/ in directory foo/, not empty in directory foo/bar/.)  */

  lastslash = 0;
  p = filename;
  while (*p && p[1])
    {
#ifdef atarist
      if (*p == '\\')
#else
      if (*p == '/')
#endif
	lastslash = p;
      p++;
    }

  /* First see which pattern rules match this target
     and may be considered.  Put them in TRYRULES.  */

  for (rule = pattern_rules; rule != 0; rule = rule->next)
    {
      int check_lastslash;
      /* If the pattern rule has no commands, ignore it.
	 Users cancel built-in rules by redefining them without commands.  */
      if (rule->deps != 0 && rule->cmds == 0)
	continue;

      /* If this rule is in use by a parent pattern_search,
	 don't use it here.  */
      if (rule->in_use)
	continue;

      /* Don't try rules whose dependents are guaranteed
	 to be non-existent.  */
      if (lastslash == 0 && rule->subdir)
	continue;

      /* From the lengths of the filename and the pattern parts,
	 find the stem: the part of the filename that matches the %.  */
      stem = filename + (rule->patsuffix - rule->name - 1);
      stemlen = namelen - rule->namelen + 1;

      /* Set CHECK_LASTSLASH if FILENAME contains a directory prefix
	 and the target pattern does not contain a slash.  */

#ifdef atarist
      check_lastslash = lastslash && index (rule->name, '\\') == 0;
#else
      check_lastslash = lastslash && index (rule->name, '/') == 0;
#endif
      if (check_lastslash)
	{
	  /* In that case, don't include the directory prefix in STEM here.  */
	  stem += lastslash - filename + 1;
	  stemlen -= (lastslash - filename) + 1;
	}

      /* Check that filename is long enough to match the whole pattern.  */
      if (stemlen <= 0)
	continue;

      /* Check that the rule pattern matches the text before the stem.  */
      if (check_lastslash)
	{
	  if (stem > (lastslash + 1)
	      && strncmp (rule->name, lastslash + 1, stem - lastslash - 1))
	    continue;
	}
      else if (stem > filename
               && strncmp (rule->name, filename, stem - filename))
	continue;

      /* Check that the rule pattern matches the text after the stem.
	 We could test simply !streq (rule->patsuffix, stem + stemlen)
	 but this way we compare the first two characters immediately.
	 This saves time in the very common case where the first
	 character matches because it is a period.  */
      if (*rule->patsuffix != stem[stemlen]
	  || (*rule->patsuffix != 0
	      && !streq (&rule->patsuffix[1], &stem[stemlen + 1])))
	continue;

      /* Record if we match some rule that not all filenames will match.  */
      if (rule->name[1] != '\0')
	specific_rule_matched = 1;

      /* A rule with no dependencies and no commands exists solely to set
	 specific_rule_matched when it matches.  Don't try to use it.  */
      if (rule->deps != 0 || rule->cmds != 0)
	tryrules[nrules++] = rule;
    }

  /* If we have found a matching rule that won't match all filenames,
     retroactively reject any "terminal" rules that do always match.  */
  if (specific_rule_matched)
    for (i = 0; i < nrules; ++i)
      if (tryrules[i]->terminal && tryrules[i]->name[1] == '\0')
	tryrules[i] = 0;

  /* Try each rule once without intermediate files,
     then once with them.  */
  for (intermed_ok = 0; intermed_ok < 2; intermed_ok++)
    {
      /* Try each pattern rule till we find one that applies.
	 If it does, copy the names of its dependencies (as substituted)
	 and store them in FOUND_FILES.  DEPS_FOUND is the number of them.  */
      for (i = 0; i < nrules; i++)
	{
	  int check_lastslash;

	  rule = tryrules[i];

	  /* RULE is nil when we discovered that a rule, already placed
	     in TRYRULES, should not be applied.  */
	  if (rule == 0)
	    continue;

	  /* Rules that can match any filename and are not terminal
	     should be ignored on the second pass, so that they
	     cannot accept an intermediate file.
	     These rules can only be the end of a chain.  */
	  if (intermed_ok && rule->name[1] == '\0' && !rule->terminal)
	    continue;

	  /* Mark this rule as in use so a recursive
	     pattern_search won't try to use it.  */
	  rule->in_use = 1;

	  /* From the lengths of the filename and the pattern parts,
	     find the stem: the part of the filename that matches the %.  */
	  stem = filename + (rule->patsuffix - rule->name) - 1;
	  stemlen = namelen - rule->namelen + 1;

#ifdef atarist
	  check_lastslash = lastslash && index (rule->name, '\\') == 0;
#else
	  check_lastslash = lastslash && index (rule->name, '/') == 0;
#endif
	  if (check_lastslash)
	    {
	      stem += lastslash - filename + 1;
	      stemlen -= (lastslash - filename) + 1;
	    }

	  DEBUGP2 ("Trying pattern rule with stem `%.*s'.\n",
		   stemlen, stem);

	  /* Try each dependency; see if it "exists".  */

	  intermediate_files_found = 0;
	  deps_found = 0;
	  for (dep = rule->deps; dep != 0; dep = dep->next)
	    {
	      char *p = index (dep_name (dep), '%');
	      char *target_pattern;
	      struct file *f;

	      /* If the dependency name has a %, substitute the stem.  */
	      if (p != 0)
		{
		  int i;
		  if (check_lastslash)
		    {
		      i = lastslash - filename + 1;
		      bcopy (filename, depname, i);
		    }
		  else
		    i = 0;
		  bcopy (dep_name (dep), depname + i, p - dep_name (dep));
		  i += p - dep_name (dep);
		  bcopy (stem, depname + i, stemlen);
		  i += stemlen;
 		  strcpy (depname + i, p + 1);
		  p = depname;
		  target_pattern = dep_name (dep);
		}
	      else
		{
		  target_pattern = 0;
		  p = dep_name (dep);
		}
	      
	      /* P is now the actual dependency name as substituted.  */

	      if (file_impossible_p (p))
		{
		  /* If this dependency has already been ruled
		     "impossible", then the rule fails
		     and don't bother trying it on the second pass either
		     since we know that will fail too.  */
		  DEBUGP2 ("Rejecting impossible %s dependent `%s'.\n",
		       p == depname ? "implicit" : "rule", p);
		  tryrules[i] = 0;
		  break;
		}

	      DEBUGP2 ("Trying %s dependent `%s'.\n",
		       p == depname ? "implicit" : "rule", p);
	      if (lookup_file (p) != 0 || file_exists_p (p))
		{
		  found_files[deps_found++] = savestring (p, strlen (p));
		  continue;
		}
	      /* This code, given FILENAME = "lib/foo.o",
		 dependency name "lib/foo.c", and VPATH=src,
		 searches for "src/lib/foo.c".  */
	      if (vpath_search (&p, (char *) 0, 0))
		{
		  DEBUGP2 ("Found dependent as `%s'.\n", p, 0);
		  found_files[deps_found++] = p;
		  continue;
		}

	      /* We could not find the file in any place we should look.  */
	      /* Try to make this dependency as an intermediate file,
		 but only on the second pass.  */

	      if (intermed_ok && p == depname)
		{
		  int i;

		  if (intermediate_file == 0)
		    intermediate_file
		      = (struct file *) alloca (sizeof (struct file));

		  DEBUGP2 ("Looking for rule with intermediate file `%s'.\n",
			   p, 0);

		  bzero ((char *) intermediate_file, sizeof (struct file));
		  intermediate_file->name = p;
		  i = pattern_search (intermediate_file, (char *) 0,
		                      depth + 1, recursions + 1);
		  if (i)
		    {
		      p = savestring (p, strlen (p));
		      intermediate_patterns[deps_found]
			= intermediate_file->name;
		      found_files[deps_found++] = p;
		      intermediate_file->name = p;
		      intermediate_files[intermediate_files_found++]
			= intermediate_file;
		      intermediate_file = 0;
		      continue;
		    }
		  /* If we have tried to find P as an intermediate file
		     and failed, mark that name as impossible
		     so we won't go through the search again later.  */
		  file_impossible (p);
		}
	      
	      /* A dependency of this rule does not exist.
		 Therefore, this rule fails.  */
	      break;
	    }

	  /* This rule is no longer "in use" for recursive searches.  */
	  rule->in_use = 0;

	  if (dep != 0)
	    {
	      /* This pattern rule does not apply.
		 If some of its dependents succeeded,
		 free the data structure describing them.  */
	      while (deps_found-- > 0)
		free (found_files[deps_found]);
	      while (intermediate_files_found-- > 0)
		{
		  register struct file *f
		    = intermediate_files[intermediate_files_found];
		  if (f->stem < f->name
		      || (f->stem > f->name
			  && (f->stem - f->name) <= strlen (f->name)))
		    free (f->stem);
		}
	    }
	  else
	    /* This pattern rule does apply.  Stop looking for one.  */
	    break;
	}

      /* If we found an applicable rule with intermed_ok == 0,
	 don't try intermed_ok == 1.  */
      if (i < nrules)
	break;

      rule = 0;
    }

  /* RULE is nil if the loop went all the way through
     the list and everything failed.  */
  if (rule == 0)
    return 0;

  /* If we are recursing, store the pattern that matched
     FILENAME in FILE->name for use in upper levels.  */

  if (recursions > 0)
    /* Kludge-o-matic */
    file->name = rule->name;
  
  /* FOUND_FILES lists the dependencies for the rule we found.
     This includes the intermediate file, if any.
     Convert them into entries on the deps-chain of FILE.  */

  while (deps_found-- > 0)
    {
      register char *s;

      dep = (struct dep *) xmalloc (sizeof (struct dep));
      s = found_files[deps_found];
      if (recursions == 0)
	{
	  dep->name = 0;
	  dep->file = enter_file (s);
	}
      else
	{
	  dep->name = s;
	}
      dep->next = file->deps;
      file->deps = dep;

      /* If the new dependency duplicates an old one, delete the old one. */
      while (dep)
	{
	  if (dep->next && streq (dep_name (dep->next), s))
	    dep->next = dep->next->next;
	  else
	    dep = dep->next;
	}
    }

  file->stem = stem[stemlen] == '\0' ? stem : savestring (stem, stemlen);
  file->cmds = rule->cmds;
  file->recursive = file->recursive || rule->recursive;

  /* If we need to use an intermediate file,
     make sure it is entered as a target, with the info that was
     found for it in the recursive pattern_search call.
     We know that the intermediate file did not already exist as
     a target; therefore we can assume that the deps and cmds
     of F below are null before we change them.  */

  while (intermediate_files_found-- > 0)
    {
      struct file *imf = intermediate_files[intermediate_files_found];
      register struct file *f = enter_file (imf->name);
      f->deps = imf->deps;
      f->cmds = imf->cmds;
      f->stem = imf->stem;
      imf = lookup_file (intermediate_patterns[intermediate_files_found]);
      if (imf != 0 && imf->precious)
	f->precious = 1;
      f->intermediate = 1;
      f->tried_implicit = 1;
      for (dep = f->deps; dep != 0; dep = dep->next)
	{
	  dep->file = enter_file (dep->name);
	  dep->name = 0;
	}
      num_intermediates++;
    }

  return 1;
}

/* Compute the maximum dependency length and maximum number of
   dependencies of all implicit rules.  Also sets the subdir
   flag for a rule when appropriate.  */

static void
count_implicit_rule_limits ()
{
  char *name = 0;
  int namelen = 0;
  register struct rule *rule, *lastrule;
  
  num_pattern_rules = 0;
  
  lastrule = pattern_rules;
  for (rule = lastrule; rule != 0; lastrule = rule, rule = rule->next)
    {
      int ndeps = 0;
      register struct dep *dep;
      
      ++num_pattern_rules;
      
      for (dep = rule->deps; dep != 0; dep = dep->next)
	{
	  int len = strlen (dep_name (dep));
#ifdef atarist
	  char *p = rindex (dep->name, '\\');
#else
	  char *p = rindex (dep->name, '/');
#endif
	  char *p2 = p ? index (dep->name, '%') : 0;
	  if (len > max_pattern_dep_length)
	    max_pattern_dep_length = len;
	  ndeps++;
	  if (p != 0 && p2 > p)
	    {
	      if ((p - dep->name) > namelen)
		{
		  if (name != 0)
		    free (name);
		  namelen = p - dep->name;
		  name = (char *) xmalloc (namelen + 1);
		}
	      bcopy (dep->name, name, p - dep->name);
	      name[p - dep->name] = '\0';
	      if (dir_file_exists_p (name, "."))
		rule->subdir = 0;
	      else
		{
		  struct stat buf;
		  if (stat (name, &buf) < 0
		      || (buf.st_mode & S_IFMT) != S_IFDIR)
		    {
#ifdef atarist
		      if (*name == '\\')
#else
		      if (*name == '/')
#endif
			{
			  if (rule == pattern_rules)
			    pattern_rules = rule->next;
			  else
			    last_pattern_rule->next = rule->next;
			  free (rule->name);
			  free ((char *) rule);
			}
		      else
			rule->subdir = 1;
		    }
		  else
		    {
		      dir_load (name);
		      rule->subdir = 0;
		    }
		}
	    }
	}
      if (ndeps > max_pattern_deps)
	max_pattern_deps = ndeps;
    }
  
  if (name != 0)
    free (name);
}

/* Read a line of text from `stream' into `linebuffer'.
   Combine continuation lines into one line.
   Return the number of actual lines read. (> 1 if hacked continuation lines)
 */

static long
readline (linebuffer, stream, filename, lineno)
     struct linebuffer *linebuffer;
     FILE *stream;
     char *filename;
     long lineno;
{
  register int c;
  char *buffer = linebuffer->buffer;
  register char *p = linebuffer->buffer;
  register char *end = p + linebuffer->size;
  register int backslash = 0;
  register int command = 0;
  register long nlines = 0;

  while (1)
    {
      if (p == end)
	{
	  register long delta = linebuffer->size;
	  end += delta;
	  buffer = (char *) xrealloc (buffer, linebuffer->size += delta);
	  delta = buffer - linebuffer->buffer;
	  p += delta;
	  end += delta;
	  linebuffer->buffer = buffer;
	}
      c = getc (stream);

#ifdef atarist
      if (c == '\r')
	c = getc (stream);
#endif

      if (c == EOF)
	break;

      if (c == '\0')
	{
	  /* C (and un*x) suck */
	  fatal ("%s:%ld: null character in makefile",
		 filename, lineno + nlines);
	}

      if (c == '\n')
	{
	  if (!backslash)
	    /* Line not continued.  Return what we have so far.  */
	    break;

	  /* Line ends with odd number of backslashes -- continuation!  */
	  /* We leave backslashes before newlines and whitespace
	     after intact for commands.  */
	  if (command < 1)
	    {
	      /* Discard the backslash that means continuation.  */
	      --p;
	      backslash = 0;

	      /* Discard whitespace at start of next line.  */
	      while ((c = getc (stream)) == ' ' || c == '\t')
		;
	      if (ungetc (c, stream) == EOF)
		fatal ("%s:%ld: ungetc failed", filename, lineno + nlines);
	      /* Replace it all with one space.  */
	      c = ' ';
	    }
	  else
	    {
	      /* Eat a leading tab on a continued command line.  */
	      c = getc (stream);
	      if (c == EOF)
		fatal ("%s:%ld: getc failed", filename, lineno + nlines);
	      else if (c != '\t')
		if (ungetc (c, stream) == EOF)
		  fatal ("%s:%ld: ungetc failed", filename, lineno + nlines);
	      c = '\n';
	    }
	  nlines++;
	}

      if (command < 1)
	{
	  if (c == ';' || (command == 0 && !backslash && c == '\t'))
	    command = 1;
	  else
	    command = -1;
	}

      if (c == '#' && command < 1)
	{
	  while (1)
	    {
	      c = getc (stream);
	      if (c == EOF)
		break;
	      if (c == '\n')
		{
		  ++nlines;
		  if (!backslash)
		    break;
		}
	      backslash = c == '\\';
	    }
	  backslash = 0;
	  break;
	}

      if (c == '\\')
	backslash = !backslash;
      else
	backslash = 0;

      *p++ = c;
    }

  *p = '\0';
  nlines++;
  return (nlines);
}

static int
ar_name (name)
     char *name;
{
  char *p = index (name, '('), *end = name + strlen (name) - 1;
  
  if (p == 0 || *end != ')')
    return 0;

  if (p[1] == '(' && end[-1] == ')')
    fatal ("attempt to use unsupported feature: `%s'", name);

  return 1;
}

static int
ar_scan_1 (name, function)
     char *name;
     int (*function) ();
{
  char *arname;
  char *memname;
  char *p;
  int val;

  /* This "file" is an archive member */
  p = index (name, '(');
  arname = savestring (name, p - name);
  memname = savestring (p + 1, strlen (p) - 2);

  val = ar_scan (arname, function, memname);
  free (arname);
  free (memname);
  return (val);
}

/* ARGSUSED */
static int
ar_member_date_1 (desc, name, hdrpos, datapos, size, date, uid, gid, mode, mem)
     int desc;
     char *name;
     int hdrpos, datapos, size, date, uid, gid, mode;
     char *mem;
{
  if (streq (name, mem))
    return (date);
  else
    return (0);
}

static int
ar_member_date (name)
     char *name;
{
  return (ar_scan_1 (name, ar_member_date_1));
}

static int
ar_touch (name)
     char *name;
{
  register char *p, *arname, *memname;
  register int val;

  p = index (name, '(');
  arname = savestring (name, p - name);
  memname = savestring (p + 1, strlen (p) - 2);

  val = ar_member_touch (arname, memname);
  if (val == -2)
    fatal ("Invalid archive %s", arname);
  if (val < 0)
    pfatal_with_name (arname);
  if (val > 0)
    error ("touch: No such archive member %s", name);

  free (arname);
  free (memname);

  return (val);
}

/* Execute LINE as a command.  Try to avoid forking a shell.
   This routine handles only ' quoting.  Starting quotes may be
   escaped with a backslash.  If any of the characters ;"*?[]&|<>(){}=
   is seen, or any of the builtin commands listed in sh_cmds[]
   is the first word of a line, the shell is used.  */

static int
execute_command_line (line)
     char *line;
{
  static char *sh_cmds[] = { "cd", "eval", "exec", "exit", "login",
			     "logout", "set", "umask", "wait", "while", "for",
			     "case", "if", ":", ".", "break", "continue",
			     "export", "read", "readonly", "shift", "times",
			     "trap", "switch", 0 };
  register int i;
  register char *p;
  register char *ap;
  char *end;
  int instring;
#ifndef atarist
  union wait status;
#endif
  int pid;
  char **new_argv;

  new_environ ();

  /* See if it is safe to parse commands internally.  */
#ifndef atarist		/* this can't possibly work on ST */
  if (strcmp (shell_macro->value, "/bin/sh"))
	goto slow;
  else if (ifs_macro != 0)
    for (line = ifs_macro->value; *line != '\0'; ++line)
      if (*line != ' ' && *line != '\t' && *line != '\n')
	goto slow;
#endif

  i = strlen (line) + 1;

  /* More than 1 arg per character is impossible.  */
  new_argv = (char **) alloca (i * sizeof (char *));

  /* All the args can fit in a buffer as big as LINE is.   */
  ap = new_argv[0] = (char *) alloca (i);
  end = ap + i;

  /* I is how many complete arguments have been found.  */
  i = 0;
  instring = 0;
  for (p = line; *p; ++p)
    {
      if (ap > end)
	{
	  fflush (stdout);
	  fflush (stderr);
	  abort ();
	}

      if (instring)
	{
	  /* Inside a string, just copy any char except a closing quote.  */
	  if (*p == '\'')
	    instring = 0;
	  else
	    *ap++ = *p;
	}
      else
	/* Not inside a string.  */
	switch (*p)
	  {
#ifndef atarist
	  case '\\':
	    if (p[1] && p[1] != '\n')
	      /* Copy and skip the following char.  */
	      *ap++ = *++p;
	    break;
#endif

	  case '\'':
	    instring = 1;
	    break;

	  case ';':
	  case '"':
	  case '*':
	  case '?':
	  case '[':
	  case ']':
	  case '$':
	  case '<':
	  case '>':
	  case '|':
	  case '&':
	  case '=':
	  case '~':
	  case '`':
	  case '(':
	  case ')':
	  case '{':
	  case '}':
	    goto slow;

	  case '\n':
	  case ' ':
	  case '\t':
	    /* We have the end of an argument.
	       Terminate the text of the argument.  */
	    *ap++ = '\0';
	    new_argv[++i] = ap;
	    /* If this argument is the command name,
	       see if it is a built-in shell command.
	       If so, have the shell handle it.  */
	    if (i == 1)
	      {
		register int j;
		for (j = 0; sh_cmds[j] != 0; ++j)
		  if (streq (sh_cmds[j], new_argv[0]))
		    goto slow;
	      }
	    /* Ignore multiple whitespace.  */
	    while (*p == ' ' || *p == '\t')
	      ++p;
	    /* Next iteration should examine the first nonwhite char.  */
	    --p;
	    break;

	  case '#':
	    /* # starts a comment, at beginning of word.  */
	    if (p == line || p[-1] == ' ' || p[-1] == '\t')
	      goto endloop;

	    /* Drops in */
	  default:
	    *ap++ = *p;
	    break;
	  }
    }

 endloop:

  /* Terminate the last argument and the argument list.  */

  *ap = '\0';
  if (new_argv[i][0] != '\0')
    ++i;
  new_argv[i] = 0;

  if (new_argv[0] == 0)
    /* Line was empty */
    return 0;

  line = new_argv[0];
  
  if (0)
    {
    slow:;
#ifndef atarist
      new_argv = (char **) alloca (4 * sizeof (char *));
      ap = rindex (shell_macro->value, '/');
      new_argv[0] = ap == 0 ? shell_macro->value : ap + 1;
      new_argv[1] = "-c";
      new_argv[2] = line;
      new_argv[3] = 0;
      line = shell_macro->value;
#else
/* gulam has bugs such that it sometimes loses horribly to ask it to
   execute commands.  Unfortunately, there's no help for it, until such
   time as gulam gets fixed (at which time we can just drop the whole
   thing and always use gulam) or I fix the startup code to deal with
   handling its own redirections, in which case we never need use gulam. */
	{
	int result;
/*	fprintf(stderr, "gulam('%s')", line); */
	result = gulam(line);
/*	fprintf(stderr, "->%d\n");	*/
/* Sigh.  Unfortunately, gulam also returns gubbish sometimes.  
   Why is this so hard??? */
	if (result > 1000)		/* ... a nice arbitrary value */
		result = 0;
	return(result);
	}
#endif
    }
  
  /* Run the command.  */

#ifndef atarist

  pid = vfork ();
  if (pid == 0)
    {
      execvp (line, new_argv);
      perror_with_name ("execvp: ", line);
      _exit (127);
    }

  if (pid < 0)
    return (127);

  /* Wait for termination and report the results.  */

  while (1)
    {
      int wpid;
      wpid = wait (&status);
      if (wpid < 0)
	return (127);
      else if (wpid != pid)
	continue;
      else if (WIFEXITED (status))
	return (status.w_retcode);
      else if (WIFSIGNALED (status))
	{
	  int s;
	  struct stat st;

	  /* Delete the output file that the command was supposed to make.  */

	  if (signal_delete_file
	      && stat (signal_delete_file, &st) >= 0
	      && (st.st_mode & S_IFMT) != S_IFDIR
	      && st.st_mtime != signal_delete_mtime)
	    {
	      fprintf (stderr, "\n%s: Deleting file %s\n",
		       program, signal_delete_file);
	      fflush (stderr);
	      if (unlink (signal_delete_file) < 0)
		perror_with_name ("unlink: ", signal_delete_file);
	    }

	  /* Treat this as failure.  */

	  s = status.w_termsig | SIGNAL_STATUS;
	  if (status.w_coredump)
	    s |= SIGNAL_COREDUMP;
	  return s;
	}
    }

#else
/* atari code here... */
  {
    return(gspawnv(line, new_argv));
  }
#endif

}

/* New_environ () sets environ with a new environment for child
   processes.  The storage is freed at the next call to this routine.
   The child's MAKELEVEL variable is incremented.  */

static void
new_environ ()
{
  extern char **environ;
  register int macro_count, i, mcnt;
  register struct macro *m;

  static int free_env = 0;

  if (free_env)
    {
      for (i = 0; environ[i] != 0; ++i)
	free (environ[i]);
      free ((char *) environ);
    }

#define	identifier_char(c) \
  (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z') \
   || ((c) >= '0' && (c) <= '9') || (c) == '_')

  macro_count = 0;
  for (i = 0; i < MACRO_BUCKETS; ++i)
    for (m = macros[i]; m != 0; m = m->next)
      {
	register char *p;
	for (p = m->name; *p; ++p)
	  if (!identifier_char (*p))
	    break;
	if (*p == 0)
	  ++macro_count;
      }

  environ = (char **) xmalloc ((macro_count + 2) * sizeof (char *));

  mcnt = 0;
  for (i = 0; i < MACRO_BUCKETS; ++i)
    for (m = macros[i]; m != 0; m = m->next)
      {
	register char *p;

	for (p = m->name; *p; ++p)
	  if (!identifier_char (*p))
	    break;
	if (*p == '\0')
	  {
	    /* 663 mod MACRO_BUCKETS is "MAKELEVEL"s hash bucket number.  */
	    if (i != (663 % MACRO_BUCKETS) || strcmp ("MAKELEVEL", m->name))
	      {
		environ[mcnt] = xmalloc (strlen (m->name)
					 + strlen (m->value) + 2);
		sprintf (environ[mcnt], "%s=%s", m->name, m->value);
	      }
	    ++mcnt;
	  }
      }

  environ[mcnt] = xmalloc (50);
  sprintf (environ[mcnt], "MAKELEVEL=%d", makelevel + 1);

  environ[mcnt + 1] = 0;

  free_env = 1;

  return;
}

/* Print N spaces.  */

static void
print_spaces (n)
     register int n;
{
  while (n-- > 0)
    putchar (' ');
}

/* Return the mtime of a file, given a struct file.
   Caches the time in the struct file to avoid excess stat calls.
   If the file is not found, VPATH searching and replacement
   is done.  If that fails, a library (-lLIBNAME) is tried but
   the library's actual name (/lib/libLIBNAME.a, etc.) is not
   substituted in.  */

static long
f_mtime (file)
     register struct file *file;
{
  register long mtime;

  if (file->last_mtime != 0L)
    return (file->last_mtime);

  /* File's mtime is not known; must get it now from system.  */

  mtime = name_mtime (file->name);

  if (mtime == -1L)
    {
      /* If the stat failed, search VPATH.  */
      if (vpath_search (&(file->name), (char *) 0, 0))
	mtime = name_mtime (file->name);
      else
	/* Last resort, is it a library (-lxxx)?  */
	if (file->name[0] == '-' && file->name[1] == 'l')
	  mtime = library_file_mtime (&file->name[2]);
    }

  /* Store the mtime into all the entries for this file.  */

  while (file)
    {
      file->last_mtime = mtime;
      file = file->prev;
    }
  return (mtime);
}

static long
name_mtime (name)
     register char *name;
{
  struct stat st;

  if (ar_name (name))
    return (ar_member_date (name));

  if (stat (name, &st) < 0)
    return (-1L);
  return (st.st_mtime);
}

/* Read the directory named DIRNAME and enter all of its files
   in the dir_hash_table.

   Once a directory's files have been entered,
   `dir_file_exists_p' may be used to check the existence
   of any file in that directory.  */

static void
dir_load (dirname)
     char *dirname;
{
  register DIR *reading;
  register struct direct *next;
  int dirhash;
  register char *ptr;

  /* Copy dirname so we can make the hash table entries
     point at something that will never be freed.  */
  dirname = savestring (dirname, strlen (dirname));

  /* Compute hash code of the dir name.
     This is the starting point for hashing each file name.  */

  dirhash = 0;
  ptr = dirname;
  while (*ptr)
    {
#ifdef case_insensitive
      dirhash += char_upcase(*ptr++);
#else
      dirhash += *ptr++;
#endif
      dirhash = (dirhash << 7) + (dirhash >> 20);
    }

  /* Make a hash table entry for this dir name and no filename,
     to indicate that `dir_load' has been called for this dir.  */
  {
    register int hash;
    register struct dirdata *new;

    /* Compute hash code of this dir name.  */
    hash = dirhash;
    hash &= 0xffffff;
    hash %= DIR_HASH_SIZE;

    /* Add an entry to the hash table.  */

    new = (struct dirdata *) xmalloc (sizeof (struct dirdata));
    new->next = dir_hash_table[hash];
    dir_hash_table[hash] = new;
    new->dir = dirname;
    new->name = "";
    new->impossible = 0;
  }

  /* Open the directory and check for errors.  */
#ifdef atarist
  {
    char buf[80];

    dir_unalias(dirname, buf);
    reading = opendir(buf);
  }
#else
  reading = opendir (dirname);
#endif
  if (reading == 0)
    return;

  /* Read the directory entries, and insert the subfiles
     into the `files' table.  */

  while (next = readdir (reading))
    {
      register int hash;
      register struct dirdata *new;

#ifdef atarist
	string_downcase (next->d_name);
#endif
      /* Compute hash code of this file name and dir name.  */
      hash = dirhash;
      ptr = next->d_name;
      while (*ptr)
	{
#ifdef case_insensitive
	  hash += char_upcase(*ptr++);
#else
	  hash += *ptr++;
#endif
	  hash = (hash << 7) + (hash >> 20);
	}

      hash &= 0xffffff;
      hash %= DIR_HASH_SIZE;

      /* Add an entry to the hash table.  */

      new = (struct dirdata *) xmalloc (sizeof (struct dirdata));
      new->next = dir_hash_table[hash];
      dir_hash_table[hash] = new;
      new->dir = dirname;
      new->name = savestring (next->d_name, strlen (next->d_name));
      new->impossible = 0;
    }

  closedir (reading);
}

/* Return 1 if the file named NAME exists.
   This could work simply by using `access' or
   by calling `name_mtime', but those ways are too slow.
   Instead, the first inquiry about any particular directory
   records the entire contents of that directory in `dir_hash_table'
   and all inquiries work by checking the table.  */

static int
file_exists_p (name)
     register char *name;
{
  char *dirend;
  char *dirname;

  if (ar_name (name))
    return (ar_member_date (name) > 0);

#ifdef atarist
  dirend = (char *) rindex (name, '\\');
#else
  dirend = (char *) rindex (name, '/');
#endif
  if (dirend == 0)
    return dir_file_exists_p (".", name);

  dirname = (char *) alloca (dirend - name + 1);
  bcopy (name, dirname, dirend - name);
  dirname[dirend - name] = '\0';
  if (!dir_file_exists_p (dirname, ""))
    dir_load (dirname);
  return dir_file_exists_p (dirname, dirend + 1);
}

char *dir_name ();

/* Marks FILENAME as `impossible' for `file_impossible_p'.
   This means an attempt has been made to search for FILENAME
   as an intermediate file, and it has failed.  */

static void
file_impossible (filename)
     char *filename;
{
  register char *name = filename;
  register int hash = 0;
  char *dirend;
  register struct dirdata *new;

#ifdef atarist
  dirend = (char *) rindex (name, '\\');
#else
  dirend = (char *) rindex (name, '/');
#endif

  while (dirend ? name < dirend : *name)
    {
#ifdef case_insensitive
      hash += char_upcase(*name++);
#else
      hash += *name++;
#endif
      hash = (hash << 7) + (hash >> 20);
    }

  if (dirend != 0)
    for (name = ++dirend; *name; ++name)
      {
#ifdef case_insensitive
	hash += char_upcase(*name);
#else
	hash += *name;
#endif
	hash = (hash << 7) + (hash >> 20);
      }

  hash &= 0xffffff;
  hash %= DIR_HASH_SIZE;

  new = (struct dirdata *) xmalloc (sizeof (struct dirdata));
  if (dirend != 0)
    {
      --dirend;
      *dirend = '\0';
      new->dir = dir_name (filename);
#ifdef atarist
      *dirend = '\\';
#else
      *dirend = '/';
#endif
      ++dirend;
      new->name = savestring (dirend, strlen (dirend));
    }
  else
    {
      new->dir = dir_name (".");
      new->name = savestring (filename, strlen (filename));
    }
  new->impossible = 1;

  /* Now put this entry in the table.  */

  new->next = dir_hash_table[hash];
  dir_hash_table[hash] = new;
}

/* Returns 1 if FILENAME has been marked impossible.  */

static int
file_impossible_p (filename)
     char *filename;
{
  register char *name = filename;
  register int hash = 0;
  char *dirend;
  register struct dirdata *next;

#ifdef atarist
  dirend = (char *) rindex (name, '\\');
#else
  dirend = (char *) rindex (name, '/');
#endif

  while (dirend ? name < dirend : *name)
    {
#ifdef case_insensitive
      hash += char_upcase(*name++);
#else
      hash += *name++;
#endif
      hash = (hash << 7) + (hash >> 20);
    }

  if (dirend != 0)
    for (name = ++dirend; *name; ++name)
      {
#ifdef case_insensitive
	hash += char_upcase(*name);
#else
	hash += *name;
#endif
	hash = (hash << 7) + (hash >> 20);
      }

  hash &= 0xffffff;
  hash %= DIR_HASH_SIZE;

  for (next = dir_hash_table[hash]; next != 0; next = next->next)
    if (dirend != 0)
      {
	if (streq (next->name, dirend)
	    && !strncmp (next->dir, filename, dirend - filename - 1))
	  return (next->impossible);
      }
    else if (next->dir[0] == '.' && next->dir[1] == '\0'
             && streq (filename, next->name))
      return (next->impossible);

  return (0);
}

/* Return 1 if the name FILENAME in directory DIRNAME
   is entered in the dir hash table.
   FILENAME must contain no slashes.

   If the directory has been loaded and the value is 0,
   then the file did not exist.

   To see if a directory is described by the table,
   call with "." for FILENAME.  */

static int
dir_file_exists_p (dirname, filename)
     register char *dirname;
     register char *filename;
{
  register int hash;
  register char *ptr;
  register struct dirdata *next;

  hash = 0;
  ptr = dirname;
  while (*ptr)
    {
#ifdef case_insensitive
      hash += char_upcase(*ptr++);
#else
      hash += *ptr++;
#endif
      hash = (hash << 7) + (hash >> 20);
    }
  ptr = filename;
  while (*ptr)
    {
#ifdef case_insensitive
      hash += char_upcase(*ptr++);
#else
      hash += *ptr++;
#endif
      hash = (hash << 7) + (hash >> 20);
    }

  hash &= 0xffffff;
  hash %= DIR_HASH_SIZE;

  for (next = dir_hash_table[hash]; next != 0; next = next->next)
    if (streq (next->name, filename) && streq (next->dir, dirname))
      return !next->impossible;
  return 0;
}

/* Return the already allocated name in the directory hash table
   that matches DIR.  The lookup should be fast and never fail
   because this routine is called after a dir_load () or
   dir_file_exists_p () call.  */

static char *
dir_name (dir)
     char *dir;
{
  register int hash;
  register char *ptr;
  register struct dirdata *next;

  hash = 0;
  ptr = dir;
  while (*ptr)
    {
#ifdef case_insensitive
      hash += char_upcase(*ptr++);
#else
      hash += *ptr++;
#endif
      hash = (hash << 7) + (hash >> 20);
    }

  hash &= 0xffffff;
  hash %= DIR_HASH_SIZE;

  for (next = dir_hash_table[hash]; next != 0; next = next->next)
    if (streq (next->dir, dir))
      return (next->dir);

  /* "Things are getting strange.  Perhaps you'd better quit --More--"  */
  fflush (stdout);
  fflush (stderr);
  abort ();
  return (0);
}

int selective_vpath_search ();

/* Reverse the chain of selective VPATH lists so they
   will be searched in the order given in the makefiles
   and construct the list from the VPATH macro.  */

static void
build_vpath_lists ()
{
  register struct vpath *new = 0;
  register struct vpath *old, *nexto;
  register struct macro *m;

  /* Reverse the chain.  */
  for (old = vpaths; old != 0; old = nexto)
    {
      nexto = old->next;
      old->next = new;
      new = old;
    }

  vpaths = new;

  /* If there is a VPATH macro with a nonnull value,
     construct the general VPATH list from it.  */
  m = lookup_macro ("VPATH", 5);
  if (m != 0 && *m->value != '\0')
    {
      general_vpath = construct_vpath_list ("%", m->value);
      /* It was just put into the linked list,
	 but we don't want it there, so we must remove it.  */
      if (general_vpath)
        vpaths = general_vpath->next;
    }
}


/* Construct the VPATH listing for the pattern and searchpath given.

   This function is called to generate selective VPATH lists and also for
   the general VPATH list (which is in fact just a selective VPATH that
   is applied to everything).  The returned pointer is either put in the
   linked list of all selective VPATH lists or in the GENERAL_VPATH
   variable.

   If SEARCHPATH is nil, remove all previous listings with the same
   pattern.  If PATTERN is nil, remove all VPATH listings.
   Existing and readable directories that are not "." given in the
   searchpath separated by colons are loaded into the directory hash
   table if they are not there already and put in the VPATH searchpath
   for the given pattern with trailing slashes stripped off if present
   (and if the directory is not the root, "/").
   The length of the longest entry in the list is put in the structure as well.
   The address of an malloc'd structure containing the result is returned.  */

static struct vpath *
construct_vpath_list (pattern, dirpath)
     char *pattern, *dirpath;
{
  register int elem;
  register char *p;
  register char **vpath;
  register int maxvpath;
  int maxelem;


  if (dirpath == 0)
    {
      /* Remove matching listings.  */
      register struct vpath *path, *lastpath;

      lastpath = vpaths;
      for (path = vpaths; path != 0; lastpath = path, path = path->next)
	if (pattern == 0 || streq (pattern, path->pattern))
	  {
	    /* Remove it from the linked list.  */
	    if (lastpath == vpaths)
	      vpaths = path->next;
	    else
	      lastpath->next = path->next;

	    /* Free its unused storage.  */
	    free ((char *) path->searchpath);
	    free ((char *) path);
	  }
    }

  /* Skip over any initial colons.  */
  p = dirpath;
  while (*p == ':')
    ++p;

  /* Figure out the maximum number of VPATH entries and
     put it in MAXELEM.  We start with 2, one before the
     first colon and one nil, the list terminator and
     increment our estimated number for each colon we find.  */
  maxelem = 2;
  while (*p)
    if (*p++ == ':')
      ++maxelem;

  vpath = (char **) xmalloc (maxelem * sizeof (char *));
  maxvpath = 0;

  elem = 0;
  p = dirpath;
  while (*p)
    {
      char *v;
      int len;

      /* Find the next entry.  */
      while (*p && *p == ':')
	++p;
      if (*p == '\0')
	break;

      /* Find the end of this entry.  */
      v = p;
      while (*p && *p != ':')
	++p;

      len = p - v;
      /* Make sure there's no trailing slash,
	 but still allow "/" as a directory.  */
#ifdef atarist
      if (len > 1 && p[-1] == '\\')
#else
      if (len > 1 && p[-1] == '/')
#endif
	--len;

      if (len == 1 && *v == '.')
	continue;

      v = savestring (v, len);
      if (dir_file_exists_p (v, "."))
	{
	  /* The directory is already in the directory hash table.  */
	  vpath[elem] = dir_name (v);
	  maxvpath = max (maxvpath, len);
	  free (v);
	  ++elem;
	}
      else
	{
	  struct stat st;
	  if (stat (v, &st) < 0 || (st.st_mode & S_IFMT) != S_IFDIR)
	    /* Doesn't exist or isn't a directory.  */
	    free (v);
	  else
	    {
	      /* Exists and is a directory, so put it in the directory
		 hash table and the VPATH list.  */
	      dir_load (v);
	      vpath[elem] = dir_name (v);
	      maxvpath = max (maxvpath, len);
	      free (v);
	      ++elem;
	    }
	}
    }

  if (elem > 0)
    {
      struct vpath *path;
      /* ELEM is now incremented one element past the last
	 entry, to where the nil-pointer terminator goes.
	 Usually this is maxelem - 1.  If not, shrink vpath down.  */
      if (elem < (maxelem - 1))
	vpath = (char **) xrealloc (vpath, (elem + 1) * sizeof (char *));

      /* Put the nil-pointer terminator on the end of the VPATH list.  */
      vpath[elem] = 0;

      /* Construct the vpath structure and put it into the linked list.  */
      path = (struct vpath *) xmalloc (sizeof (struct vpath));
      path->searchpath = vpath;
      path->maxlen = maxvpath;
      path->next = vpaths;
      vpaths = path;

      /* Set up the members.  */
      path->patlen = strlen (pattern);
      path->pattern = savestring (pattern, path->patlen);
      p = index (path->pattern, '%');
      path->patsuffix = p == 0 ? 0 : p + 1;

      return path;
    }
  else
    {
      /* There were no entries, so free whatever space we allocated.  */
      free ((char *) vpath);
      return 0;
    }
}


/* Search the VPATH list whose pattern matches *FILE for a directory
   where the name pointed to by FILE exists.  If it is found, the pointer
   in FILE is set to the newly malloc'd name of the existing file and
   we return 1.  Otherwise we return 0.

   If DIRPREFIX is non-null, it specifies a directory prefix to be
   prepended to the name with VPATH directory and DPLEN
   is the length of this prefix.  */

static int
vpath_search (file, dirprefix, dplen)
     char **file;
     char *dirprefix;
     int dplen;
{
  register struct vpath *v;
  register int flen;

  /* If there are no VPATH entries or FILENAME starts at the root,
     there is nothing we can do.  */

#ifdef atarist
  if (**file == '\\' || (vpaths == 0 && general_vpath == 0))
#else
  if (**file == '/' || (vpaths == 0 && general_vpath == 0))
#endif
    return 0;

  flen = strlen (*file);

  for (v = vpaths; v != 0; v = v->next)
    {
      register int i;

      if (v->patsuffix == 0)
	{
	  if (*v->pattern != **file || !streq (v->pattern, *file))
	    continue;
	  else if (selective_vpath_search (v, file, dirprefix, dplen))
	    return 1;
	  else
	    continue;
	}

      i = (v->patsuffix - v->pattern) - 1;
      if (i > 0 && i <= flen && (**file != *v->pattern
                                 || strncmp (*file + 1, v->pattern + 1, i - 1)))
	continue;

      i = v->patlen - i - 1;
      if (i > 0 && strcmp (v->patsuffix, *file + flen - i))
	continue;

      if (selective_vpath_search (v, file, dirprefix, dplen))
	return 1;
    }

  if (general_vpath != 0)
    return selective_vpath_search (general_vpath, file, dirprefix, dplen);
  else
    return 0;
}


/* Search the given VPATH list for a directory where the name pointed
   to by FILE exists.  If it is found, the pointer in FILE
   is set to the newly malloc'd name of the existing file and we return 1.
   Otherwise we return 0.

   If DIRPREFIX is non-null, it specifies a directory prefix to be
   prepended to the name with VPATH directory and DPLEN
   is the length of this prefix.  */

static int
selective_vpath_search (path, file, dirprefix, dplen)
     struct vpath *path;
     char **file;
     char *dirprefix;
     int dplen;
{
  char *name, *n;
  char *filename;
  register char **vpath = path->searchpath;
  int maxvpath = path->maxlen;
  register int i;
  int flen, vlen;
  int name_dplen;
  int exists;

  flen = strlen (*file);

  /* Split *FILE into a directory prefix and a name-within-directory.
     NAME_DPLEN gets the length of the prefix; FILENAME gets the
     pointer to the name-within-directory and FLEN is its length.  */

#ifdef atarist
  n = rindex (*file, '\\');
#else
  n = rindex (*file, '/');
#endif
  name_dplen = n ? n - *file : 0;
  filename = name_dplen > 0 ? n + 1 : *file;
  if (name_dplen > 0)
    flen -= name_dplen + 1;

  /* Allocate enough space for the directory prefix, the biggest
     VPATH entry, a slash, the directory prefix that came with *FILE,
     another slash (although this one may not always be necessary),
     the filename, and a null terminator.  */
  name = (char *) alloca (dplen + maxvpath + 1 + name_dplen + 1 + flen + 1);

  /* Try each VPATH entry.  */
  for (i = 0; vpath[i] != 0; ++i)
    {
      /* Start with the directory prefix, if any,
	 unless this VPATH element is absolute.  */
#ifdef atarist
      if (*vpath[i] != '\\' && dirprefix != 0)
#else
      if (*vpath[i] != '/' && dirprefix != 0)
#endif
	{
	  bcopy (dirprefix, name, dplen);
	  n = name + dplen;
	}
      else
	n = name;

      /* Put the next VPATH entry into NAME at N and increment N past it.  */
      vlen = strlen (vpath[i]);
      bcopy (vpath[i], n, vlen);
      n += vlen;

      /* Add the directory prefix already in *FILE.  */
      if (name_dplen > 0)
	{
#ifdef atarist
	  *n++ = '\\';
#else
	  *n++ = '/';
#endif
	  bcopy (*file, n, name_dplen);
	  n += name_dplen;
	}

      /* Null-terminate the string.
	 Now NAME is the name of the directory to look in.  */
      *n = '\0';

      /* Make sure the directory exists and we know its contents.  */
      if ((dirprefix != 0 || name_dplen > 0) && !dir_file_exists_p (name, "."))
	{
	  struct stat st;
	  if (stat (name, &st) < 0 || (st.st_mode & S_IFMT) != S_IFDIR)
	    /* Doesn't exist or isn't a directory.  */
	    continue;	/* for I  */
	  else
	    dir_load (name);
	}

      /* We know the directory is in the hash table now because either
         construct_vpath_list or the code just above put it there.
	 Does the file we seek exist in it?  */

      exists = dir_file_exists_p (name, filename);

      /* Now add the name-within-directory at the end of NAME.  */

#ifdef atarist
      if (n != name && n[-1] != '\\')
	*n++ = '\\';
#else
      if (n != name && n[-1] != '/')
	*n++ = '/';
#endif
      bcopy (filename, n, flen + 1);

      /* Is the file mentioned in the makefile?
	 That counts as almost existing.  */

      if (!exists)
	exists = lookup_file (name) != 0;

      if (exists)
	{
	  /* We have found a file.  */
	  /* Store the name we found into *FILE for the caller.  */

	  *file = savestring (name, (n - name) + flen);

	  return 1;
	}
    }

  return 0;
}

/* Return the mtime of a library file specified as -lLIBNAME,
   searching for a suitable library file in the system library directories
   and the VPATH directories.  */

static long
library_file_mtime (lib)
     char *lib;
{
  long mtime;
  char *name;

#ifdef atarist
  if (!dir_file_exists_p ("d:\\gnu\\lib", "."))
    dir_load ("/usr/lib");
  if (!dir_file_exists_p ("d:\\lib", "."))
    dir_load ("/lib");
#else
  if (!dir_file_exists_p ("/usr/lib", "."))
    dir_load ("/usr/lib");
  if (!dir_file_exists_p ("/lib", "."))
    dir_load ("/lib");
#endif

#ifdef atarist
/* this stuff is all fucked anyway... */
  lib = concat ("lib", lib, ".olb");
#else
  lib = concat ("lib", lib, ".a");
#endif
  name = concat ("/usr/lib/", lib, "");
  if (dir_file_exists_p ("/usr/lib", lib))
    mtime = name_mtime (name);
  else if (dir_file_exists_p ("/lib", lib))
    mtime = name_mtime (name + 4);
  else if (vpath_search (&lib, (char *) 0, 0))
    mtime = name_mtime (lib);

  free (lib);
  free (name);

  return (mtime);
}

/* Return a newly-allocated string whose contents concatenate those of s1, s2, s3.  */

static char *
concat (s1, s2, s3)
     char *s1, *s2, *s3;
{
  register int len1, len2, len3;
  register char *result;

  len1 = *s1 ? strlen (s1) : 0;
  len2 = *s2 ? strlen (s2) : 0;
  len3 = *s3 ? strlen (s3) : 0;

  result = xmalloc (len1 + len2 + len3 + 1);

  if (*s1)
    bcopy (s1, result, len1);
  if (*s2)
    bcopy (s2, result + len1, len2);
  if (*s3)
    bcopy (s3, result + len1 + len2, len3);
  *(result + len1 + len2 + len3) = '\0';

  return (result);
}

/* Print error message and exit.  */

/* VARARGS1 */
static void
fatal (s1, s2, s3, s4, s5)
     char *s1, *s2, *s3, *s4, *s5;
{
  fprintf (stderr, "%s: ", program);
  fprintf (stderr, s1, s2, s3, s4, s5);
  fputs (".  Stop.\n", stderr);

  if (print_directory_flag)
    log_working_directory (0);

  exit (1);
}

/* Print error message.  `s1' is printf control string, `s2' is arg for it. */

/* VARARGS1 */

static void
error (s1, s2)
     char *s1, *s2;
{
  fprintf (stderr, "%s: ", program);
  fprintf (stderr, s1, s2);
  putc ('\n', stderr);
  fflush (stderr);
}

static void
perror_with_name (str, name)
     char *str, *name;
{
  extern int errno, sys_nerr;
  extern char *sys_errlist[];

  fprintf (stderr, "%s: %s%s: ", program, str, name);
#ifdef atarist
  if ((errno > sys_nerr) && (errno <= 0))
#else
  if (errno < sys_nerr)
#endif
    fprintf (stderr, "%s\n", sys_errlist[errno]);
  else
    fprintf (stderr, "Unknown error %d\n", errno);
  fflush (stderr);
}

static void
pfatal_with_name (name)
     char *name;
{
  extern int errno, sys_nerr;
  extern char *sys_errlist[];

#ifdef atarist
  if ((errno > sys_nerr) && (errno <= 0))
#else
  if (errno < sys_nerr)
#endif
    fprintf (stderr, "%s: %s: %s\n", program, name, sys_errlist[errno]);
  else
    fprintf (stderr, "%s: %s: Unknown error %d\n", program, name, errno);

  exit (1);
}


/* Like malloc but get fatal error if memory is exhausted.  */
extern char *malloc (), *realloc ();

static char *
xmalloc (size)
     unsigned size;
{
  char *result = malloc (size);
  if (result == 0)
    fatal ("virtual memory exhausted");
  return (result);
}


static char *
xrealloc (ptr, size)
     char *ptr;
     unsigned size;
{
  char *result = realloc (ptr, size);
  if (result == 0)
    fatal ("virtual memory exhausted");
  return (result);
}

static char *
savestring (string, length)
     char *string;
     int length;
{
  register char *out = (char *) xmalloc ((unsigned) length + 1);
  if (length > 0) bcopy (string, out, length);
  out[length] = '\0';
  return (out);
}

/* Search string BIG (length BLEN) for an occurrence of
   string SMALL (length SLEN).  Return a pointer to the
   beginning of the first occurrence, or return nil if none found.  */

static char *
sindex (big, blen, small, slen)
     char *big, *small;
     int blen, slen;
{
  register int b;

  if (blen < 1)
    blen = strlen (big);
  if (slen < 1)
    slen = strlen (small);

  for (b = 0; b < blen; ++b)
    if (big[b] == *small && !strncmp (&big[b + 1], small + 1, slen - 1))
      return (&big[b]);

  return (0);
}

/* Limited INDEX:
   Search through the string STRING, which ends at LIMIT, for the character C.
   Returns a pointer to the first occurrence, or nil if none is found.
   Like INDEX except that the string searched ends where specified
   instead of at the first null.  */

static char *
lindex (string, limit, c)
     register char *string, *limit;
     char c;
{
  while (string != limit)
    if (*string++ == c)
      return string - 1;

  return 0;
}

/* Convert old-style suffix rules to pattern rules.
   All rules for the suffixes on the .SUFFIXES list
   are converted and added to the chain of pattern rules.  */

static void
convert_to_pattern ()
{
  register struct dep *d, *d2, *newd;
  register struct file *f;
  register struct rule *r;
  register char *rulename = (char *) alloca (maxsuffix * 2 + 1);
  register int slen, s2len;

  for (d = suffix_file->deps; d != 0; d = d->next)
    {
      slen = strlen (dep_name (d));
      r = (struct rule *) xmalloc (sizeof (struct rule));
      r->name = savestring ("%", 1 + slen);
      r->patsuffix = r->name + 1;
      bcopy (dep_name (d), r->patsuffix, slen + 1);
      r->namelen = strlen (r->name);
      r->deps = 0;
      r->cmds = 0;
      f = d->file;
      new_pattern_rule (r, 0);
      if (f->cmds && f->deps == 0)
	{
	  for (r = pattern_rules; r != 0; r = r->next)
	    if (r->name[1] == '\0' && r->deps != 0 && r->deps->next == 0
		&& r->deps->name[0] == '%'
		&& streq (r->deps->name + 1, dep_name (d)))
	      break;
	  if (r == 0)
	    {
	      /* Record a pattern for this suffix's null-suffix rule.  */
	      r = (struct rule *) xmalloc (sizeof (struct rule));
	      r->cmds = f->cmds;
	      r->recursive = f->recursive;
	      r->name = savestring ("%", 1);
	      r->namelen = 1;
	      r->patsuffix = r->name + 1;
	      r->terminal = 0;
	      newd = (struct dep *) xmalloc (sizeof (struct dep));
	      newd->name = savestring ("%", 1 + slen);
	      bcopy (dep_name (d), newd->name + 1, slen + 1);
	      newd->next = f->deps;
	      r->deps = newd;
	      /* Install this rule.  */
	      new_pattern_rule (r, 0);
	    }
	}

      bcopy (dep_name (d), rulename, slen);
      /* Record a pattern for each of this suffix's
	 two-suffix rules.  */
      for (d2 = suffix_file->deps; d2; d2 = d2->next)
	{
	  if (streq (dep_name (d), dep_name (d2)))
	    continue;

	  s2len = strlen (dep_name (d2));
	  bcopy (dep_name (d2), rulename + slen, s2len + 1);
	  f = lookup_file (rulename);
	  if (f == 0 || f->deps != 0)
	    continue;

	  for (r = pattern_rules; r != 0; r = r->next)
	    if (r->deps && r->deps->next == 0
	        && r->name[0] == '%' && streq (r->name + 1, dep_name (d2))
	        && r->deps->name[0] == '%'
		&& streq (r->deps->name + 1, dep_name (d)))
              break;
	  if (r != 0)
	    continue;

	  r = (struct rule *) xmalloc (sizeof (struct rule));
	  r->cmds = f->cmds;
	  r->recursive = f->recursive;
	  newd = (struct dep *) xmalloc (sizeof (struct dep));
#ifdef atarist
	  if (s2len == 4 && !strcmp (dep_name (d2), ".olb"))
#else
	  if (s2len == 2 && !strcmp (dep_name (d2), ".a"))
#endif
	    {
	      /* A suffix rule `.X.a:' is converted into
	         the pattern rule `(%.o): %.X'.  */
	      r->namelen = 4;
	      r->name = savestring ("(%.o)", 4);
	      r->patsuffix = r->name + 2;
	      newd->name = savestring ("%", 1 + s2len);
	      bcopy (dep_name (d2), newd->name, s2len + 1);
	    }
	  else
	    {
	      r->namelen = 1 + s2len;
	      r->name = savestring ("%", 1 + s2len);
	      r->patsuffix = r->name + 1;
	      bcopy (dep_name (d2), r->patsuffix, s2len + 1);
	      newd->name = savestring ("%", 1 + slen);
	      bcopy (dep_name (d), newd->name + 1, slen + 1);
	    }
	  newd->next = f->deps;
	  r->deps = newd;
	  new_pattern_rule (r, 0);
	}
    }
}

/* Install the pattern rule RULE (whose fields have been filled in)
   at the end of the list (so that any rules previously defined
   will take precedence).  If this rule duplicates a previous one
   (identical target and dependents), the old one is replaced
   if OVERRIDE is nonzero, otherwise this new one is thrown out.
   When an old rule is replaced, the new one is put at the end of the
   list.  */

static void
new_pattern_rule (rule, override)
     register struct rule *rule;
     int override;
{
  register struct rule *r, *lastrule;

  rule->subdir = 0;
  rule->in_use = 0;
  rule->recursive = 0;
  rule->terminal = 0;

  rule->next = 0;

  /* Search for an identical rule.  */
  lastrule = pattern_rules;
  for (r = pattern_rules; r != 0; lastrule = r, r = r->next)
    if (streq (rule->name, r->name))
      {
	register struct dep *d, *d2;
	for (d = rule->deps, d2 = r->deps; d && d2; d = d->next, d2 = d2->next)
	  if (!streq (dep_name (d), dep_name (d2)))
	    break;
	if (d == 0 && d2 == 0)
	  {
	    /* All the dependents matched.  */
	    if (override)
	      {
		/* Remove the old rule.  */
		if (lastrule == pattern_rules)
		  pattern_rules = r->next;
		else
		  lastrule->next = r->next;
		/* Install the new one.  */
		if (pattern_rules == 0)
		  pattern_rules = rule;
		else
		  last_pattern_rule->next = rule;
		last_pattern_rule = rule;
	      }
	    else
	      /* The old rule stays intact.  Destroy the new one.  */
	      r = rule;

	    /* Free all the storage allocated for the rule being
	       destroyed that will not be used elsewhere.  */
	    free (r->name);
	    if (r->deps)
	      free ((char *) r->deps);
	    if (r->cmds)
	      {
		free (r->cmds->commands);
		free ((char *) r->cmds);
	      }
	    break;
	  }
      }

  if (r == 0)
    {
      /* There was no rule to replace.  */
      if (pattern_rules == 0)
	pattern_rules = rule;
      else
	last_pattern_rule->next = rule;
      last_pattern_rule = rule;
    }
}

/* Install an implicit pattern rule based on the three text strings
   in the structure P points to.  These strings come from one of
   the arrays on the preceding page.
   TERMINAL specifies what the `terminal' field of the rule should be.  */

static void
install_pattern_rule (p, terminal)
     struct pspec *p;
     int terminal;
{
  struct rule *r;
  char *ptr;
  int cmdlen;

  r = (struct rule *) xmalloc (sizeof (struct rule));
  r->namelen = strlen (p->target);
  /* These will all be string literals, but we malloc space for them
     anyway because somebody might want to free them later.  */
  r->name = savestring (p->target, r->namelen);
  r->patsuffix = index (r->name, '%') + 1;

  r->terminal = terminal;
  ptr = p->dep;
  r->deps = (struct dep *) multi_glob (parse_file_seq (&ptr, '\0',
                                                       sizeof (struct dep)),
				       sizeof (struct dep));
  r->cmds = (struct commands *) xmalloc (sizeof (struct commands));
  r->cmds->filename = 0;
  r->cmds->lineno = 0;
  cmdlen = strlen (p->commands);
  /* These will all be string literals, but we malloc space for them
     anyway because somebody might want to free them later.  */
  r->cmds->commands = savestring (p->commands, cmdlen);
  r->recursive = sindex (p->commands, cmdlen, "$(MAKE)", 7)
                 || sindex (p->commands, cmdlen, "${MAKE}", 7);

  new_pattern_rule (r, 0);
}

/* Construct the list of include directories from the
   arguments and the default list.  */

static void
construct_include_path (argc, argv)
     int argc;
     char **argv;
{
  register int i;
  struct stat stbuf;

  /* Table to hold the dirs, long enough for the worst case
     plus a null pointer at the end.  */

  register char **dirs
    = (char **) xmalloc ((argc
			  + (sizeof (default_include_directories)
			     / sizeof (char *)) - 1)
			 * sizeof (char *));
  /* Number of elements in DIRS currently in use.  */
  register int count = 0;

  include_directories = dirs;

  /* First consider any dirs specified with -I switches.
     Ignore dirs that don't exist.  */

  for (i = 0; i < argc; ++i)
    if (!strcmp (argv[i], "-I"))
      {
	++i;
	if (argv[i] == 0)
	  fatal ("no directory given after -I switch");
	if (stat (argv[i], &stbuf) == 0
	    && (stbuf.st_mode & S_IFMT) == S_IFDIR)
	  dirs[count++] = argv[i];
      }
    else if (!strcmp (argv[i], "-f") || !strcmp (argv[i], "-o"))
      ++i;

  /* Now add at the end the standard default dirs.  */

  for (i = 0; default_include_directories[i] != 0; ++i)
    if (stat (default_include_directories[i], &stbuf) == 0
	&& (stbuf.st_mode & S_IFMT) == S_IFDIR)
      dirs[count++] = default_include_directories[i];

  dirs[count] = 0;

  /* Now compute the maximum length of any name in it.  */

  max_incl_len = 0;
  for (i = 0; i < count; ++i)
    {
      int len = strlen (dirs[i]);
      /* If dir name is written with a trailing slash, discard it.  */
#ifdef atarist
      if (dirs[i][len - 1] == '\\')
#else
      if (dirs[i][len - 1] == '/')
#endif
	dirs[i] = savestring (dirs[i], len - 1);
      max_incl_len = max (max_incl_len, len);
    }
}

/* Return the address of the first whitespace or null in the string S.  */

static char *
end_of_token (s)
     char *s;
{
  register char *p = s;
  register int backslash = 0;

  while (*p && (!backslash && (*p != ' ' && *p != '\t')))
    {
      if (*p++ == '\\')
	{
	  backslash = !backslash;
#ifdef atarist
	  while (*p == '\\')
#else
	  while (*p == '/')
#endif
	    {
	      backslash = !backslash;
	      ++p;
	    }
	}
      else
	backslash = 0;
    }

  return p;
}

/* Return the address of the first nonwhitespace or null in the string S.  */

static char *
next_token (s)
     char *s;
{
  register char *p = s;

  while (*p == ' ' || *p == '\t') ++p;
  return p;
}

/* Find the next token in PTR; return the address of it,
   and store the length of the token into *LENGTHPTR.  */

static char *
find_next_token (ptr, lengthptr)
     char **ptr;
     int *lengthptr;
{
  char *p = next_token (*ptr);
  char *end;

  if (*p == '\0')
    return 0;

  *ptr = end = end_of_token (p);
  *lengthptr = end - p;
  return p;
}

/* Scan a string and find the whitespace-separated tokens composing it.
   wstok (S) specifies the string to scan, and returns the address of the
   first token.  wstok (0) gets the next token.  Repeat wstok (0) until
   the tokens are exhausted, which is indicated by a value of zero.

   The token that is returned is made into a null-terminated string
   by storing a zero at the end of it.  The following call to wstok
   restores the original contents of that character.  */

char *wstok_last_token_end;	/* Address of end of last token, now a null */
char wstok_saved_end_char;	/* Previous contents of that char */

static char *
wstok (s)
     char *s;
{
  char *beg;
  int length;

  if (s != 0)
    wstok_last_token_end = s;
  else
    *wstok_last_token_end = wstok_saved_end_char;

  beg = find_next_token (&wstok_last_token_end, &length);
  wstok_saved_end_char = *wstok_last_token_end;
  *wstok_last_token_end = '\0';

  return beg;
}

/* Write a message indicating that we've just entered or
   left (according to ENTERING) the current directory.  */

static void
log_working_directory (entering)
     int entering;
{
  char pwdbuf[MAXPATHLEN];
  char *message = entering ? "Entering" : "Leaving";

  if (getwd (pwdbuf) == 0)
    printf ("%s: %s an unknown directory (getwd: %s)\n",
	    program, message, pwdbuf);
  else
    printf ("%s: %s directory `%s'\n", program, message, pwdbuf);
}

#if 0	/* dummy tags for etags */
fmt (){}
formatting (){}
#endif

/* Emacs C-mode formatting variables:
   Local Variables:
   c-argdecl-indent: 5
   c-auto-newline: t
   c-brace-imaginary-offset: 0
   c-brace-offset: 0
   c-continued-brace-offset: 0
   c-continued-statement-offset: 2
   c-indent-level: 2
   c-label-offset: -2
   End:
 */
