#ifndef _SYS_BYTEORDER_H
#define _SYS_BYTEORDER_H

/* Functions to convert `short' and `long' quantities from host byte order
   to (internet) network byte order (i.e. big-endian).

   Written by Ron Guilmette (rfg@ncd.com).

   This isn't actually used by GCC.  It is installed by fixinc.svr4.

   For big-endian machines these functions are essentially no-ops.

   For little-endian machines, we define the functions using specialized
   asm sequences in cases where doing so yields better code (e.g. i386).  */

#if !defined (__GNUC__) && !defined (__GNUG__)
#error You lose!  This file is only useful with GNU compilers.
#endif

#ifdef __GNUC__
#define __STATIC static
#else
#define __STATIC
#endif

#ifdef __STDC__
__STATIC __inline__ unsigned long htonl (unsigned long);
__STATIC __inline__ unsigned short htons (unsigned int);
__STATIC __inline__ unsigned long ntohl (unsigned long);
__STATIC __inline__ unsigned short ntohs (unsigned int);
#endif /* defined (__STDC__) */

#if defined (__i386__)

/* Convert a host long to a network long.  */

__STATIC __inline__ unsigned long
htonl (__arg)
     unsigned long __arg;
{
  register unsigned long __result __asm__ ("%eax");

  __result = __arg;
  __asm__ ("xchgb	%%ah, %%al\n\
	rorl	$16, %%eax\n\
	xchgb	%%ah, %%al\n\
	clc" : "=r" (__result) : "0" (__result));
  return __result;
}

/* Convert a host short to a network short.  */

__STATIC __inline__ unsigned short
htons (__arg)
     unsigned int __arg;
{
  register unsigned short __result __asm__ ("%eax");

  __result = __arg;
  __asm__ ("xchgb	%%ah, %%al\n\
	clc" : "=r" (__result) : "0" (__result));
  return __result;
}

#elif defined (__i860__) || defined (__ns32k__) || defined (__vax__) || defined (__spur__) || defined (__arm__)

/* For other little-endian machines, using C code is just as efficient as
   using assembly code.  */

/* Convert a host long to a network long.  */

__STATIC __inline__ unsigned long
htonl (__arg)
     unsigned long __arg;
{
  register unsigned long __result;

  __result = (__arg >> 24) & 0x000000ff;
  __result |= (__arg >> 8) & 0x0000ff00;
  __result |= (__arg << 8) & 0x00ff0000;
  __result |= (__arg << 24) & 0xff000000;
  return __result;
}

/* Convert a host short to a network short.  */

__STATIC __inline__ unsigned short
htons (__arg)
     unsigned short __arg;
{
  register unsigned short __result;

  __result = (__arg << 8) & 0xff00;
  __result |= (__arg >> 8) & 0x00ff;
  return __result;
}

#else /* must be a big-endian machine */

/* Convert a host long to a network long.  */

__STATIC __inline__ unsigned long
htonl (__arg)
     unsigned long __arg;
{
  return __arg;
}

/* Convert a host short to a network short.  */

__STATIC __inline__ unsigned short
htons (__arg)
     unsigned short __arg;
{
  return __arg;
}

#endif /* big-endian */

/* Convert a network long to a host long.  */

__STATIC __inline__ unsigned long
ntohl (__arg)
     unsigned long __arg;
{
  return htonl (__arg);
}

/* Convert a network short to a host short.  */

__STATIC __inline__ unsigned short
ntohs (__arg)
     unsigned int __arg;
{
  return htons (__arg);
}


#undef __STATIC

#endif /* !defined (_SYS_BYTEORDER_H) */