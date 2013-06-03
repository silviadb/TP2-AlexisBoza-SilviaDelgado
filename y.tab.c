/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 9 "work.y"

#include <stdio.h>
#include <assert.h>
#include "tree.c"//Arbol de parsing
//Importamos la variable yylineno para el conteo de linea
extern yylineno;

/* Line 371 of yacc.c  */
#line 76 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_a = 258,
     T_b = 259,
     T_blockquote = 260,
     T_body = 261,
     T_br = 262,
     T_button = 263,
     T_caption = 264,
     T_code = 265,
     T_div = 266,
     T_dl = 267,
     T_dt = 268,
     T_dd = 269,
     T_em = 270,
     T_embed = 271,
     T_footer = 272,
     T_form = 273,
     T_h1 = 274,
     T_h2 = 275,
     T_h3 = 276,
     T_h4 = 277,
     T_h5 = 278,
     T_h6 = 279,
     T_head = 280,
     T_header = 281,
     T_hr = 282,
     T_html = 283,
     T_img = 284,
     T_input = 285,
     T_li = 286,
     T_link = 287,
     T_meta = 288,
     T_object = 289,
     T_ol = 290,
     T_option = 291,
     T_p = 292,
     T_pre = 293,
     T_script = 294,
     T_span = 295,
     T_strong = 296,
     T_style = 297,
     T_select = 298,
     T_table = 299,
     T_td = 300,
     T_th = 301,
     T_title = 302,
     T_tr = 303,
     T_textarea = 304,
     T_ul = 305,
     T_DOCTYPE = 306,
     T_IDENT = 307,
     T_ATT = 308,
     T_Tag = 309,
     T_TagClose = 310,
     T_FinalTag = 311,
     T_comment_open = 312,
     T_comment_close = 313
   };
#endif
/* Tokens.  */
#define T_a 258
#define T_b 259
#define T_blockquote 260
#define T_body 261
#define T_br 262
#define T_button 263
#define T_caption 264
#define T_code 265
#define T_div 266
#define T_dl 267
#define T_dt 268
#define T_dd 269
#define T_em 270
#define T_embed 271
#define T_footer 272
#define T_form 273
#define T_h1 274
#define T_h2 275
#define T_h3 276
#define T_h4 277
#define T_h5 278
#define T_h6 279
#define T_head 280
#define T_header 281
#define T_hr 282
#define T_html 283
#define T_img 284
#define T_input 285
#define T_li 286
#define T_link 287
#define T_meta 288
#define T_object 289
#define T_ol 290
#define T_option 291
#define T_p 292
#define T_pre 293
#define T_script 294
#define T_span 295
#define T_strong 296
#define T_style 297
#define T_select 298
#define T_table 299
#define T_td 300
#define T_th 301
#define T_title 302
#define T_tr 303
#define T_textarea 304
#define T_ul 305
#define T_DOCTYPE 306
#define T_IDENT 307
#define T_ATT 308
#define T_Tag 309
#define T_TagClose 310
#define T_FinalTag 311
#define T_comment_open 312
#define T_comment_close 313



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 20 "work.y"

	char *str;


