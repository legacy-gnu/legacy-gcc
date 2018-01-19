In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:57:0: warning: "S_IRUSR" redefined
 #define S_IRUSR 0000400
 ^
In file included from gcc.c:37:0:
d:/mingw/include/sys/stat.h:66:0: note: this is the location of the previous definition
 #define S_IRUSR  _S_IRUSR
 ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:58:0: warning: "S_IWUSR" redefined
 #define S_IWUSR 0000200
 ^
In file included from gcc.c:37:0:
d:/mingw/include/sys/stat.h:65:0: note: this is the location of the previous definition
 #define S_IWUSR  _S_IWUSR
 ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:59:0: warning: "S_IXUSR" redefined
 #define S_IXUSR 0000100
 ^
In file included from gcc.c:37:0:
d:/mingw/include/sys/stat.h:64:0: note: this is the location of the previous definition
 #define S_IXUSR  _S_IXUSR
 ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:66:0: warning: "S_IRWXU" redefined
 #define S_IRWXU S_IRUSR | S_IWUSR | S_IXUSR
 ^
In file included from gcc.c:37:0:
d:/mingw/include/sys/stat.h:63:0: note: this is the location of the previous definition
 #define S_IRWXU  _S_IRWXU
 ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:67:0: warning: "S_ISREG" redefined
 #define S_ISREG(m) (((m)&S_IFMT) == S_IFREG)
 ^
In file included from gcc.c:37:0:
d:/mingw/include/sys/stat.h:72:0: note: this is the location of the previous definition
 #define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
 ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:68:0: warning: "S_ISDIR" redefined
 #define S_ISDIR(m) (((m)&S_IFMT) == S_IFDIR)
 ^
In file included from gcc.c:37:0:
d:/mingw/include/sys/stat.h:68:0: note: this is the location of the previous definition
 #define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
 ^
In file included from ./config/winnt/xm-winnt.h:22:0,
                 from ./config/i386/xm-winnt.h:23,
                 from config.h:1,
                 from gcc.c:48:
gcc.c:178:12: warning: '_sys_nerr' redeclared without dllimport attribute: previous dllimport ignored [-Wattributes]
 extern int sys_nerr;
            ^
gcc.c:183:14: warning: '_sys_errlist' redeclared without dllimport attribute: previous dllimport ignored [-Wattributes]
 extern char *sys_errlist[];
              ^
gcc.c:540:45: error: expected expression before ';' token
 static char *asm_final_spec = ASM_FINAL_SPEC;
                                             ^
gcc.c: In function 'translate_options':
gcc.c:880:21: warning: implicit declaration of function 'strlen' [-Wimplicit-function-declaration]
        int optlen = strlen (option_map[j].name);
                     ^
gcc.c:880:21: warning: incompatible implicit declaration of built-in function 'strlen'
gcc.c:880:21: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:888:13: warning: implicit declaration of function 'strncmp' [-Wimplicit-function-declaration]
        if (!strncmp (argv[i], option_map[j].name, complen))
             ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:48:16: warning: implicit declaration of function 'strchr' [-Wimplicit-function-declaration]
 #define index  strchr
                ^
gcc.c:916:18: note: in expansion of macro 'index'
         else if (index (arginfo, '*') != 0)
                  ^
./config/winnt/xm-winnt.h:48:16: warning: incompatible implicit declaration of built-in function 'strchr'
 #define index  strchr
                ^
gcc.c:916:18: note: in expansion of macro 'index'
         else if (index (arginfo, '*') != 0)
                  ^
./config/winnt/xm-winnt.h:48:16: note: include '<string.h>' or provide a declaration of 'strchr'
 #define index  strchr
                ^
gcc.c:916:18: note: in expansion of macro 'index'
         else if (index (arginfo, '*') != 0)
                  ^
./config/winnt/xm-winnt.h:48:16: warning: incompatible implicit declaration of built-in function 'strchr'
 #define index  strchr
                ^
gcc.c:925:14: note: in expansion of macro 'index'
     else if (index (arginfo, '*') != 0)
              ^
./config/winnt/xm-winnt.h:48:16: note: include '<string.h>' or provide a declaration of 'strchr'
 #define index  strchr
                ^
