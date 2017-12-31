/* C code produced by gperf version 2.5 (GNU C++ version) */
/* Command-line: gperf -p -j1 -g -o -t -N is_reserved_word -k1,4,7,$ ./gplus.gperf  */
/* Command-line: gperf -p -j1 -g -o -t -N is_reserved_word -k1,4,$ gplus.gperf  */
struct resword { char *name; short token; enum rid rid;};

#define TOTAL_KEYWORDS 79
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 13
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 183
/* maximum key range = 180, duplicates = 0 */

#ifdef __GNUC__
inline
#endif
static unsigned int
hash (str, len)
     register char *str;
     register int unsigned len;
{
  static unsigned char asso_values[] =
    {
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
     184, 184, 184, 184, 184,   0, 184,  22,   2,  61,
      32,   0,  14,  25,  16,  47, 184,   3,   2,   4,
      35,   1,  26, 184,  38,   0,   4,  20,   4,  39,
     184,  11, 184, 184, 184, 184, 184, 184,
    };
  register int hval = len;

  switch (hval)
    {
      default:
      case 7:
        hval += asso_values[str[6]];
      case 6:
      case 5:
      case 4:
        hval += asso_values[str[3]];
      case 3:
      case 2:
      case 1:
        hval += asso_values[str[0]];
    }
  return hval + asso_values[str[len - 1]];
}

#ifdef __GNUC__
inline
#endif
struct resword *
is_reserved_word (str, len)
     register char *str;
     register unsigned int len;
{
  static struct resword wordlist[] =
    {
      {"",}, {"",}, {"",}, {"",}, 
      {"else",  ELSE, NORID,},
      {"",}, {"",}, 
      {"__asm__",  ASM, NORID},
      {"this",  THIS, NORID,},
      {"__asm",  ASM, NORID},
      {"except",  EXCEPT, NORID		/* Extension */,},
      {"__headof__",  HEADOF, NORID},
      {"enum",  ENUM, NORID,},
      {"__classof__",  CLASSOF, NORID},
      {"__const__",  TYPE_QUAL, RID_CONST},
      {"__volatile",  TYPE_QUAL, RID_VOLATILE},
      {"__const",  TYPE_QUAL, RID_CONST},
      {"__volatile__",  TYPE_QUAL, RID_VOLATILE},
      {"try",  TRY, NORID			/* Extension */,},
      {"virtual",  SCSPEC, RID_VIRTUAL,},
      {"sizeof",  SIZEOF, NORID,},
      {"",}, 
      {"__typeof__",  TYPEOF, NORID},
      {"__headof",  HEADOF, NORID},
      {"typeof",  TYPEOF, NORID,},
      {"__classof",  CLASSOF, NORID},
      {"switch",  SWITCH, NORID,},
      {"all",  ALL, NORID			/* Extension */,},
      {"auto",  SCSPEC, RID_AUTO,},
      {"asm",  ASM, NORID,},
      {"struct",  AGGR, RID_RECORD,},
      {"goto",  GOTO, NORID,},
      {"break",  BREAK, NORID,},
      {"",}, 
      {"__typeof",  TYPEOF, NORID},
      {"do",  DO, NORID,},
      {"volatile",  TYPE_QUAL, RID_VOLATILE,},
      {"private",  VISSPEC, RID_PRIVATE,},
      {"delete",  DELETE, NORID,},
      {"typedef",  SCSPEC, RID_TYPEDEF,},
      {"double",  TYPESPEC, RID_DOUBLE,},
      {"extern",  SCSPEC, RID_EXTERN,},
      {"template",  TEMPLATE, NORID,},
      {"raise",  RAISE, NORID		/* Extension */,},
      {"raises",  RAISES, NORID		/* Extension */,},
      {"float",  TYPESPEC, RID_FLOAT,},
      {"while",  WHILE, NORID,},
      {"short",  TYPESPEC, RID_SHORT,},
      {"__alignof__",  ALIGNOF, NORID},
      {"throw",  THROW, NORID		/* Extension */,},
      {"",}, {"",}, 
      {"friend",  SCSPEC, RID_FRIEND,},
      {"",}, 
      {"int",  TYPESPEC, RID_INT,},
      {"for",  FOR, NORID,},
      {"long",  TYPESPEC, RID_LONG,},
      {"__signed__",  TYPESPEC, RID_SIGNED},
      {"",}, {"",}, 
      {"__alignof",  ALIGNOF, NORID},
      {"union",  AGGR, RID_UNION,},
      {"__attribute",  ATTRIBUTE, NORID},
      {"if",  IF, NORID,},
      {"__attribute__",  ATTRIBUTE, NORID},
      {"case",  CASE, NORID,},
      {"class",  AGGR, RID_CLASS,},
      {"reraise",  RERAISE, NORID		/* Extension */,},
      {"headof",  HEADOF, NORID,},
      {"default",  DEFAULT, NORID,},
      {"const",  TYPE_QUAL, RID_CONST,},
      {"static",  SCSPEC, RID_STATIC,},
      {"void",  TYPESPEC, RID_VOID,},
      {"signed",  TYPESPEC, RID_SIGNED,},
      {"",}, 
      {"protected",  VISSPEC, RID_PROTECTED,},
      {"",}, 
      {"new",  NEW, NORID,},
      {"__inline",  SCSPEC, RID_INLINE},
      {"",}, 
      {"__inline__",  SCSPEC, RID_INLINE},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"operator",  OPERATOR, NORID,},
      {"__signed",  TYPESPEC, RID_SIGNED},
      {"",}, {"",}, {"",}, 
      {"exception",  AGGR, RID_EXCEPTION	/* Extension */,},
      {"",}, 
      {"continue",  CONTINUE, NORID,},
      {"",}, 
      {"public",  VISSPEC, RID_PUBLIC,},
      {"classof",  CLASSOF, NORID,},
      {"",}, {"",}, 
      {"return",  RETURN, NORID,},
      {"inline",  SCSPEC, RID_INLINE,},
      {"overload",  OVERLOAD, NORID,},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"unsigned",  TYPESPEC, RID_UNSIGNED,},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"register",  SCSPEC, RID_REGISTER,},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"char",  TYPESPEC, RID_CHAR,},
      {"",}, 
      {"catch",  CATCH, NORID,},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"dynamic",  DYNAMIC, NORID,},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register char *s = wordlist[key].name;

          if (*s == *str && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