/* Line 387 of yacc.c  */
#line 240 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 268 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   419

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  408

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    22,    23,    32,    33,    43,
      44,    54,    55,    64,    72,    75,    78,    81,    84,    86,
      95,   104,   109,   114,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   144,   153,   162,   171,   180,   189,
     191,   193,   195,   197,   199,   201,   203,   205,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   229,
     238,   240,   242,   244,   253,   262,   271,   281,   291,   293,
     296,   299,   301,   309,   317,   325,   334,   343,   352,   355,
     358,   361,   363,   368,   377,   387,   389,   398,   403,   408,
     413,   423,   432,   442,   444,   452,   460,   468,   476,   484,
     492,   501,   510,   519,   528,   537,   541,   544,   546,   549,
     551
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    -1,    -1,    54,    51,    28,    55,    61,
      54,    28,    55,    62,    63,    65,    67,    69,    56,    28,
      55,    -1,    -1,    54,    26,    55,    64,   122,    56,    26,
      55,    -1,    -1,    54,    25,    55,    66,    71,    72,    56,
      25,    55,    -1,    -1,    54,     6,   123,    55,    68,    77,
      56,     6,    55,    -1,    -1,    54,    17,    55,    70,   122,
      56,    17,    55,    -1,    54,    47,    55,   122,    56,    47,
      55,    -1,    73,    72,    -1,    74,    72,    -1,    75,    72,
      -1,    76,    72,    -1,   124,    -1,    54,    39,   123,    55,
     122,    56,    39,    55,    -1,    54,    42,   123,    55,   122,
      56,    42,    55,    -1,    54,    33,   123,    55,    -1,    54,
      32,   123,    55,    -1,    78,    77,    -1,   122,    -1,    79,
      -1,    86,    -1,    80,    -1,    81,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    54,    19,   123,    55,   122,
      56,    19,    55,    -1,    54,    20,   123,    55,   122,    56,
      20,    55,    -1,    54,    21,   123,    55,   122,    56,    21,
      55,    -1,    54,    22,   123,    55,   122,    56,    22,    55,
      -1,    54,    23,   123,    55,   122,    56,    23,    55,    -1,
      54,    24,   123,    55,   122,    56,    24,    55,    -1,    87,
      -1,    88,    -1,    96,    -1,    97,    -1,    98,    -1,   106,
      -1,   108,    -1,   117,    -1,   118,    -1,   119,    -1,   120,
      -1,   121,    -1,    99,    -1,   105,    -1,   107,    -1,   112,
      -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,    54,
      37,   123,    55,   122,    56,    37,    55,    -1,    89,    -1,
      90,    -1,    91,    -1,    54,    50,   123,    55,    92,    56,
      50,    55,    -1,    54,    35,   123,    55,    92,    56,    35,
      55,    -1,    54,    12,   123,    55,    93,    56,    12,    55,
      -1,    54,    31,   123,    55,   122,    56,    31,    55,    92,
      -1,    54,    31,   123,    55,    88,    56,    31,    55,    92,
      -1,   124,    -1,    94,    93,    -1,    95,    93,    -1,   124,
      -1,    54,    13,    55,   122,    56,    13,    55,    -1,    54,
      14,    55,   122,    56,    14,    55,    -1,    54,    38,    55,
     122,    56,    38,    55,    -1,    54,    11,   123,    55,    77,
      56,    11,    55,    -1,    54,     5,   123,    55,    86,    56,
       5,    55,    -1,    54,    18,   123,    55,   100,    56,    18,
      55,    -1,   101,   100,    -1,   102,   100,    -1,   104,   100,
      -1,   124,    -1,    54,    30,   123,    55,    -1,    54,    43,
     123,    55,   103,    56,    43,    55,    -1,    54,    36,   123,
      55,   122,    56,    36,    55,   103,    -1,   124,    -1,    54,
      49,   123,    55,   122,    56,    49,    55,    -1,    54,     7,
     123,    55,    -1,    54,    27,   123,    55,    -1,    54,    29,
     123,    55,    -1,    54,    44,   123,    55,   109,   110,    56,
      44,    55,    -1,    54,     9,   123,    55,   122,    56,     9,
      55,    -1,    54,    48,   123,    55,   111,    56,    48,    55,
     110,    -1,   124,    -1,    54,    46,    55,    77,    56,    46,
      55,    -1,    54,    45,    55,    77,    56,    45,    55,    -1,
      54,     4,    55,   122,    56,     4,    55,    -1,    54,    15,
      55,   122,    56,    15,    55,    -1,    54,    41,    55,   122,
      56,    41,    55,    -1,    54,    10,    55,   122,    56,    10,
      55,    -1,    54,     3,   123,    55,   122,    56,     3,    55,
      -1,    54,     8,   123,    55,   122,    56,     8,    55,    -1,
      54,    40,   123,    55,   122,    56,    40,    55,    -1,    54,
      16,   123,    55,   122,    56,    16,    55,    -1,    54,    34,
     123,    55,   122,    56,    34,    55,    -1,    57,    77,    58,
      -1,    52,   122,    -1,   124,    -1,    53,   123,    -1,   124,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    47,    46,    54,    54,    59,    59,    64,
      64,    68,    68,    76,    82,    83,    84,    85,    86,    89,
      95,   102,   107,   117,   118,   121,   122,   125,   126,   127,
     128,   129,   130,   133,   139,   145,   151,   157,   163,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   192,
     200,   201,   202,   206,   214,   222,   231,   237,   242,   246,
     247,   248,   251,   255,   260,   265,   273,   282,   290,   291,
     292,   293,   296,   302,   310,   315,   319,   327,   331,   335,
     342,   351,   358,   363,   367,   370,   374,   379,   385,   390,
     396,   403,   410,   417,   424,   430,   437,   438,   441,   442,
     444
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_a", "T_b", "T_blockquote", "T_body",
  "T_br", "T_button", "T_caption", "T_code", "T_div", "T_dl", "T_dt",
  "T_dd", "T_em", "T_embed", "T_footer", "T_form", "T_h1", "T_h2", "T_h3",
  "T_h4", "T_h5", "T_h6", "T_head", "T_header", "T_hr", "T_html", "T_img",
  "T_input", "T_li", "T_link", "T_meta", "T_object", "T_ol", "T_option",
  "T_p", "T_pre", "T_script", "T_span", "T_strong", "T_style", "T_select",
  "T_table", "T_td", "T_th", "T_title", "T_tr", "T_textarea", "T_ul",
  "T_DOCTYPE", "T_IDENT", "T_ATT", "T_Tag", "T_TagClose", "T_FinalTag",
  "T_comment_open", "T_comment_close", "$accept", "document", "$@1", "$@2",
  "header", "$@3", "head", "$@4", "body", "$@5", "footer", "$@6", "title",
  "head_element", "script", "style", "META", "LINK", "body_content",
  "body_tag", "heading", "h1", "h2", "h3", "h4", "h5", "h6", "block",
  "paragraph", "list", "unordered_list", "ordered_list", "def_list",
  "list_item", "def_list_item", "dt", "dd", "preformatted", "div",
  "blockquote", "form", "form_field", "INPUT", "select", "select_option",
  "textarea", "BR", "HR", "IMG", "table", "caption", "tr", "th_or_td",
  "bold", "emphasize", "strong", "code", "anchor", "button", "span",
  "embed", "object", "comment", "text", "Atribute", "epsilon", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    61,    62,    60,    64,    63,    66,    65,    68,
      67,    70,    69,    71,    72,    72,    72,    72,    72,    73,
      74,    75,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    81,    82,    83,    84,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      88,    88,    88,    89,    90,    91,    92,    92,    92,    93,
      93,    93,    94,    95,    96,    97,    98,    99,   100,   100,
     100,   100,   101,   102,   103,   103,   104,   105,   106,   107,
     108,   109,   110,   110,   111,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   122,   123,   123,
     124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    16,     0,     8,     0,     9,     0,
       9,     0,     8,     7,     2,     2,     2,     2,     1,     8,
       8,     4,     4,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     8,     8,     8,     8,     8,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       1,     1,     1,     8,     8,     8,     9,     9,     1,     2,
       2,     1,     7,     7,     7,     8,     8,     8,     2,     2,
       2,     1,     4,     8,     9,     1,     8,     4,     4,     4,
       9,     8,     9,     1,     7,     7,     7,     7,     7,     7,
       8,     8,     8,     8,     8,     3,     2,     1,     2,     1,
       0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     2,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,   110,     7,   110,     0,     0,   110,     0,   107,     0,
     110,     0,   109,     0,     0,   106,     0,     0,   110,   108,
       9,    11,     0,     0,     0,     0,     0,   110,   110,   110,
     110,    18,   110,   110,     4,     6,   110,   110,   110,   110,
     110,     0,    14,    15,    16,    17,     0,   110,     0,   110,
      25,    27,    28,    29,    30,    31,    32,    26,    39,    40,
      60,    61,    62,    41,    42,    43,    51,    52,    44,    53,
      45,    54,    55,    56,    57,    58,    46,    47,    48,    49,
      50,    24,     0,     0,     0,     0,     0,     0,     0,   110,
       0,   110,   110,   110,     0,   110,   110,     0,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,     0,   110,     0,   110,   110,     0,     0,    23,     0,
       0,    22,    21,   110,   110,     8,     0,   110,     0,     0,
       0,   110,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
     110,     0,     0,   105,     0,     0,     0,     0,     0,   110,
       0,     0,    87,   110,     0,   110,   110,     0,   110,   110,
     110,   110,   110,   110,   110,   110,    88,    89,   110,   110,
     110,     0,   110,     0,     0,   110,    10,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   110,    71,     0,     0,     0,     0,   110,   110,   110,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      70,     0,     0,   110,   110,   110,     0,    78,    79,    80,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,   110,     0,     0,    93,     0,    19,    20,
       0,    96,     0,     0,    99,     0,   110,   110,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,    98,     0,   110,
       0,     0,   100,    76,   101,    75,     0,     0,    65,   103,
      82,   110,   110,    77,    33,    34,    35,    36,    37,    38,
     104,   110,    64,    59,   102,   110,     0,     0,    63,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
      90,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    83,    86,   110,   110,    91,   110,   110,
       0,     0,    67,    66,     0,     0,   110,     0,     0,     0,
      92,     0,     0,     0,   110,    95,    94,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    11,    13,    21,    16,    29,    20,    52,
      25,    53,    38,    46,    47,    48,    49,    50,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,   239,   219,   220,   221,    83,    84,    85,
      86,   226,   227,   228,   352,   229,    87,    88,    89,    90,
     246,   285,   370,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    31,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -203