gcc.c:925:14: note: in expansion of macro 'index'
     else if (index (arginfo, '*') != 0)
              ^
./config/winnt/xm-winnt.h:48:16: warning: incompatible implicit declaration of built-in function 'strchr'
 #define index  strchr
                ^
gcc.c:932:9: note: in expansion of macro 'index'
     if (index (arginfo, 'a') != 0)
         ^
./config/winnt/xm-winnt.h:48:16: note: include '<string.h>' or provide a declaration of 'strchr'
 #define index  strchr
                ^
gcc.c:932:9: note: in expansion of macro 'index'
     if (index (arginfo, 'a') != 0)
         ^
./config/winnt/xm-winnt.h:48:16: warning: incompatible implicit declaration of built-in function 'strchr'
 #define index  strchr
                ^
gcc.c:957:21: note: in expansion of macro 'index'
     if (arg != 0 && index (arginfo, 'j') != 0)
                     ^
./config/winnt/xm-winnt.h:48:16: note: include '<string.h>' or provide a declaration of 'strchr'
 #define index  strchr
                ^
gcc.c:957:21: note: in expansion of macro 'index'
     if (arg != 0 && index (arginfo, 'j') != 0)
                     ^
gcc.c:562:4: warning: implicit declaration of function 'strcmp' [-Wimplicit-function-declaration]
  (!strcmp (STR, "Tdata") || !strcmp (STR, "Ttext") \
    ^
gcc.c:570:36: note: in expansion of macro 'DEFAULT_WORD_SWITCH_TAKES_ARG'
 #define WORD_SWITCH_TAKES_ARG(STR) DEFAULT_WORD_SWITCH_TAKES_ARG (STR)
                                    ^
gcc.c:983:13: note: in expansion of macro 'WORD_SWITCH_TAKES_ARG'
    else if (WORD_SWITCH_TAKES_ARG (p))
             ^
gcc.c: In function 'read_specs':
gcc.c:1061:10: warning: implicit declaration of function 'open' [-Wimplicit-function-declaration]
   desc = open (filename, O_RDONLY, 0);
          ^
gcc.c:1069:13: warning: implicit declaration of function 'read' [-Wimplicit-function-declaration]
   readlen = read (desc, buffer, (unsigned) statbuf.st_size);
             ^
gcc.c:1073:3: warning: implicit declaration of function 'close' [-Wimplicit-function-declaration]
   close (desc);
   ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:47:20: warning: implicit declaration of function 'memset' [-Wimplicit-function-declaration]
 #define bzero(a,b) memset (a,0,b)
                    ^
gcc.c:1140:4: note: in expansion of macro 'bzero'
    bzero ((char *) compilers[n_compilers].spec,
    ^
./config/winnt/xm-winnt.h:47:20: warning: incompatible implicit declaration of built-in function 'memset'
 #define bzero(a,b) memset (a,0,b)
                    ^
gcc.c:1140:4: note: in expansion of macro 'bzero'
    bzero ((char *) compilers[n_compilers].spec,
    ^
./config/winnt/xm-winnt.h:47:20: note: include '<string.h>' or provide a declaration of 'memset'
 #define bzero(a,b) memset (a,0,b)
                    ^
gcc.c:1140:4: note: in expansion of macro 'bzero'
    bzero ((char *) compilers[n_compilers].spec,
    ^
gcc.c: In function 'set_spec':
gcc.c:1215:37: warning: incompatible implicit declaration of built-in function 'strlen'
       sl->name = save_string (name, strlen (name));
                                     ^
gcc.c:1215:37: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:1225:35: warning: incompatible implicit declaration of built-in function 'strlen'
     sl->spec = save_string (spec, strlen (spec));
                                   ^
gcc.c:1225:35: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:1244:5: error: 'link_spec' undeclared (first use in this function)
     link_spec = sl->spec;
     ^
gcc.c:1244:5: note: each undeclared identifier is reported only once for each function it appears in
gcc.c: In function 'record_temp_file':
gcc.c:1464:19: warning: incompatible implicit declaration of built-in function 'strlen'
   name = xmalloc (strlen (filename) + 1);
                   ^
gcc.c:1464:19: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:1465:3: warning: implicit declaration of function 'strcpy' [-Wimplicit-function-declaration]
   strcpy (name, filename);
   ^
gcc.c:1465:3: warning: incompatible implicit declaration of built-in function 'strcpy'
gcc.c:1465:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c: In function 'choose_temp_base_try':
gcc.c:1557:12: warning: implicit declaration of function 'access' [-Wimplicit-function-declaration]
   else if (access (try, R_OK | W_OK) != 0)
            ^
gcc.c: In function 'choose_temp_base':
gcc.c:1586:9: warning: incompatible implicit declaration of built-in function 'strlen'
   len = strlen (base);
         ^
gcc.c:1586:9: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:1589:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (temp_filename, base);
   ^
gcc.c:1589:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c: In function 'build_search_list':
gcc.c:1669:39: warning: incompatible implicit declaration of built-in function 'strlen'
   int suffix_len = (machine_suffix) ? strlen (machine_suffix) : 0;
                                       ^
gcc.c:1669:39: note: include '<string.h>' or provide a declaration of 'strlen'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: implicit declaration of function 'memcpy' [-Wimplicit-function-declaration]
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1675:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&collect_obstack, prefix, strlen (prefix));
   ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1675:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&collect_obstack, prefix, strlen (prefix));
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1675:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&collect_obstack, prefix, strlen (prefix));
   ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1689:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, pprefix->prefix, len);
    ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1689:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, pprefix->prefix, len);
    ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1690:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, machine_suffix, suffix_len);
    ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1690:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, machine_suffix, suffix_len);
    ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1702:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, pprefix->prefix, len);
    ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1702:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, pprefix->prefix, len);
    ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1703:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, just_machine_suffix,
    ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1703:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, just_machine_suffix,
    ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1713:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, pprefix->prefix, len);
    ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:1713:4: note: in expansion of macro 'obstack_grow'
    obstack_grow (&collect_obstack, pprefix->prefix, len);
    ^
