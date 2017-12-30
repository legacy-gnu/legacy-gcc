#ifndef _STDDEF_H
#define _STDDEF_H

/* Signed type of difference of two pointers.  */

typedef long ptrdiff_t;

/* Unsigned type of `sizeof' something.  */

#if (!(defined(CROSSATARI)  || defined(atarist)))
typedef unsigned long size_t;
#endif

/* A null pointer constant.  */

#ifdef NULL
#undef NULL
#define NULL ((void *)0)
#endif

/* Offset of member MEMBER in a struct of type TYPE.  */

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

#endif /* _STDDEF_H */
