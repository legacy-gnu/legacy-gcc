typedef char *va_list;

#if __GNUCC__ > 1

#ifdef _STDARG_H
#define va_start(AP,LASTARG) \
  (__builtin_saveregs(), (AP) = __builtin_next_arg ())
#else
#define va_alist  __builtin_va_alist
/* The ... causes current_function_varargs to be set in cc1.  */
#define va_dcl    int __builtin_va_alist; ...
#define va_start(AP) \
  ((AP) = (va_list *)&__builtin_va_alist + sizeof(int))
#endif /* _STDARG_H */

/* Handle pass by invisible reference and voids left by aligned */
/* doubles. */

#define __va_rounded_size(TYPE)  \
  (((sizeof (TYPE) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))

#define va_arg(AP,TYPE) \
((__va_rounded_size(TYPE) <= 8))				       	\
  ? ((AP) -= __va_rounded_size (TYPE), (__alignof__ (TYPE) > 4 ?	\
					(int)AP &= ~(0x7) : 0),		\
     *(TYPE *)(AP))							\
  : ((AP) -= sizeof (TYPE *), **(TYPE **)(AP))

void va_end (va_list);		/* Defined in libgcc.a */
#define va_end(AP)

#else /* __GNUCC__ > 1 */

/* __builtin_saveregs () tickles a bug in the pa-risc gcc 1.39 port, */
/* so don't use it for varargs. Obviously the stdarg stuff doesn't */
/* work very well. */ 

#ifdef _STDARG_H
#define va_start(AP,LASTARG) \
  (__builtin_saveregs(), (AP) = __builtin_next_arg ())

/* gcc1 doesn't implement pass by invisible reference */ 
#define __va_rounded_size(TYPE)  \
  (((sizeof (TYPE) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))

#define va_arg(AP,TYPE) \
  ((AP) -= __va_rounded_size (TYPE), (__alignof__ (TYPE) > 4 ?	\
				      (int)AP &= ~(0x7) : 0),	\
   *(TYPE *)(AP))

void va_end (va_list);		/* Defined in libgcc.a */
#define va_end(AP)
#else /* _STDARG_H */
#define va_alist __va_a__, __va_b__, __va_c__, __va_d__
#define va_dcl int __va_a__, __va_b__, __va_c__, __va_d__;
#define va_start(list) list = (char *) &__va_a__, &__va_b__, &__va_c__, \
  &__va_d__

# define va_arg(list,mode) *(mode *) ((int) (list = (char *) \
	(((int) list + sizeof(int /*__va_a__*/) - sizeof(mode)) & ~(sizeof(mode)-1)) \
	- sizeof(int /*__va_a__*/)) + sizeof(int /*__va_a__*/))
  
#define va_end(list)

#endif /* _STDARG_H */
#endif /* __GNUCC__ > 1 */
