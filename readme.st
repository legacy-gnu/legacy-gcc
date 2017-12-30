
This archive contains the source for GCC, the Gnu C compiler, as ported
to the Atari ST.

Please read the file COPYING to understand your rights and
responsibilities as a user of GNU software.

This stuff doesn't need to live in any particular place; I put it in
\gnu\gcc\.  This is just sources; the binaries for these programs are
packaged separately, in GCX-1-23.ARC.

Since GCC is a portable compiler, the distribution from FSF contains
many files for machines like NS32000s, Vaxes, etc.  In order to save a
little space in the distribution, I have not included those files
here, as they are of no use on the Atari.  If you want copies of them
let me know, and I'll send you some, or point you at where you can get
them. 

As with all my ports of GNU software, all changes from the original
GNU sources are conditionalized with "#ifdef atarist".  This version
of cpp defines that symbol as a canned def, so it should just work.
There really aren't that many changes needed to run on the ST; mostly
de-Eunuchsifiying the pathname hacking code, and adding facilities to
parameterize the places that various programs will look for things; ie
looking up the env var "GNULIB" instead of looking in /usr/lib/.

I have also left out the .texinfo files of documentation source, as I
don't know of any TeX for the ST.  I have included the "internals-n"
files generated from that source.

Many of the pathnames of the original files were too long to fit into
the primitive ST file system, and have been truncated using the
obvious algorithm.  Unfotunately, some of them would have ended up
conflicting with each other, so I've shortened some of them by hand.
Primary examples are the doc files of compiler internals; they used to
be called "internals-1" etc, they've been shortened to "int-1" etc.

Some pathnames were hopelessly Eunuchs specific; ie parse.tab.c.  That
one I shortened to parsetab.c.

Building the thing:

The MAKEFILE included here works with the GNU make (shipped
separately).  It may work with other makes.  I've included the
original unhacked makefile as MAKEFILE.GNU.

Because of nasty bugs in Gulam, GNU Make will sometimes crash after
executing any command that required asking Gulam to execute; ie
anything that requires redirection or any command make can't decode
for itself.  Building GCC does a log of that, so if your Gulam loses
as badly as mine, you may want to build some stuff by hand first.

Stack sizes:

This version of cc1 is configured for 1/2 meg of stack.  That's a good
number on my 2.5 Meg 520, but will likely lose if you've only got a
meg.  The stack for cpp is set at 1/4 meg, as it likes to stack-cons
buffers for include files.  Gcc doesn't much matter.


I guess that's it.  Good luck.

JRD@Stony-Brook.SCRC.Symbolics.COM.
