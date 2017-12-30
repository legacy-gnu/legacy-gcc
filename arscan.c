/* Library function for scanning an archive file.
   Copyright (C) 1987 Free Software Foundation, Inc.

		       NO WARRANTY

  BECAUSE THIS PROGRAM IS LICENSED FREE OF CHARGE, WE PROVIDE ABSOLUTELY
NO WARRANTY, TO THE EXTENT PERMITTED BY APPLICABLE STATE LAW.  EXCEPT
WHEN OTHERWISE STATED IN WRITING, FREE SOFTWARE FOUNDATION, INC,
RICHARD M. STALLMAN AND/OR OTHER PARTIES PROVIDE THIS PROGRAM "AS IS"
WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY
AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE PROGRAM PROVE
DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR
CORRECTION.

 IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW WILL RICHARD M.
STALLMAN, THE FREE SOFTWARE FOUNDATION, INC., AND/OR ANY OTHER PARTY
WHO MAY MODIFY AND REDISTRIBUTE THIS PROGRAM AS PERMITTED BELOW, BE
LIABLE TO YOU FOR DAMAGES, INCLUDING ANY LOST PROFITS, LOST MONIES, OR
OTHER SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE
USE OR INABILITY TO USE (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR
DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY THIRD PARTIES OR
A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS) THIS
PROGRAM, EVEN IF YOU HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH
DAMAGES, OR FOR ANY CLAIM BY ANY OTHER PARTY.

		GENERAL PUBLIC LICENSE TO COPY

  1. You may copy and distribute verbatim copies of this source file
as you receive it, in any medium, provided that you conspicuously
and appropriately publish on each copy a valid copyright notice
"Copyright (C) 1987 Free Software Foundation, Inc.", and include
following the copyright notice a verbatim copy of the above disclaimer
of warranty and of this License.

  2. You may modify your copy or copies of this source file or
any portion of it, and copy and distribute such modifications under
the terms of Paragraph 1 above, provided that you also do the following:

    a) cause the modified files to carry prominent notices stating
    that you changed the files and the date of any change; and

    b) cause the whole of any work that you distribute or publish,
    that in whole or in part contains or is a derivative of this
    program or any part thereof, to be licensed at no charge to all
    third parties on terms identical to those contained in this
    License Agreement (except that you may choose to grant more extensive
    warranty protection to some or all third parties, at your option).

    c) You may charge a distribution fee for the physical act of
    transferring a copy, and you may at your option offer warranty
    protection in exchange for a fee.

Mere aggregation of another unrelated program with this program (or its
derivative) on a volume of a storage or distribution medium does not bring
the other program under the scope of these terms.

  3. You may copy and distribute this program (or a portion or derivative
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

  4. You may not copy, sublicense, distribute or transfer this program
except as expressly provided under this License Agreement.  Any attempt
otherwise to copy, sublicense, distribute or transfer this program is void and
your rights to use the program under this License agreement shall be
automatically terminated.  However, parties who have received computer
software programs from you with this License Agreement will not have
their licenses terminated so long as such parties remain in full compliance.

 In other words, you are welcome to use, share and improve this program.
 You are forbidden to forbid anyone else to use, share and improve
 what you give them.   Help stamp out software-hoarding!  */

#include <ar.h>

#ifdef atarist

#include <file.h>
#include <types.h>
#include <stat.h>

#else

#include <sys/file.h>
#include <sys/types.h>
#include <sys/stat.h>

#endif

/* Takes three arguments ARCHIVE, FUNCTION and ARG.

   Open the archive named ARCHIVE, find its members one by one,
   and for each one call FUNCTION with the following arguments:
     archive file descriptor for reading the data,
     member name,
     member header position in file,
     member data position in file,
     member data size,
     member date,
     member uid,
     member gid,
     member protection mode,
     ARG.

   The descriptor is poised to read the data of the member
   when FUNCTION is called.  It does not matter how much
   data FUNCTION reads.

   If FUNCTION returns nonzero, we immediately return
   what FUNCTION returned.

   Returns -1 if archive does not exist,
   Returns -2 if archive has invalid format.
   Returns 0 if have scanned successfully.  */

