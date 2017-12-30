
/* misc cruft; move to lib later */

#include <ctype.h>
#include <stdio.h>
#include <osbind.h>

long _stksize = 8192;

extern char ** environ;

long * drf_addr;	/* mondo disgusto... */

int gulam();

puts(str)
char * str;
{
  fputs(str, stdout);
  if (str[strlen(str) - 1] != '\n')
	fputs("\n", stdout);
}

int ftruncate(fhandle, len)
int fhandle, len;
{
  /* no op for now... */
  return(0);
}

char * sys_siglist[] = 
	{
	"sig 0",
	"sig 1",
	"sig 2",
	"sig 3"
	};

int chdir(dir)
char * dir;
{
  return(0);
}

/* only used by touch... */
int fstat(foo, bar)
int foo, bar;
{
  return(0);
}

char * xlate_cmd(cmd)
/* (declare (values xlated_command)) */
char * cmd;
{
  char * result;

/*  printf("xlate('%s')->", cmd); */
  result = (char * )getenv(cmd);
/*
  if (result)
	printf("'%s'\n", result);
    else
	printf("NIL\n");
*/
  return(result);
}

gspawnv(cmd, args)
char * cmd;
char ** args;
{
  int result;
  char * xcmd;
  char * line;
  char ** foo;

  line = (char * )alloca(258);
  line[0] = '\0';
/*
  fprintf(stderr, "\n  exec '%s'", cmd);
  for (foo = args ; *foo ; foo++)
	fprintf(stderr, " '%s'", *foo);
  fprintf(stderr, "\n");
*/
  if (xcmd = xlate_cmd(cmd))
	{
	line[1] = '\0';
	if (args && *args)
		{
		args++;
		while (*args)
			{
			strcat(line + 1, *args);
			strcat(line + 1, " ");
			args++;
			}
		}
	line[0] = strlen(line+1);
/*	return(spawnv(line, args)); */
/*	printf("argstring '%s' len %d\n", line+1, line[0]); */
	result = Pexec(PE_LOADGO, xcmd, line, 0L);
/*	printf(" --> %d\n", result); */
	return(result);
	}

  strcat(line, cmd);
  if (args) args++;
  for ( ; *args ; args++)
	{
/*	fputs(" '", stderr); */
	strcat(line, " ");
/*	fputs(*args, stderr); */
	strcat(line, *args);
/*	fputs("'", stderr); */
	}
/*  fprintf(stderr, "\n"); */
  result = gulam(line);
  return(result);
}

char char_upcase(c)
char c;
{
  return(islower(c) ? toupper(c) : c);
}

/* like strcmp, but case-insensitive */

int ci_strcmp(s1, s2)
char	* s1;
char	* s2;
{
  char ch1, ch2;

  if (!s1 && s2) return(-1);
  if (!s2 && s1) return(1);
  if (!s1 && !s2) return(0);

/*  printf("  ci-strcmp('%s', '%s')->", s1, s2); */

  while (char_upcase(*s1) == char_upcase(*s2++))
	if (!*s1++)
		{
/*		printf("0\n");		*/
		return 0;
		}
/*  printf("%d\n", *s1 - *(s2 - 1)); */
  return *s1 - *--s2;
}

string_downcase(str)
char * str;
{
  for ( ; *str ; str++)
	if (isupper(*str))
		*str = tolower(*str);
}

/* for being smart about dirs */
dir_unalias(name, truename)
char * name, * truename;
{
  int len = strlen(name);

  if ((len == 1) && (name[0] == '.'))
	{
	getwd(truename);
	string_downcase(truename);
	}
/* more later... */
    else
	strcpy(truename, name);
}



/*
 * system - execute a command and return status
 */