gcc.c: In function 'find_a_file':
gcc.c:1743:32: warning: incompatible implicit declaration of built-in function 'strlen'
   int len = pprefix->max_len + strlen (name) + strlen (file_suffix) + 1;
                                ^
gcc.c:1743:32: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:1756:4: warning: incompatible implicit declaration of built-in function 'strcpy'
    strcpy (temp, name);
    ^
gcc.c:1756:4: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:1769:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (temp, pl->prefix);
   ^
gcc.c:1769:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:1770:3: warning: implicit declaration of function 'strcat' [-Wimplicit-function-declaration]
   strcat (temp, machine_suffix);
   ^
gcc.c:1770:3: warning: incompatible implicit declaration of built-in function 'strcat'
gcc.c:1770:3: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c:1782:6: warning: incompatible implicit declaration of built-in function 'strcpy'
      strcpy (temp, pl->prefix);
      ^
gcc.c:1782:6: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:1783:6: warning: incompatible implicit declaration of built-in function 'strcat'
      strcat (temp, machine_suffix);
      ^
gcc.c:1783:6: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c:1801:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (temp, pl->prefix);
   ^
gcc.c:1801:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:1802:3: warning: incompatible implicit declaration of built-in function 'strcat'
   strcat (temp, just_machine_suffix);
   ^
gcc.c:1802:3: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c:1813:6: warning: incompatible implicit declaration of built-in function 'strcpy'
      strcpy (temp, pl->prefix);
      ^
gcc.c:1813:6: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:1814:6: warning: incompatible implicit declaration of built-in function 'strcat'
      strcat (temp, just_machine_suffix);
      ^
gcc.c:1814:6: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c:1832:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (temp, pl->prefix);
   ^
gcc.c:1832:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:1833:3: warning: incompatible implicit declaration of built-in function 'strcat'
   strcat (temp, name);
   ^
gcc.c:1833:3: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c:1843:6: warning: incompatible implicit declaration of built-in function 'strcpy'
      strcpy (temp, pl->prefix);
      ^
gcc.c:1843:6: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:1844:6: warning: incompatible implicit declaration of built-in function 'strcat'
      strcat (temp, name);
      ^