static const yytype_int16 yypact[] =
{
     -52,   -42,    17,     5,  -203,    -4,  -203,    -2,    25,    -1,
    -203,     2,    29,     3,     4,    33,     6,  -203,     7,    55,
      10,    11,  -203,    16,    53,    15,    11,    18,  -203,    19,
      16,    20,  -203,    21,    44,  -203,    52,    32,    27,  -203,
    -203,  -203,    28,    30,    36,   -21,    26,    27,    27,    27,
      27,  -203,   -44,    11,  -203,  -203,    11,    16,    16,    16,
      16,    59,  -203,  -203,  -203,  -203,   295,   -44,    31,   -44,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,    38,    54,    58,    60,    61,    63,    70,    16,
      84,    16,    16,    16,    86,    16,    16,    89,    16,    16,
      16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
      16,    90,    16,    91,    16,    16,    50,   108,  -203,   130,
     101,  -203,  -203,    11,    11,  -203,    94,    11,    95,    96,
      97,    11,    98,    99,    11,   100,   102,   103,   104,   105,
     106,   107,   109,   110,   114,   115,   117,   118,    11,   119,
      11,   122,   124,  -203,   125,   126,   131,   129,   132,    11,
     133,   -38,  -203,    11,   134,   -44,   137,   139,    11,   142,
      11,    11,    11,    11,    11,    11,  -203,  -203,    11,   145,
      11,   144,    11,   146,   147,   145,  -203,  -203,  -203,   148,
     151,   152,   205,   240,   154,   155,   203,   164,     9,   165,
     137,   137,  -203,   141,   169,   -29,   171,   142,   142,   142,
    -203,   172,   173,   174,   175,   176,   177,   178,   204,   180,
    -203,   181,   200,   183,   208,   237,   199,   201,   206,   207,
     256,   209,   258,   257,   211,   259,   213,   221,   267,  -203,
    -203,   227,   270,    16,    16,    16,   265,  -203,  -203,  -203,
     268,   269,   271,   266,   272,   273,   260,    16,   274,   264,
     238,   283,   249,    16,   280,   275,  -203,   262,  -203,  -203,
     279,  -203,   282,   286,  -203,   287,    11,    11,   288,  -203,
     289,   291,   292,   293,   294,   296,   297,   298,   299,   300,
     302,   303,   304,   305,   306,  -203,   309,  -203,   311,    16,
     323,   313,  -203,  -203,  -203,  -203,   314,   316,  -203,  -203,
    -203,   284,    11,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,   -10,  -203,  -203,  -203,    11,   319,   320,  -203,   337,
     362,   341,   322,  -203,   324,    -7,   326,   327,   328,   325,
    -203,   330,   331,    16,   344,   339,   358,   359,   382,     1,
     336,  -203,  -203,   338,   340,   342,   343,   345,   346,   347,
     348,   351,    11,  -203,  -203,   145,   145,  -203,   -44,   -44,
     349,   352,  -203,  -203,   353,   354,   199,   360,   366,   361,
    -203,   350,   357,   363,   284,  -203,  -203,  -203
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,   -18,  -203,  -203,  -203,  -203,   -63,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,   232,  -203,    73,
    -203,  -203,  -203,  -202,  -172,  -203,  -203,  -203,  -203,  -203,
    -203,  -188,  -203,  -203,    12,  -203,  -203,  -203,  -203,  -203,
    -203,    23,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,    24,     8,   -23
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      32,   263,     1,   247,   136,   116,   138,    32,    26,     3,
      66,    57,    58,    67,   264,    51,   213,     4,    59,    67,
     265,    60,   256,   257,    51,    51,    51,    51,   129,    62,
      63,    64,    65,     5,    32,    32,    32,    32,    39,   267,
     268,   269,    26,   135,   355,    27,   379,   380,   259,   260,
      35,     6,     8,     9,    10,    14,    12,    15,    18,    17,
      19,    23,    22,    26,    24,   104,   105,   106,   107,    30,
      33,    34,    42,    37,    36,    40,    41,   102,    43,    44,
     103,    45,    61,    54,   108,    55,    32,   137,    32,    32,
      32,    56,    32,    32,   139,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,   173,    32,
     140,    32,    32,   141,   174,   142,   143,   146,   144,   148,
     149,   150,   217,   152,   153,   145,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   147,
     169,   151,   171,   172,   154,   168,   170,   175,   176,   179,
     181,   182,   183,   185,   186,   188,   261,   189,   190,   191,
     192,   193,   194,   222,   195,   196,   230,   177,   178,   197,
     198,   180,   199,   200,   202,   184,   240,   204,   187,   205,
     206,   207,   240,   392,   393,   209,   208,   248,   210,   212,
     216,   218,   201,   249,   203,   223,   225,   222,   222,   238,
     242,   245,   244,   211,   230,   230,   230,   215,   250,   251,
     252,   253,   224,   254,   231,   232,   233,   234,   235,   236,
     255,   258,   237,   286,   241,   262,   243,   266,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
      32,    32,    32,   109,   110,   111,   283,   112,   113,   282,
     114,   115,   116,   284,    32,   117,   118,   287,   119,   290,
      32,   288,   289,   292,   291,   293,   294,   126,   296,   127,
     295,   301,   302,   303,   128,   129,   297,   130,   131,   298,
     132,   133,   299,   304,   134,   312,   300,   305,   308,   306,
     135,   318,   307,   315,   311,   309,    32,   310,   109,   110,
     111,   314,   112,   113,   317,   114,   115,   116,   353,   313,
     117,   118,   321,   119,   120,   121,   122,   123,   124,   125,
     326,   327,   126,   316,   127,   394,   395,   346,   319,   128,
     129,   320,   130,   131,   322,   132,   133,   323,   351,   134,
      32,   324,   325,   328,   329,   135,   330,   331,   332,   333,
     361,   334,   335,   336,   337,   338,   354,   339,   340,   341,
     342,   343,   240,   240,   344,   357,   345,   347,   348,   358,
     349,   373,   350,   286,   359,   360,   362,   363,   364,   369,
     365,   353,   366,   367,   368,   371,   372,   374,   375,   376,
     377,   378,   381,   382,     0,   383,   401,   384,   385,   390,
     386,   387,   388,   389,   396,   404,   391,   403,   397,   398,
     399,   402,   405,   214,   356,     0,   407,     0,   406,   400
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-203)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      23,    30,    54,   205,    67,    12,    69,    30,    52,    51,
      54,    32,    33,    57,    43,    38,    54,     0,    39,    57,
      49,    42,    13,    14,    47,    48,    49,    50,    35,    47,
      48,    49,    50,    28,    57,    58,    59,    60,    30,   227,
     228,   229,    52,    50,    54,    21,    45,    46,   220,   221,
      26,    55,    54,    28,    55,    26,    54,    54,    25,    55,
      54,     6,    55,    52,    54,    57,    58,    59,    60,    53,
      17,    56,    28,    54,    56,    55,    55,    53,    26,    47,
      56,    54,    56,    55,    25,    55,   109,    56,   111,   112,
     113,    55,   115,   116,    56,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    58,   132,
      56,   134,   135,    55,     6,    55,    55,   109,    55,   111,
     112,   113,   185,   115,   116,    55,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    55,
     132,    55,   134,   135,    55,    55,    55,    17,    47,    55,
      55,    55,    55,    55,    55,    55,    15,    55,    55,    55,
      55,    55,    55,   186,    55,    55,   189,   143,   144,    55,
      55,   147,    55,    55,    55,   151,   199,    55,   154,    55,
      55,    55,   205,   385,   386,    56,    55,    39,    56,    56,
      56,    54,   168,    42,   170,    56,    54,   220,   221,    54,
      56,    54,    56,   179,   227,   228,   229,   183,    56,     4,
      56,    56,   188,    10,   190,   191,   192,   193,   194,   195,
      56,    56,   198,   246,   200,    56,   202,    56,    56,    56,
      56,    56,    56,    56,    56,    31,    56,    56,    38,    56,
     263,   264,   265,     3,     4,     5,     9,     7,     8,    41,
      10,    11,    12,    54,   277,    15,    16,    56,    18,     3,
     283,    55,    55,     5,    55,     8,    55,    27,    55,    29,
      11,   263,   264,   265,    34,    35,    55,    37,    38,    12,
      40,    41,    55,    18,    44,   277,    16,    19,    22,    20,
      50,   283,    21,    55,    34,    23,   319,    24,     3,     4,
       5,    37,     7,     8,    55,    10,    11,    12,   331,    35,
      15,    16,    50,    18,    19,    20,    21,    22,    23,    24,
     296,   297,    27,    40,    29,   388,   389,   319,    48,    34,
      35,    56,    37,    38,    55,    40,    41,    55,    54,    44,
     363,    55,    55,    55,    55,    50,    55,    55,    55,    55,
      13,    55,    55,    55,    55,    55,   332,    55,    55,    55,
      55,    55,   385,   386,    55,   341,    55,    44,    55,   345,
      56,   363,    56,   396,    55,    55,    14,    36,    56,    54,
      56,   404,    56,    56,    56,    55,    55,    43,    49,    31,
      31,     9,    56,    55,    -1,    55,    36,    55,    55,    48,
      55,    55,    55,    55,    55,    55,   382,    46,    56,    56,
      56,    45,    55,   181,   341,    -1,   404,    -1,    55,   396
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    60,    51,     0,    28,    55,    61,    54,    28,
      55,    62,    54,    63,    26,    54,    65,    55,    25,    54,
      67,    64,    55,     6,    54,    69,    52,   122,   124,    66,
      53,   123,   124,    17,    56,   122,    56,    54,    71,   123,
      55,    55,    28,    26,    47,    54,    72,    73,    74,    75,
      76,   124,    68,    70,    55,    55,    55,    32,    33,    39,
      42,    56,    72,    72,    72,    72,    54,    57,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    96,    97,    98,    99,   105,   106,   107,
     108,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   122,   122,   123,   123,   123,   123,    25,     3,
       4,     5,     7,     8,    10,    11,    12,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    27,    29,    34,    35,
      37,    38,    40,    41,    44,    50,    77,    56,    77,    56,
      56,    55,    55,    55,    55,    55,   123,    55,   123,   123,
     123,    55,   123,   123,    55,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,    55,   123,
      55,   123,   123,    58,     6,    17,    47,   122,   122,    55,
     122,    55,    55,    55,   122,    55,    55,   122,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,   122,    55,   122,    55,    55,    55,    55,    55,    56,
      56,   122,    56,    54,    86,   122,    56,    77,    54,    93,
      94,    95,   124,    56,   122,    54,   100,   101,   102,   104,
     124,   122,   122,   122,   122,   122,   122,   122,    54,    92,
     124,   122,    56,   122,    56,    54,   109,    92,    39,    42,
      56,     4,    56,    56,    10,    56,    13,    14,    56,    93,
      93,    15,    56,    30,    43,    49,    56,   100,   100,   100,
      56,    56,    56,    56,    56,    56,    56,    31,    56,    56,
      38,    56,    41,     9,    54,   110,   124,    56,    55,    55,
       3,    55,     5,     8,    55,    11,    55,    55,    12,    55,
      16,   123,   123,   123,    18,    19,    20,    21,    22,    23,
      24,    34,   123,    35,    37,    55,    40,    55,   123,    48,
      56,    50,    55,    55,    55,    55,   122,   122,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,   123,    44,    55,    56,
      56,    54,   103,   124,   122,    54,    88,   122,   122,    55,
      55,    13,    14,    36,    56,    56,    56,    56,    56,    54,
     111,    55,    55,   123,    43,    49,    31,    31,     9,    45,
      46,    56,    55,    55,    55,    55,    55,    55,    55,    55,
      48,   122,    92,    92,    77,    77,    55,    56,    56,    56,
     110,    36,    45,    46,    55,    55,    55,   103
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 46 "work.y"
    {Agrega_nodo(&root,"!DOCTYPE");}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 47 "work.y"
    {Agrega_nodo(&root,"html");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 54 "work.y"
    {insertar_nodo("html","header");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 59 "work.y"
    {insertar_nodo("html","head");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 64 "work.y"
    {insertar_nodo("html","body");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 68 "work.y"
    {insertar_nodo("html","footer");}
    break;


/* Line 1792 of yacc.c  */
#line 1819 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 446 "work.y"

int main(){
/**************PARSING**************/
	yyparse();
	imprimir_arbol (root); 
    	liberar_arbol (root);
	return 0; 
}
/*******************************
Errores Sintacticos
********************************/
yyerror (char *s) {fprintf(stderr,"Syntax Error at line: %d\n",yylineno);}