int system(cmd)
register char *cmd;
{
    char command[128], tail[130];
    register char *p, *save;
    register int n;

    if (gulamp())			/* jrd */
	return(gulam(cmd));		/* jrd */

    /* Break up command into command and command tail */
    for(p = save = command; !isspace(*cmd); *p++ = *cmd++)	/* copy */;
    *p = '\0';

    while(isspace(*cmd)) cmd++;				/* skip blanks */
    if((n = strlen(cmd)) > 128)
    {
        fprintf(stderr,"Command '%s' too long\n",save);
        return -1;
    }

    tail[0] = (char) n;
    strcpy(&tail[1],cmd);

/*    return (int)Pexec(0,command, tail, (char *)NULL); */
    n = (int)Pexec(0,command, tail, (char *)NULL);
    printf("%d\n\n", n);
    return n;
}



/* excerpt from gulam doc...
*Gulam* can be used in four ways.  Two of these four use `TOS'
variable named `_shell_p' (at `0x04f6L').  This (supposedly)
contains a pointer to a routine that takes a string as an argument and
executes it as a shell command.  *Gulam* has slightly extented this.
`*_shell_p', as set by *Gulam*, points the bottom of a (jump)
table, which currently is:

             .long   0x86420135        / our magic number
             jmp     getlineviaue_
     togu_:  jmp     callgulam_

Thus, `*((long *) 0x04f6L)' == address of `togu_'.  Before
invoking either routine, it always is a good idea to check if the magic
number is present.  Let `mp = *((long *) 0x04f6L) - 12L'.  Then,
`*mp' better be `0x86420135'.
*/

/* the magic number really seems to be 0x00420135 -- jrd */

/* to be exec'ed in super mode */
long deref_s()
{
  return(*drf_addr);
}

long deref(addr)
long *addr;
{
  drf_addr = (long * )addr;
/*  return(Supexec(deref_s)); */
/*  asm("moveml #0x3FFC,sp@-"); */
  asm("movel #_deref_s,sp@-");
  asm("movew #38,sp@-");
  asm("trap #14");
  asm("addl #6,sp");
/*  asm("moveml sp@+,#0x3FFC"); */
}

int gulamp()
{
  long vec;

  vec = 0x4F6;		/* Current CLI vector */
  vec = deref(vec);

/* for floppettes...
  foo = 0x19ADC;

  foo = 0x1C26E;
*/

/*   printf("gulamp:     *0x04F6=%lx\n", vec);		*/
  vec -= 10;
  vec = deref(vec);
/*  printf("gulamp:  *0x04F6-10=%lx\n", vec);		*/

  return (vec == 0x00420135);
}

extern long _start;

dump_region(addr)
char * addr;
{
  int i, j;
  char * b;

  printf("%X: %X\n", addr, &_start);
  for (b = addr - 32, i = j = 0; i < 64 ; b++, i++, j++)
	{
	printf(" %02X", (*b & 0xFF));
	if (j == 15)
		{
		printf("\n");
		j = -1;
		}
	}
  printf("\n");
}

int gulam(str)
char *str;
{
  long saveregs[14];
  short (*togu)();
  short result;
  char * temp;
  long save_ssp;

  temp = (char * )alloca(258);
/*  dump_region(str); */
/*  printf("gulam(%s)\n", str); */
  strcpy(temp, str);
/*   togu = deref(0x4F6L); */

  save_ssp = Super(0L);
  togu = *(long *)0x4F6L;
  Super(save_ssp);
/*
  printf("gulam->%X, arg=%X, temp=%X\n", togu, str, temp);
*/
  result = gulam_internal(togu, temp);

/*  dump_region(str); */
  return((int )result);
};

long save_a6, save_sp;

int gulam_internal(fun, str)
short (*fun)();
char * str;
{
  int result;

  asm("moveml #0x3FFC,sp@-");

/*  result = ((*togu)(temp, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)); */
  asm("movel a6,_save_a6");
  asm("movel sp,_save_sp");
  asm("movel a6@(12),sp@-");
  asm("movel a6@(8),a0");
/*  asm(".word 0x4afc"); */
   asm("jsr a0@"); 
  asm("movel _save_a6,a6");
  asm("movel _save_sp,sp");
  asm("extw d0");		/* cuz it returns word */
  asm("movel d0,a6@(-4)");	/* set result */
  asm("moveml sp@+,#0x3FFC");

  return(result);
}