gcc.c:1844:6: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c: In function 'add_prefix':
gcc.c:1891:9: warning: incompatible implicit declaration of built-in function 'strlen'
   len = strlen (prefix);
         ^
gcc.c:1891:9: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c: In function 'pexecute':
gcc.c:2139:58: warning: passing argument 3 of 'search_flag != 0 ? &_spawnv : &_spawnvp' from incompatible pointer type [-Wincompatible-pointer-types]
   return (search_flag ? _spawnv : _spawnvp) (1, program, argv);
                                                          ^
gcc.c:2139:58: note: expected 'const char * const*' but argument is of type 'char **'
gcc.c: In function 'execute':
gcc.c:2172:26: warning: implicit declaration of function 'alloca' [-Wimplicit-function-declaration]
     = (struct command *) alloca (n_commands * sizeof (struct command));
                          ^
gcc.c:2172:26: warning: incompatible implicit declaration of built-in function 'alloca'
gcc.c: In function 'process_command':
gcc.c:2357:51: warning: incompatible implicit declaration of built-in function 'strlen'
   compiler_version = save_string (version_string, strlen (version_string));
                                                   ^
gcc.c:2357:51: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:2382:31: warning: incompatible implicit declaration of built-in function 'alloca'
       char *nstore = (char *) alloca (strlen (temp) + 3);
                               ^
gcc.c:2389:8: warning: implicit declaration of function 'strncpy' [-Wimplicit-function-declaration]
        strncpy (nstore, startp, endp-startp);
        ^
gcc.c:2389:8: warning: incompatible implicit declaration of built-in function 'strncpy'
gcc.c:2389:8: note: include '<string.h>' or provide a declaration of 'strncpy'
gcc.c:2391:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (nstore, concat (".", dir_separator_str));
   ^
gcc.c:2391:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:2413:31: warning: incompatible implicit declaration of built-in function 'alloca'
       char *nstore = (char *) alloca (strlen (temp) + 3);
                               ^
gcc.c:2420:8: warning: incompatible implicit declaration of built-in function 'strncpy'
        strncpy (nstore, startp, endp-startp);
        ^
gcc.c:2420:8: note: include '<string.h>' or provide a declaration of 'strncpy'
gcc.c:2422:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (nstore, concat (".", dir_separator_str));
   ^
gcc.c:2422:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:2445:31: warning: incompatible implicit declaration of built-in function 'alloca'
       char *nstore = (char *) alloca (strlen (temp) + 3);
                               ^
gcc.c:2452:8: warning: incompatible implicit declaration of built-in function 'strncpy'
        strncpy (nstore, startp, endp-startp);
        ^
gcc.c:2452:8: note: include '<string.h>' or provide a declaration of 'strncpy'
gcc.c:2454:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (nstore, concat (".", dir_separator_str));
   ^
gcc.c:2454:3: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:2489:30: error: 'link_spec' undeclared (first use in this function)
    printf ("*link:\n%s\n\n", link_spec);
                              ^
gcc.c:2652:6: warning: incompatible implicit declaration of built-in function 'strncpy'
      strncpy (string, value, len-7);
      ^
gcc.c:2652:6: note: include '<string.h>' or provide a declaration of 'strncpy'
gcc.c:2653:6: warning: incompatible implicit declaration of built-in function 'strcat'
      strcat (string, "include");
      ^
gcc.c:2653:6: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c:2888:8: warning: incompatible implicit declaration of built-in function 'strcpy'
        strcpy (switches[n_switches].args[0], &p[1]);
        ^
gcc.c:2888:8: note: include '<string.h>' or provide a declaration of 'strcpy'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:2914:8: note: in expansion of macro 'obstack_grow'
        obstack_grow (&obstack, OBJECT_SUFFIX, strlen (OBJECT_SUFFIX));
        ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:2914:8: note: in expansion of macro 'obstack_grow'
        obstack_grow (&obstack, OBJECT_SUFFIX, strlen (OBJECT_SUFFIX));
        ^
gcc.c: In function 'do_spec_1':
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3133:6: note: in expansion of macro 'obstack_grow'
      obstack_grow (&obstack, input_basename, basename_length);
      ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3133:6: note: in expansion of macro 'obstack_grow'
      obstack_grow (&obstack, input_basename, basename_length);
      ^
