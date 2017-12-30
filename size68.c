#include <stdio.h>

/*
 * Header prepended to each Atari ST .prg file
 */
struct aexec {
	 short	a_magic;	/* magic number */
unsigned long	a_text;		/* size of text segment */
unsigned long	a_data;		/* size of initialized data */
unsigned long	a_bss;		/* size of uninitialized data */
unsigned long	a_syms;		/* size of symbol table */
unsigned long	a_AZero1;	/* always zero */
unsigned long	a_AZero2;	/* always zero */
unsigned short	a_isreloc;	/* is reloc info present */
};
#define	CMAGIC	0x601A		/* contiguous text */
#define	ISRELOCINFO	0	/* relocation information is present */
				/*  any other value - no reloc info  */

extern FILE *fopen();

main(argc, argv)
int argc;
char **argv;
{
	while(--argc > 0)
	    showfile(*++argv);
}

showfile(name)
char *name;
{
	register FILE *fp;
	struct aexec h;
	
	if((fp = fopen(name, "r")) == (FILE *)NULL)
	{
		perror(name);
		exit(1);
	}
	if(fread(&h, sizeof(struct aexec), 1, fp) != 1)
	{
		perror(name);
		exit(2);
	}
	fclose(fp);
	
	if(h.a_magic != CMAGIC)
	{
		fprintf(stderr,"Bad Magic #: 0X%x\n", h.a_magic);
		exit(3);
	}
	printf("%s:\n\ttext size\t%ld\n\tdata size\t%ld\n\tbss size\t%ld\
\n\tsymbol size\t%ld\n\tFile %s relocatable\n", name, h.a_text,
	 h.a_data, h.a_bss, h.a_syms, (h.a_isreloc == ISRELOCINFO)? "is":"is not");
}
