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
#line 1 "work.y"

#include <stdio.h>
#include <assert.h>

/* Line 371 of yacc.c  */
#line 73 "y.tab.c"

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
#line 5 "work.y"

	char *str;


/* Line 387 of yacc.c  */
#line 237 "y.tab.c"
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
#line 265 "y.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   525

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  414

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
       0,     0,     3,    15,    21,    26,    34,    42,    44,    46,
      48,    50,    52,    60,    69,    74,    79,    88,    97,    99,
     101,   103,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   131,   133,   135,   137,   139,
     141,   143,   145,   147,   149,   151,   153,   155,   157,   159,
     161,   163,   165,   167,   176,   185,   194,   203,   212,   221,
     230,   239,   248,   257,   266,   275,   284,   286,   288,   290,
     299,   308,   317,   326,   335,   337,   339,   347,   355,   363,
     371,   380,   389,   398,   407,   412,   417,   422,   432,   441,
     450,   458,   466,   474,   482,   490,   498,   500,   502,   504,
     513,   522,   531,   540,   545,   554,   563,   572,   581
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    51,    62,    54,    28,    55,    61,    70,
      63,    56,    28,    55,    -1,    54,    25,    55,    64,    52,
      -1,    64,    56,    25,    55,    -1,    54,    26,    55,    74,
      56,    26,    55,    -1,    54,    17,    55,    74,    56,    17,
      55,    -1,    65,    -1,    66,    -1,    69,    -1,    67,    -1,
      68,    -1,    54,    47,    55,    79,    56,    47,    55,    -1,
      54,    39,    53,    55,    79,    56,    39,    55,    -1,    54,
      33,    53,    55,    -1,    54,    32,    53,    55,    -1,    54,
      42,    53,    55,    79,    56,    42,    55,    -1,    54,     6,
      53,    55,    72,    56,     6,    55,    -1,    73,    -1,    74,
      -1,    71,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,
      -1,    95,    -1,    96,    -1,    97,    -1,   100,    -1,   102,
      -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,   120,
      -1,   106,    -1,   107,    -1,   108,    -1,   109,    -1,   114,
      -1,   101,    -1,    99,    -1,    75,    -1,    76,    -1,    77,
      -1,    98,    -1,    52,    -1,    78,    -1,    54,    19,    53,
      55,    74,    56,    19,    55,    -1,    54,    19,    53,    55,
      79,    56,    19,    55,    -1,    54,    20,    53,    55,    74,
      56,    20,    55,    -1,    54,    20,    53,    55,    79,    56,
      20,    55,    -1,    54,    21,    53,    55,    74,    56,    21,
      55,    -1,    54,    21,    53,    55,    79,    56,    21,    55,
      -1,    54,    22,    53,    55,    74,    56,    22,    55,    -1,
      54,    22,    53,    55,    79,    56,    22,    55,    -1,    54,
      23,    53,    55,    74,    56,    23,    55,    -1,    54,    23,
      53,    55,    79,    56,    23,    55,    -1,    54,    24,    53,
      55,    74,    56,    24,    55,    -1,    54,    24,    53,    55,
      79,    56,    24,    55,    -1,    54,    37,    53,    55,    79,
      56,    37,    55,    -1,    88,    -1,    89,    -1,    90,    -1,
      54,    50,    53,    55,    91,    56,    50,    55,    -1,    54,
      35,    53,    55,    91,    56,    35,    55,    -1,    54,    12,
      53,    55,    92,    56,    12,    55,    -1,    54,    31,    53,
      55,    79,    56,    31,    55,    -1,    54,    31,    53,    55,
      87,    56,    31,    55,    -1,    93,    -1,    94,    -1,    54,
      13,    55,    79,    56,    13,    55,    -1,    54,    14,    55,
      79,    56,    14,    55,    -1,    54,    14,    55,    74,    56,
      14,    55,    -1,    54,    38,    55,    79,    56,    38,    55,
      -1,    54,    11,    53,    55,    72,    56,    11,    55,    -1,
      54,     5,    53,    55,    86,    56,     5,    55,    -1,    54,
      18,    53,    55,   110,    56,    18,    55,    -1,    54,    18,
      53,    55,    72,    56,    18,    55,    -1,    54,     7,    53,
      55,    -1,    54,    27,    53,    55,    -1,    54,    29,    53,
      55,    -1,    54,    44,    53,    55,   103,   104,    56,    44,
      55,    -1,    54,     9,    53,    55,    79,    56,     9,    55,
      -1,    54,    48,    53,    55,   105,    56,    48,    55,    -1,
      54,    46,    55,    72,    56,    46,    55,    -1,    54,    45,
      55,    72,    56,    45,    55,    -1,    54,     4,    55,    79,
      56,     4,    55,    -1,    54,    15,    55,    79,    56,    15,
      55,    -1,    54,    41,    55,    79,    56,    41,    55,    -1,
      54,    10,    55,    79,    56,    10,    55,    -1,   115,    -1,
     111,    -1,   113,    -1,    54,    43,    53,    55,   112,    56,
      43,    55,    -1,    54,    36,    53,    55,    79,    56,    36,
      55,    -1,    54,    49,    53,    55,    79,    56,    49,    55,
      -1,    54,     3,    53,    55,    79,    56,     3,    55,    -1,
      54,    30,    53,    55,    -1,    54,     8,    53,    55,    79,
      56,     8,    55,    -1,    54,    40,    53,    55,    79,    56,
      40,    55,    -1,    54,    16,    53,    55,    79,    56,    16,
      55,    -1,    54,    34,    53,    55,    79,    56,    34,    55,
      -1,    57,    72,    58,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    15,    15,    23,    25,    29,    34,    39,    40,    41,
      42,    43,    46,    49,    52,    56,    59,    63,    69,    69,
      73,    73,    78,    78,    78,    78,    78,    78,    82,    82,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      85,    89,    89,    89,    93,    93,    93,    97,    97,    97,
      97,   100,   100,   103,   104,   106,   107,   109,   110,   112,
     113,   115,   116,   118,   119,   123,   127,   128,   129,   133,
     137,   141,   145,   146,   150,   150,   153,   155,   156,   159,
     162,   166,   170,   171,   174,   176,   178,   183,   187,   190,
     194,   195,   197,   200,   204,   207,   210,   210,   210,   213,
     217,   220,   223,   225,   229,   232,   235,   238,   240
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
  "T_comment_open", "T_comment_close", "$accept", "document", "head",
  "header", "footer", "head_element", "title", "script", "META", "LINK",
  "style", "body", "body_tag", "body_content", "heading", "block", "font",
  "phrase", "special", "texT_Tag", "text", "h1", "h2", "h3", "h4", "h5",
  "h6", "paragraph", "list", "unordered_list", "ordered_list", "def_list",
  "list_item", "def_list_item", "dt", "dd", "preformatted", "div",
  "blockquote", "form", "BR", "HR", "IMG", "table", "caption", "tr",
  "th_or_td", "bold", "emphasize", "strong", "code", "form_field",
  "select", "select_option", "textarea", "anchor", "INPUT", "button",
  "span", "embed", "object", "comment", YY_NULL
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
       0,    59,    60,    61,    61,    62,    63,    64,    64,    64,
      64,    64,    65,    66,    67,    68,    69,    70,    71,    71,
      72,    72,    73,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    87,    87,    87,    88,
      89,    90,    91,    91,    92,    92,    93,    94,    94,    95,
      96,    97,    98,    98,    99,   100,   101,   102,   103,   104,
     105,   105,   106,   107,   108,   109,   110,   110,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     5,     4,     7,     7,     1,     1,     1,
       1,     1,     7,     8,     4,     4,     8,     8,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     1,     1,     1,     8,
       8,     8,     8,     8,     1,     1,     7,     7,     7,     7,
       8,     8,     8,     8,     4,     4,     4,     9,     8,     8,
       7,     7,     7,     7,     7,     7,     1,     1,     1,     8,
       8,     8,     8,     4,     8,     8,     8,     8,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    66,    67,    68,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,    20,     0,    18,    19,    47,    48,
      49,    52,    21,    22,    23,    24,    25,    26,    27,    50,
      46,    45,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     7,     8,    10,    11,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,    15,    14,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    81,
     104,    80,     0,     0,     0,    71,   106,   107,     0,    70,
      65,   105,     0,     0,     0,    69,     0,    92,    95,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,   102,   103,     0,     0,    83,    82,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      13,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     6,    76,    78,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,    99,   101,     0,     0,     0,     0,     0,     0,
      91,    90,     0,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    69,     4,   151,    70,    71,    72,    73,    74,
      75,   112,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    13,    14,    15,
      16,    17,   164,   158,   159,   160,    18,    19,    20,    59,
      60,    21,    61,    22,   169,   211,   371,    62,    63,    64,
      65,   219,   220,   373,   221,    66,   222,    23,    24,    25,
      26,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
     -48,   -41,    23,     5,   -16,  -116,   -12,    22,   -50,     0,
     194,   -36,     2,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,     6,    13,
      16,    17,    19,    21,    24,    25,    27,    28,    18,    29,
      30,    31,  -116,   174,  -116,    33,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,    49,    20,    34,
      42,  -116,  -116,  -116,  -116,  -116,    32,    44,    45,    46,
      48,    51,    52,    53,    54,   -20,    55,    56,    60,    36,
      63,    69,    68,    79,    82,    84,    87,    88,    89,    92,
      95,    98,    99,  -116,   100,   101,   104,   107,   108,   111,
     110,   160,   113,   143,   115,   -20,   -36,   116,   -20,  -116,
     -20,   126,   -20,    61,   127,   -20,   133,   126,   136,   -20,
     145,   -20,   -20,   149,   152,   161,   164,   165,   167,   168,
     170,   -20,  -116,   134,   171,   172,   175,   178,   -20,   182,
     220,   183,   185,   204,   187,   189,   190,    -5,   191,  -116,
    -116,   192,   196,   224,   203,   207,    47,   209,   257,   213,
     212,   -20,   214,  -116,   215,   216,   -28,    -3,    -3,    -3,
      -3,    -3,    -3,  -116,   218,   -27,   217,  -116,  -116,   -20,
     -20,   223,   221,   227,   260,  -116,   280,   281,   282,   236,
     237,   283,   278,   263,   245,   264,   265,   248,   261,   247,
     256,   249,   258,   250,   303,   299,   295,   109,   255,   259,
    -116,  -116,  -116,   246,   262,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   279,  -116,   277,   284,
     287,   -36,   -50,   286,   288,   289,   290,   -20,    -3,   291,
     292,   293,   294,   296,   297,  -116,   298,   300,   285,   306,
     301,   309,   302,   304,   305,   308,   310,   311,   317,   318,
     320,   323,   334,   338,   316,   341,   343,   344,   345,   346,
     347,   348,   312,   331,   332,   321,   319,   322,  -116,  -116,
    -116,  -116,   324,   325,   326,  -116,  -116,  -116,   -13,  -116,
    -116,  -116,   -20,   328,   329,  -116,   330,  -116,  -116,  -116,
     333,   335,   336,   337,   339,   340,   342,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,  -116,   359,   360,
    -116,   307,   362,   364,   372,   373,     7,   361,   363,   365,
     366,  -116,  -116,  -116,   368,   -20,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,   369,   370,   371,   374,   375,   367,   385,   380,
     -18,   376,   382,   377,   378,  -116,  -116,  -116,  -116,  -116,
     381,   383,   384,   386,   387,   379,   390,   388,   391,  -116,
    -116,  -116,   -36,   -36,   389,   392,   393,   394,   395,   396,
    -116,   -20,  -116,  -116,   400,   327,   397,   399,   401,   410,
    -116,  -116,   402,  -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,  -116,  -116,   176,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -115,  -116,    -6,  -116,  -116,  -116,  -116,
     -85,  -116,  -116,  -116,  -116,  -116,  -116,   200,   102,  -116,
    -116,  -116,   398,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     124,   156,    12,     1,    10,   106,   107,    11,   199,   200,
      89,    90,   108,     3,    91,   109,    42,    92,    43,    32,
     110,    11,    93,     5,    42,    94,   217,   383,   384,    11,
     155,     6,    42,   161,   123,   162,   101,   165,     7,    42,
     167,   336,    36,     8,   172,   105,   174,   175,   102,    42,
       9,   223,   106,   107,    11,    28,   184,    41,    67,   108,
      68,   218,   109,   191,    89,    90,    76,   110,    91,    77,
      78,    92,    79,    85,    80,   104,    93,    81,    82,    94,
      83,    84,    86,    87,    88,   207,   213,   114,   111,   128,
     101,   103,   225,   227,   229,   231,   233,   235,   113,   115,
     116,   117,   102,   118,   238,   239,   119,   120,   121,   122,
     125,   126,    89,    90,    29,   127,    91,    30,   129,    92,
      31,    32,   130,   131,    93,    33,   286,    94,    95,    96,
      97,    98,    99,   100,   132,   133,    34,   134,   101,   265,
     135,   136,   137,    35,    36,   138,    37,    38,   139,    39,
     102,   140,   266,    40,   141,   142,   143,   144,   267,    41,
     145,   146,   292,   294,   147,   148,   149,   150,   152,   153,
     157,   224,   226,   228,   230,   232,   234,    89,    90,    29,
     163,    91,    30,   166,    92,    31,    32,   168,   185,    93,
      33,   171,    94,    95,    96,    97,    98,    99,   100,    29,
     173,    34,    30,   101,   176,    31,    32,   177,    35,    36,
      33,    37,    38,   337,    39,   102,   178,   339,    40,   179,
     180,    34,   181,   182,    41,   183,   187,   188,    35,    36,
     189,    37,    38,   190,    39,   192,   287,   193,    40,   194,
     195,    37,   293,   196,    41,   197,   198,   201,   202,    89,
      90,    29,   203,    91,    30,   204,    92,    31,    32,   205,
     374,    93,    33,   206,    94,   208,   209,   210,   212,   237,
     214,   215,   216,    34,   236,   101,   241,   398,   399,   240,
      35,    36,   242,    37,    38,   244,    39,   102,   243,   245,
      40,   247,   248,   246,   250,   249,    41,   251,   252,   253,
     257,   256,   254,   255,   258,   259,   261,   262,   260,   263,
     264,   268,   306,   362,   154,   269,   406,     0,   270,   186,
     282,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   283,   285,   313,   314,   319,   303,   315,
     284,   288,   316,   289,   290,   291,   295,   296,   297,   298,
     304,   299,   300,   301,   317,   302,   305,   307,   318,   308,
     309,   310,   320,   311,   312,   321,   322,   327,   323,   324,
     328,   325,   326,   408,   329,   331,   330,   364,   332,   363,
     333,   334,   335,   340,   341,   342,   365,   366,   343,   382,
     344,   345,   346,     0,   347,   348,     0,   349,   380,     0,
     338,     0,     0,     0,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   381,   367,   386,   368,
     370,   369,   372,     0,   375,   376,   377,   394,     0,   378,
     379,   396,   385,   387,   388,     0,   389,     0,   390,   391,
     397,   392,   393,   395,   400,   407,   412,   401,   402,   403,
       0,   404,   405,   409,   410,     0,   411,   413,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-116)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      85,   116,     8,    51,    54,    32,    33,    57,    13,    14,
       3,     4,    39,    54,     7,    42,    52,    10,    54,    12,
      47,    57,    15,     0,    52,    18,    54,    45,    46,    57,
     115,    26,    52,   118,    54,   120,    29,   122,    54,    52,
     125,    54,    35,    55,   129,    25,   131,   132,    41,    52,
      28,    54,    32,    33,    57,    55,   141,    50,    56,    39,
      54,   176,    42,   148,     3,     4,    53,    47,     7,    53,
      53,    10,    53,    55,    53,    26,    15,    53,    53,    18,
      53,    53,    53,    53,    53,    38,   171,    55,    54,    53,
      29,    58,   177,   178,   179,   180,   181,   182,    56,    55,
      55,    55,    41,    55,   189,   190,    55,    55,    55,    55,
      55,    55,     3,     4,     5,    55,     7,     8,    55,    10,
      11,    12,    53,    55,    15,    16,   241,    18,    19,    20,
      21,    22,    23,    24,    55,    53,    27,    53,    29,    30,
      53,    53,    53,    34,    35,    53,    37,    38,    53,    40,
      41,    53,    43,    44,    55,    55,    55,    53,    49,    50,
      53,    53,   247,   248,    53,    55,     6,    54,    25,    54,
      54,   177,   178,   179,   180,   181,   182,     3,     4,     5,
      54,     7,     8,    56,    10,    11,    12,    54,    54,    15,
      16,    55,    18,    19,    20,    21,    22,    23,    24,     5,
      55,    27,     8,    29,    55,    11,    12,    55,    34,    35,
      16,    37,    38,   298,    40,    41,    55,   302,    44,    55,
      55,    27,    55,    55,    50,    55,    55,    55,    34,    35,
      55,    37,    38,    55,    40,    53,   242,    17,    44,    56,
      55,    37,   248,    56,    50,    56,    56,    56,    56,     3,
       4,     5,    56,     7,     8,    31,    10,    11,    12,    56,
     345,    15,    16,    56,    18,    56,     9,    54,    56,    52,
      56,    56,    56,    27,    56,    29,    55,   392,   393,    56,
      34,    35,    55,    37,    38,     5,    40,    41,    28,     8,
      44,    55,    55,    11,    16,    12,    50,    34,    53,    35,
      53,    40,    37,    55,    48,    56,    56,     4,    50,    10,
      15,    56,     3,     6,   114,    56,   401,    -1,    56,   143,
      41,    -1,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    47,    18,    18,    21,    53,    19,
      56,    55,    19,    55,    55,    55,    55,    55,    55,    55,
      44,    55,    55,    55,    20,    55,    55,    55,    20,    55,
      55,    53,    21,    53,    53,    22,    22,    55,    23,    23,
      39,    24,    24,    46,    42,    56,    55,    13,    56,    17,
      56,    56,    56,    55,    55,    55,    14,    14,    55,     9,
      55,    55,    55,    -1,    55,    55,    -1,    55,    31,    -1,
     298,    -1,    -1,    -1,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    31,    56,    36,    56,
      54,    56,    54,    -1,    55,    55,    55,    48,    -1,    55,
      55,    43,    56,    56,    56,    -1,    55,    -1,    55,    55,
      49,    55,    55,    53,    55,    45,    36,    55,    55,    55,
      -1,    56,    56,    56,    55,    -1,    55,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    60,    54,    62,     0,    26,    54,    55,    28,
      54,    57,    74,    86,    87,    88,    89,    90,    95,    96,
      97,   100,   102,   116,   117,   118,   119,   120,    55,     5,
       8,    11,    12,    16,    27,    34,    35,    37,    38,    40,
      44,    50,    52,    54,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    98,
      99,   101,   106,   107,   108,   109,   114,    56,    54,    61,
      64,    65,    66,    67,    68,    69,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    55,    53,    53,    53,     3,
       4,     7,    10,    15,    18,    19,    20,    21,    22,    23,
      24,    29,    41,    58,    26,    25,    32,    33,    39,    42,
      47,    54,    70,    56,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    54,    79,    55,    55,    55,    53,    55,
      53,    55,    55,    53,    53,    53,    53,    53,    53,    53,
      53,    55,    55,    55,    53,    53,    53,    53,    55,     6,
      54,    63,    25,    54,    86,    79,    72,    54,    92,    93,
      94,    79,    79,    54,    91,    79,    56,    79,    54,   103,
      91,    55,    79,    55,    79,    79,    55,    55,    55,    55,
      55,    55,    55,    55,    79,    54,    64,    55,    55,    55,
      55,    79,    53,    17,    56,    55,    56,    56,    56,    13,
      14,    56,    56,    56,    31,    56,    56,    38,    56,     9,
      54,   104,    56,    79,    56,    56,    56,    54,    72,   110,
     111,   113,   115,    54,    74,    79,    74,    79,    74,    79,
      74,    79,    74,    79,    74,    79,    56,    52,    79,    79,
      56,    55,    55,    28,     5,     8,    11,    55,    55,    12,
      16,    34,    53,    35,    37,    55,    40,    53,    48,    56,
      50,    56,     4,    10,    15,    30,    43,    49,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    41,    56,    56,    47,    72,    74,    55,    55,
      55,    55,    79,    74,    79,    55,    55,    55,    55,    55,
      55,    55,    55,    53,    44,    55,     3,    55,    55,    55,
      53,    53,    53,    18,    18,    19,    19,    20,    20,    21,
      21,    22,    22,    23,    23,    24,    24,    55,    39,    42,
      55,    56,    56,    56,    56,    56,    54,    79,    87,    79,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,     6,    17,    13,    14,    14,    56,    56,    56,
      54,   105,    54,   112,    79,    55,    55,    55,    55,    55,
      31,    31,     9,    45,    46,    56,    36,    56,    56,    55,
      55,    55,    55,    55,    48,    53,    43,    49,    72,    72,
      55,    55,    55,    55,    56,    56,    79,    45,    46,    56,
      55,    55,    36,    55
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
      
/* Line 1792 of yacc.c  */
#line 1804 "y.tab.c"
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
#line 242 "work.y"

int main(){
 return yyparse();
}
yyerror (char *s) {return(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno ; }