gcc.c:3167:10: warning: incompatible implicit declaration of built-in function 'strlen'
      if (strlen (pl->prefix) + strlen (machine_suffix)
          ^
gcc.c:3167:10: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:3172:6: warning: incompatible implicit declaration of built-in function 'strcpy'
      strcpy (buffer, pl->prefix);
      ^
gcc.c:3172:6: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:3173:6: warning: incompatible implicit declaration of built-in function 'strcat'
      strcat (buffer, machine_suffix);
      ^
gcc.c:3173:6: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c:3211:10: warning: incompatible implicit declaration of built-in function 'strlen'
      if (strlen (machine_suffix) >= bufsize)
          ^
gcc.c:3211:10: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:3214:6: warning: incompatible implicit declaration of built-in function 'strcpy'
      strcpy (buffer, machine_suffix);
      ^
gcc.c:3214:6: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:3215:12: warning: incompatible implicit declaration of built-in function 'strlen'
      idx = strlen (buffer);
            ^
gcc.c:3215:12: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:3233:10: warning: incompatible implicit declaration of built-in function 'strlen'
      if (strlen (pl->prefix) >= bufsize)
          ^
gcc.c:3233:10: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:3236:6: warning: incompatible implicit declaration of built-in function 'strcpy'
      strcpy (buffer, pl->prefix);
      ^
gcc.c:3236:6: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:3237:12: warning: incompatible implicit declaration of built-in function 'strlen'
      idx = strlen (buffer);
            ^
gcc.c:3237:12: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:3258:23: warning: incompatible implicit declaration of built-in function 'alloca'
        buf = (char *) alloca (p - q + 1);
                       ^
gcc.c:3259:8: warning: incompatible implicit declaration of built-in function 'strncpy'
        strncpy (buf, q, p - q);
        ^
gcc.c:3259:8: note: include '<string.h>' or provide a declaration of 'strncpy'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3271:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&obstack, input_basename, basename_length);
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3271:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&obstack, input_basename, basename_length);
   ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3315:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&obstack, temp_filename, temp_filename_length);
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3315:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&obstack, temp_filename, temp_filename_length);
   ^
In file included from gcc.c:49:0:
gcc.c:3323:37: warning: incompatible implicit declaration of built-in function 'strlen'
       obstack_grow (&obstack, buff, strlen (buff));
                                     ^
obstack.h:298:17: note: in definition of macro 'obstack_grow'
    int __len = (length);      \
                 ^
gcc.c:3323:37: note: include '<string.h>' or provide a declaration of 'strlen'
       obstack_grow (&obstack, buff, strlen (buff));
                                     ^
obstack.h:298:17: note: in definition of macro 'obstack_grow'
    int __len = (length);      \
                 ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3323:7: note: in expansion of macro 'obstack_grow'
       obstack_grow (&obstack, buff, strlen (buff));
       ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3323:7: note: in expansion of macro 'obstack_grow'
       obstack_grow (&obstack, buff, strlen (buff));
       ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3332:6: note: in expansion of macro 'obstack_grow'
      obstack_grow (&obstack, input_filename, input_filename_length);
      ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3332:6: note: in expansion of macro 'obstack_grow'
      obstack_grow (&obstack, input_filename, input_filename_length);
      ^
In file included from gcc.c:49:0:
gcc.c:3366:45: warning: incompatible implicit declaration of built-in function 'strlen'
      obstack_grow (&obstack, OBJECT_SUFFIX, strlen (OBJECT_SUFFIX));
                                             ^
obstack.h:298:17: note: in definition of macro 'obstack_grow'
    int __len = (length);      \
                 ^
gcc.c:3366:45: note: include '<string.h>' or provide a declaration of 'strlen'
      obstack_grow (&obstack, OBJECT_SUFFIX, strlen (OBJECT_SUFFIX));
                                             ^
obstack.h:298:17: note: in definition of macro 'obstack_grow'
    int __len = (length);      \
                 ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3366:6: note: in expansion of macro 'obstack_grow'
      obstack_grow (&obstack, OBJECT_SUFFIX, strlen (OBJECT_SUFFIX));
      ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3366:6: note: in expansion of macro 'obstack_grow'
      obstack_grow (&obstack, OBJECT_SUFFIX, strlen (OBJECT_SUFFIX));
      ^