int
ar_scan (archive, function, arg)
     char *archive;
     int (*function) ();
     int arg;
{
  register int desc = open (archive, O_RDONLY, 0);
  if (desc < 0)
    {
      return -1;
    }
  {
    char buf[SARMAG];
    register int nread = read (desc, buf, SARMAG);
    if (nread != SARMAG || bcmp (buf, ARMAG, SARMAG))
      {
	close (desc);
	return -2;
      }
  }

  /* Now find the members one by one.  */
  {
    register int member_offset = SARMAG;
    while (1)
      {
	register int nread;
	struct ar_hdr member_header;
	char name [1 + sizeof member_header.ar_name];
	int eltsize;
	int eltmode;
	int fnval;

	if (lseek (desc, member_offset, 0) < 0)
	  {
	    close (desc);
	    return -2;
	  }

	nread = read (desc, &member_header, sizeof (struct ar_hdr));
	if (!nread) break;	/* No data left means end of file; that is ok */

	if (nread != sizeof (member_header)
	    || bcmp (member_header.ar_fmag, ARFMAG, 2))
	  {
	    close (desc);
	    return -2;
	  }
	bcopy (member_header.ar_name, name, sizeof member_header.ar_name);
	{
	  register char *p = name + sizeof member_header.ar_name;
	  while (p > name && *--p == ' ') *p = 0;
	}

	sscanf (member_header.ar_mode, "%o", &eltmode);
	eltsize = atoi (member_header.ar_size);

	fnval =
	  (*function) (desc, name, member_offset,
		       member_offset + sizeof (member_header), eltsize,
		       atoi (member_header.ar_date),
		       atoi (member_header.ar_uid),
		       atoi (member_header.ar_gid),
		       eltmode, arg);

	if (fnval)
	  {
	    close (desc);
	    return fnval;
	  }

	member_offset += sizeof (member_header) + eltsize;
	if (member_offset & 1) member_offset++;
      }
  }

  close (desc);
  return 0;
}

static int
ar_member_pos (desc, name, hdrpos, datapos, size, date, uid, gid, mode, mem)
     int desc;
     char *name;
     int hdrpos, datapos, size, date, uid, gid, mode;
     char *mem;
{
  if (strcmp (name, mem))
    return 0;
  return hdrpos;
}

/* Set date of member MEMNAME in archive ARNAME to current time.
   Returns 0 if successful,
   -1 if file ARNAME does not exist,
   -2 if not a valid archive,
   -3 if other random system call error (including file read-only),
   1 if valid but member MEMNAME does not exist.  */

ar_member_touch (arname, memname)
     char *arname, *memname;
{
  register int pos = ar_scan (arname, ar_member_pos, memname);
  register int fd;
  struct ar_hdr ar_hdr;
  register int i;
  extern int errno;
  struct stat statbuf;

  if (pos < 0)
    return pos;
  if (!pos)
    return 1;

  fd = open (arname, O_RDWR, 0666);
  if (fd < 0)
    return -3;
  /* Read in this member's header */
  if (lseek (fd, pos, 0) < 0)
    goto lose;
  if (sizeof ar_hdr != read (fd, &ar_hdr, sizeof ar_hdr))
    goto lose;
  /* Write back the header, thus touching the archive file.  */
  if (lseek (fd, pos, 0) < 0)
    goto lose;
  if (sizeof ar_hdr != write (fd, &ar_hdr, sizeof ar_hdr))
    goto lose;
  /* The file's mtime is the time we we want.  */
  fstat (fd, &statbuf);
  /* Advance member's time to that time */
  for (i = 0; i < sizeof ar_hdr.ar_date; i++)
    ar_hdr.ar_date[i] = ' ';
  sprintf (ar_hdr.ar_date, "%d", statbuf.st_mtime);
  /* Write back this member's header */
  if (lseek (fd, pos, 0) < 0)
    goto lose;
  if (sizeof ar_hdr != write (fd, &ar_hdr, sizeof ar_hdr))
    goto lose;
  close (fd);
  return 0;

 lose:
  i = errno;
  close (fd);
  errno = i;
  return -3;
}

#ifdef TEST

int
describe_member (desc, name, hdrpos, datapos, size, date, uid, gid, mode)
     int desc;
     char *name;
     int hdrpos, datapos, size, date, uid, gid, mode;
{
  printf ("Member %s: %d bytes at %d (%d).\n", name, size, hdrpos, datapos);
  printf ("  Date %s", ctime (&date));
  printf ("  uid = %d, gid = %d, mode = 0%o.\n", uid, gid, mode);
  return 0;
}

main (argc, argv)
     int argc;
     char **argv;
{
  ar_scan (argv[1], describe_member);
  return 0;
}

#endif TEST