gcc.c:3505:25: error: 'link_spec' undeclared (first use in this function)
      value = do_spec_1 (link_spec, 0, NULL_PTR);
                         ^
gcc.c:3524:27: warning: incompatible implicit declaration of built-in function 'alloca'
        char *x = (char *) alloca (strlen (cpp_predefines) + 1);
                           ^
gcc.c:3524:35: warning: incompatible implicit declaration of built-in function 'strlen'
        char *x = (char *) alloca (strlen (cpp_predefines) + 1);
                                   ^
gcc.c:3524:35: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:3554:27: warning: incompatible implicit declaration of built-in function 'alloca'
        char *x = (char *) alloca (strlen (cpp_predefines) * 4 + 1);
                           ^
gcc.c:3554:35: warning: incompatible implicit declaration of built-in function 'strlen'
        char *x = (char *) alloca (strlen (cpp_predefines) * 4 + 1);
                                   ^
gcc.c:3554:35: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:3727:28: warning: incompatible implicit declaration of built-in function 'alloca'
         char *x = (char *) alloca (strlen (name) * 2 + 1);
                            ^
gcc.c:3727:36: warning: incompatible implicit declaration of built-in function 'strlen'
         char *x = (char *) alloca (strlen (name) * 2 + 1);
                                    ^
gcc.c:3727:36: note: include '<string.h>' or provide a declaration of 'strlen'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3794:8: note: in expansion of macro 'obstack_grow'
        obstack_grow (&obstack, v, q - v);
        ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:3794:8: note: in expansion of macro 'obstack_grow'
        obstack_grow (&obstack, v, q - v);
        ^
gcc.c: In function 'handle_braces':
gcc.c:3879:9: warning: incompatible implicit declaration of built-in function 'strlen'
      && strlen (input_suffix) == p - filter
         ^
gcc.c:3879:9: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c: In function 'find_file':
gcc.c:4123:22: warning: incompatible implicit declaration of built-in function 'alloca'
       try = (char *) alloca (strlen (multilib_dir) + strlen (name) + 2);
                      ^
gcc.c:4123:30: warning: incompatible implicit declaration of built-in function 'strlen'
       try = (char *) alloca (strlen (multilib_dir) + strlen (name) + 2);
                              ^
gcc.c:4123:30: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:4124:7: warning: incompatible implicit declaration of built-in function 'strcpy'
       strcpy (try, multilib_dir);
       ^
gcc.c:4124:7: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:4125:7: warning: incompatible implicit declaration of built-in function 'strcat'
       strcat (try, dir_separator_str);
       ^
gcc.c:4125:7: note: include '<string.h>' or provide a declaration of 'strcat'
gcc.c: In function 'is_directory':
gcc.c:4151:14: warning: incompatible implicit declaration of built-in function 'strlen'
   int len1 = strlen (path1);
              ^
gcc.c:4151:14: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:4153:25: warning: incompatible implicit declaration of built-in function 'alloca'
   char *path = (char *) alloca (3 + len1 + len2);
                         ^
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4165:3: note: in expansion of macro 'bcopy'
   bcopy (path1, path, len1);
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4165:3: note: in expansion of macro 'bcopy'
   bcopy (path1, path, len1);
   ^
gcc.c: In function 'main':
gcc.c:4214:17: warning: incompatible implicit declaration of built-in function 'strlen'
   p = argv[0] + strlen (argv[0]);
                 ^
gcc.c:4214:17: note: include '<string.h>' or provide a declaration of 'strlen'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:4240:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&collect_obstack, "COLLECT_GCC=", sizeof ("COLLECT_GCC=")-1);
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:4240:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&collect_obstack, "COLLECT_GCC=", sizeof ("COLLECT_GCC=")-1);
   ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:4241:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&collect_obstack, argv[0], strlen (argv[0])+1);
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
obstack.h:303:9: note: in expansion of macro 'bcopy'
         bcopy ((char *) (where), __o->next_free, __len);  \
         ^
gcc.c:4241:3: note: in expansion of macro 'obstack_grow'
   obstack_grow (&collect_obstack, argv[0], strlen (argv[0])+1);
   ^
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4263:3: note: in expansion of macro 'bcopy'
   bcopy ((char *) default_compilers, (char *) compilers,
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4263:3: note: in expansion of macro 'bcopy'
   bcopy ((char *) default_compilers, (char *) compilers,
   ^
gcc.c:4280:25: warning: incompatible implicit declaration of built-in function 'alloca'
    specs_file =(char *) alloca (strlen (standard_exec_prefix) +
                         ^
gcc.c:4282:4: warning: incompatible implicit declaration of built-in function 'strcpy'
    strcpy (specs_file, standard_exec_prefix);
    ^
gcc.c:4282:4: note: include '<string.h>' or provide a declaration of 'strcpy'
gcc.c:4283:4: warning: incompatible implicit declaration of built-in function 'strcat'
    strcat (specs_file, just_machine_suffix);
    ^
gcc.c:4283:4: note: include '<string.h>' or provide a declaration of 'strcat'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:47:20: warning: incompatible implicit declaration of built-in function 'memset'
 #define bzero(a,b) memset (a,0,b)
                    ^
gcc.c:4432:3: note: in expansion of macro 'bzero'
   bzero ((char *) outfiles, n_infiles * sizeof (char *));
   ^
./config/winnt/xm-winnt.h:47:20: note: include '<string.h>' or provide a declaration of 'memset'
 #define bzero(a,b) memset (a,0,b)
                    ^
gcc.c:4432:3: note: in expansion of macro 'bzero'
   bzero ((char *) outfiles, n_infiles * sizeof (char *));
   ^
gcc.c: In function 'lookup_compiler':
gcc.c:4625:5: warning: incompatible implicit declaration of built-in function 'strlen'
    (strlen (cp->suffix) < length
     ^
gcc.c:4625:5: note: include '<string.h>' or provide a declaration of 'strlen'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4648:8: note: in expansion of macro 'bcopy'
        bcopy ((char *) lookup_compiler (NULL_PTR, 0, language)->spec,
        ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4648:8: note: in expansion of macro 'bcopy'
        bcopy ((char *) lookup_compiler (NULL_PTR, 0, language)->spec,
        ^
gcc.c: In function 'concat':
gcc.c:4687:14: warning: incompatible implicit declaration of built-in function 'strlen'
   int len1 = strlen (s1);
              ^
gcc.c:4687:14: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c:4691:3: warning: incompatible implicit declaration of built-in function 'strcpy'
   strcpy (result, s1);
   ^
gcc.c:4691:3: note: include '<string.h>' or provide a declaration of 'strcpy'
In file included from ./config/i386/xm-winnt.h:23:0,
                 from config.h:1,
                 from gcc.c:48:
gcc.c: In function 'save_string':
./config/winnt/xm-winnt.h:46:22: warning: incompatible implicit declaration of built-in function 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4726:3: note: in expansion of macro 'bcopy'
   bcopy (s, result, len);
   ^
./config/winnt/xm-winnt.h:46:22: note: include '<string.h>' or provide a declaration of 'memcpy'
 #define bcopy(a,b,c) memcpy (b,a,c)
                      ^
gcc.c:4726:3: note: in expansion of macro 'bcopy'
   bcopy (s, result, len);
   ^
gcc.c: In function 'validate_all_switches':
gcc.c:4925:7: error: 'link_spec' undeclared (first use in this function)
   p = link_spec;
       ^
gcc.c: In function 'used_arg':
gcc.c:5007:5: warning: incompatible implicit declaration of built-in function 'strlen'
  && strlen (switches[i].part1) == len)
     ^
gcc.c:5007:5: note: include '<string.h>' or provide a declaration of 'strlen'
gcc.c: In function 'set_multilib_dir':
gcc.c:5127:8: warning: incompatible implicit declaration of built-in function 'strncpy'
        strncpy (multilib_dir, this_path, this_path_len);
        ^
gcc.c:5127:8: note: include '<string.h>' or provide a declaration of 'strncpy'
make: *** [gcc.o] Error 1
