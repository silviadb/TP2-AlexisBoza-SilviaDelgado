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
extern yylineno;

/* Line 371 of yacc.c  */
#line 74 "y.tab.c"

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
#line 6 "work.y"

	char *str;


/* Line 387 of yacc.c  */
#line 238 "y.tab.c"
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
#line 266 "y.tab.c"

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
#define YYLAST   429

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  389

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
       0,     0,     3,    17,    25,    34,    43,    51,    54,    57,
      60,    63,    65,    74,    83,    88,    93,    96,    98,   100,
     102,   104,   106,   108,   110,   112,   114,   123,   132,   141,
     150,   159,   168,   170,   172,   174,   176,   178,   180,   182,
     184,   186,   188,   190,   192,   194,   196,   198,   200,   202,
     204,   206,   208,   217,   219,   221,   223,   232,   241,   250,
     259,   268,   270,   272,   280,   288,   296,   304,   313,   322,
     331,   340,   345,   350,   355,   365,   374,   383,   391,   399,
     407,   415,   423,   431,   433,   435,   437,   446,   455,   464,
     473,   478,   487,   496,   505,   514,   518,   521,   523,   526,
     528
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    54,    51,    28,    55,    54,    28,    55,
      61,    62,    63,    56,    28,    55,    -1,    54,    26,    55,
     115,    56,    26,    55,    -1,    54,    25,    55,    64,    65,
      56,    25,    55,    -1,    54,     6,   116,    55,    70,    56,
       6,    55,    -1,    54,    47,    55,   115,    56,    47,    55,
      -1,    66,    65,    -1,    67,    65,    -1,    68,    65,    -1,
      69,    65,    -1,   117,    -1,    54,    39,   116,    55,   115,
      56,    39,    55,    -1,    54,    42,   116,    55,   115,    56,
      42,    55,    -1,    54,    33,   116,    55,    -1,    54,    32,
     116,    55,    -1,    71,    70,    -1,   115,    -1,    72,    -1,
      79,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    54,    19,   116,    55,   115,    56,
      19,    55,    -1,    54,    20,   116,    55,   115,    56,    20,
      55,    -1,    54,    21,   116,    55,   115,    56,    21,    55,
      -1,    54,    22,   116,    55,   115,    56,    22,    55,    -1,
      54,    23,   116,    55,   115,    56,    23,    55,    -1,    54,
      24,   116,    55,   115,    56,    24,    55,    -1,    80,    -1,
      81,    -1,    89,    -1,    90,    -1,    91,    -1,    94,    -1,
      96,    -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,
     114,    -1,    92,    -1,    93,    -1,    95,    -1,   100,    -1,
     101,    -1,   102,    -1,   103,    -1,   108,    -1,    54,    37,
     116,    55,   115,    56,    37,    55,    -1,    82,    -1,    83,
      -1,    84,    -1,    54,    50,   116,    55,    85,    56,    50,
      55,    -1,    54,    35,   116,    55,    85,    56,    35,    55,
      -1,    54,    12,   116,    55,    86,    56,    12,    55,    -1,
      54,    31,   116,    55,   115,    56,    31,    55,    -1,    54,
      31,   116,    55,    81,    56,    31,    55,    -1,    87,    -1,
      88,    -1,    54,    13,    55,   115,    56,    13,    55,    -1,
      54,    14,    55,   115,    56,    14,    55,    -1,    54,    14,
      55,    79,    56,    14,    55,    -1,    54,    38,    55,   115,
      56,    38,    55,    -1,    54,    11,   116,    55,    70,    56,
      11,    55,    -1,    54,     5,   116,    55,    80,    56,     5,
      55,    -1,    54,    18,   116,    55,   104,    56,    18,    55,
      -1,    54,    18,   116,    55,    70,    56,    18,    55,    -1,
      54,     7,   116,    55,    -1,    54,    27,   116,    55,    -1,
      54,    29,   116,    55,    -1,    54,    44,   116,    55,    97,
      98,    56,    44,    55,    -1,    54,     9,   116,    55,   115,
      56,     9,    55,    -1,    54,    48,   116,    55,    99,    56,
      48,    55,    -1,    54,    46,    55,    70,    56,    46,    55,
      -1,    54,    45,    55,    70,    56,    45,    55,    -1,    54,
       4,    55,   115,    56,     4,    55,    -1,    54,    15,    55,
     115,    56,    15,    55,    -1,    54,    41,    55,   115,    56,
      41,    55,    -1,    54,    10,    55,   115,    56,    10,    55,
      -1,   109,    -1,   105,    -1,   107,    -1,    54,    43,   116,
      55,   106,    56,    43,    55,    -1,    54,    36,   116,    55,
     115,    56,    36,    55,    -1,    54,    49,   116,    55,   115,
      56,    49,    55,    -1,    54,     3,   116,    55,   115,    56,
       3,    55,    -1,    54,    30,   116,    55,    -1,    54,     8,
     116,    55,   115,    56,     8,    55,    -1,    54,    40,   116,
      55,   115,    56,    40,    55,    -1,    54,    16,   116,    55,
     115,    56,    16,    55,    -1,    54,    34,   116,    55,   115,
      56,    34,    55,    -1,    57,    70,    58,    -1,    52,   115,
      -1,   117,    -1,    53,   116,    -1,   117,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    15,    15,    22,    27,    32,    38,    42,    43,    44,
      45,    46,    49,    52,    55,    58,    64,    65,    68,    69,
      72,    73,    74,    75,    76,    77,    80,    82,    84,    86,
      88,    90,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   115,   119,   120,   121,   125,   129,   133,   137,
     138,   142,   143,   146,   148,   149,   152,   155,   159,   163,
     164,   167,   169,   171,   176,   180,   183,   187,   188,   190,
     193,   197,   200,   203,   204,   205,   208,   212,   215,   218,
     220,   224,   227,   230,   233,   235,   240,   241,   244,   245,
     247
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
  "T_comment_open", "T_comment_close", "$accept", "document", "header",
  "head", "body", "title", "head_element", "script", "style", "META",
  "LINK", "body_content", "body_tag", "heading", "h1", "h2", "h3", "h4",
  "h5", "h6", "block", "paragraph", "list", "unordered_list",
  "ordered_list", "def_list", "list_item", "def_list_item", "dt", "dd",
  "preformatted", "div", "blockquote", "form", "BR", "HR", "IMG", "table",
  "caption", "tr", "th_or_td", "bold", "emphasize", "strong", "code",
  "form_field", "select", "select_option", "textarea", "anchor", "INPUT",
  "button", "span", "embed", "object", "comment", "text", "Atribute",
  "epsilon", YY_NULL
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
       0,    59,    60,    61,    62,    63,    64,    65,    65,    65,
      65,    65,    66,    67,    68,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    72,    73,    74,    75,    76,
      77,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    81,    81,    81,    82,    83,    84,    85,
      85,    86,    86,    87,    88,    88,    89,    90,    91,    92,
      92,    93,    94,    95,    96,    97,    98,    99,    99,   100,
     101,   102,   103,   104,   104,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   115,   116,   116,
     117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    13,     7,     8,     8,     7,     2,     2,     2,
       2,     1,     8,     8,     4,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     8,     8,     8,
       8,     8,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     8,     1,     1,     1,     8,     8,     8,     8,
       8,     1,     1,     7,     7,     7,     7,     8,     8,     8,
       8,     4,     4,     4,     9,     8,     8,     7,     7,     7,
       7,     7,     7,     1,     1,     1,     8,     8,     8,     8,
       4,     8,     8,     8,     8,     3,     2,     1,     2,     1,
       0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,   100,
       0,    97,     0,   100,     0,    96,     0,     0,   100,   100,
       0,    99,     0,     0,     0,     0,     0,   100,   100,   100,
     100,    11,    98,   100,     2,     3,   100,   100,   100,   100,
     100,     0,     7,     8,     9,    10,     0,   100,     0,   100,
      18,    20,    21,    22,    23,    24,    25,    19,    32,    33,
      53,    54,    55,    34,    35,    36,    44,    45,    37,    46,
      38,    47,    48,    49,    50,    51,    39,    40,    41,    42,
      43,    17,     0,     0,     0,     0,     0,     0,   100,     0,
     100,   100,   100,     0,   100,   100,     0,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
       0,   100,     0,   100,   100,     0,     0,    16,     0,    15,
      14,   100,   100,     4,     0,   100,     0,     0,     0,   100,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   100,     0,
       0,    95,     0,     0,     0,     0,   100,     0,     0,    71,
     100,     0,   100,     0,     0,   100,   100,   100,   100,   100,
     100,   100,   100,    72,    73,   100,     0,   100,     0,   100,
       0,     0,     0,     5,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     0,     0,    84,    85,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   100,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,   100,     0,     0,     0,    12,    13,     0,
      79,     0,     0,    82,     0,   100,   100,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,     0,    81,     0,   100,
       0,     0,    89,    68,    91,    67,     0,     0,     0,     0,
      58,    93,    90,     0,   100,    70,    69,    26,    27,    28,
      29,    30,    31,    94,   100,    57,    52,    92,   100,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,    63,    65,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,    86,    88,
      60,    59,    75,   100,   100,     0,     0,     0,     0,    76,
       0,     0,     0,     0,     0,     0,    87,    78,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    14,    18,    28,    36,    37,    38,    39,
      40,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,   224,   205,   206,   207,
      73,    74,    75,    76,    77,    78,    79,    80,   230,   265,
     354,    81,    82,    83,    84,   212,   213,   336,   214,    85,
     215,    86,    87,    88,    89,    90,    91,    30,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
     -52,   -37,    20,    -4,   -53,   -13,   -17,    13,   -11,    -9,
      22,    -8,    -6,    30,     2,     5,     3,    53,     4,     5,
       6,   -53,     7,    10,    36,   -53,    39,    19,    18,    10,
      12,   -53,    26,    29,    43,   -20,    17,    18,    18,    18,
      18,   -53,   -53,   -49,   -53,   -53,     5,    10,    10,    10,
      10,    49,   -53,   -53,   -53,   -53,   235,   -49,    44,   -49,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,    47,    50,    51,    52,    54,    55,    10,    56,
      10,    10,    10,    57,    10,    10,    58,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      59,    10,    60,    10,    10,    46,    69,   -53,    61,   -53,
     -53,     5,     5,   -53,    63,     5,    91,    92,    94,     5,
      95,    98,     5,    99,   101,   102,   103,   104,   106,   113,
     114,   116,   118,   123,   126,   130,     5,   131,     5,   134,
     142,   -53,   143,   145,   147,   148,     5,   149,    23,   -53,
       5,   152,   -49,   157,   158,     5,   -18,     5,     5,     5,
       5,     5,     5,   -53,   -53,     5,   163,     5,   162,     5,
     164,   165,   163,   -53,   -53,   187,   185,   173,   224,   193,
     175,   176,   223,   178,    16,   180,   -53,   -53,   222,   188,
     172,   192,   196,   -53,   -53,   -53,   207,   209,   215,   218,
     225,   226,   227,   249,   230,   231,   211,   232,   248,   281,
     237,   236,   238,   239,   292,   241,   293,   289,   245,   290,
     247,   250,   291,   251,   288,    10,    10,    10,   294,   296,
     297,   287,   298,   286,   295,   304,   276,    10,   280,   274,
     262,   299,   266,    10,   284,   277,   301,   -53,   -53,   283,
     -53,   285,   300,   -53,   303,     5,   -14,   306,   -53,   307,
     309,   310,   311,   312,   315,   316,   317,   318,   320,   321,
     322,   323,   324,   325,   326,   -53,   327,   -53,   328,    10,
     330,   329,   -53,   -53,   -53,   -53,   331,   319,   332,   333,
     -53,   -53,   -53,   282,     5,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -31,   -53,   -53,   -53,     5,   335,
     336,   -53,   334,   371,   372,   305,   337,   338,    -3,   339,
     340,   341,   344,   -53,   345,   346,   347,    10,   302,   343,
     313,   368,   394,   -35,   348,   -53,   -53,   -53,   350,   351,
     352,   353,   354,   355,   356,   357,   365,     5,   -53,   -53,
     -53,   -53,   -53,   -49,   -49,   359,   360,   361,   362,   -53,
     379,   374,   375,   367,   369,   370,   -53,   -53,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   -53,   -53,   -53,   -53,    14,   -53,   -53,   -53,
     -53,   -24,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
      66,   252,   105,   -53,   -53,   -53,   151,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -15,    21,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      20,    31,     1,    19,    25,    56,    41,    31,    57,   105,
     364,   365,    47,    48,     3,    41,    41,    41,    41,    49,
       4,    19,    50,   338,     5,    31,    31,    31,    31,   240,
     241,    92,   118,   125,    19,   127,   210,     7,    19,    57,
     307,     8,     6,    57,     9,    10,    13,   124,    12,    15,
      42,    52,    53,    54,    55,    16,    17,    19,    22,    23,
      24,    27,    26,    29,    32,    33,    34,    43,    93,    94,
      95,    96,    35,    51,    97,   162,    31,   199,    31,    31,
      31,    44,    31,    31,    45,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    46,    31,
     126,    31,    31,   128,   161,   129,   130,   131,   163,   132,
     133,   135,   139,   142,   156,   158,   164,   165,   166,   134,
     167,   136,   137,   138,   171,   140,   141,   174,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   188,   157,   190,   159,   160,   168,   169,   203,   170,
     172,   197,   211,   173,   175,   201,   176,   177,   178,   179,
     209,   180,   216,   217,   218,   219,   220,   221,   181,   182,
     222,   183,   225,   184,   227,    98,    99,   100,   185,   101,
     102,   186,   103,   104,   105,   187,   189,   106,   107,   191,
     108,   109,   110,   111,   112,   113,   114,   192,   193,   115,
     194,   116,   245,   195,   196,   198,   117,   118,   202,   119,
     120,   204,   121,   122,   208,   246,   123,   223,   226,   229,
     228,   247,   124,    31,    31,    31,   232,   233,   235,   234,
     119,   236,   237,   238,   239,    31,   242,   243,    98,    99,
     100,    31,   101,   102,   244,   103,   104,   105,   248,   260,
     106,   107,   249,   108,   109,   110,   111,   112,   113,   114,
     306,   309,   115,   250,   116,   251,   280,   281,   282,   117,
     118,   252,   119,   120,   253,   121,   122,    31,   292,   123,
     257,   254,   255,   256,   298,   124,   258,   259,   261,   262,
     263,   264,   266,   267,   268,   269,   270,   272,   271,   337,
     273,   274,   275,   277,   279,   276,   278,   286,   288,   340,
     291,   294,   283,   341,   284,   293,   285,   295,   289,   287,
     329,   297,    98,    99,   100,    31,   101,   102,   290,   103,
     104,   105,   299,   300,   106,   107,   335,   108,   302,   296,
     303,   347,   308,   231,   361,   359,   115,   344,   116,   377,
     378,   301,   376,   117,   118,   304,   119,   120,   305,   121,
     122,   310,   311,   123,   312,   313,   314,   315,   358,   124,
     316,   317,   318,   319,   330,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   331,   345,   346,   332,   333,   334,
     342,   343,   360,   348,   349,   350,   351,   352,   353,   362,
     355,   356,   357,   363,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   379,   383,   380,   381,   382,   384,
     200,   385,   386,     0,   387,   388,     0,     0,     0,   339
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    23,    54,    52,    19,    54,    28,    29,    57,    12,
      45,    46,    32,    33,    51,    37,    38,    39,    40,    39,
       0,    52,    42,    54,    28,    47,    48,    49,    50,    13,
      14,    46,    35,    57,    52,    59,    54,    54,    52,    57,
      54,    28,    55,    57,    55,    54,    54,    50,    26,    55,
      29,    37,    38,    39,    40,    25,    54,    52,    55,     6,
      56,    54,    56,    53,    28,    26,    47,    55,    47,    48,
      49,    50,    54,    56,    25,     6,    98,    54,   100,   101,
     102,    55,   104,   105,    55,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    55,   121,
      56,   123,   124,    56,    58,    55,    55,    55,    47,    55,
      55,    55,    55,    55,    55,    55,   131,   132,    55,    98,
     135,   100,   101,   102,   139,   104,   105,   142,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   156,   121,   158,   123,   124,    55,    55,   172,    55,
      55,   166,   176,    55,    55,   170,    55,    55,    55,    55,
     175,    55,   177,   178,   179,   180,   181,   182,    55,    55,
     185,    55,   187,    55,   189,     3,     4,     5,    55,     7,
       8,    55,    10,    11,    12,    55,    55,    15,    16,    55,
      18,    19,    20,    21,    22,    23,    24,    55,    55,    27,
      55,    29,    30,    56,    56,    56,    34,    35,    56,    37,
      38,    54,    40,    41,    56,    43,    44,    54,    56,    54,
      56,    49,    50,   245,   246,   247,    39,    42,     4,    56,
      37,    56,    56,    10,    56,   257,    56,    15,     3,     4,
       5,   263,     7,     8,    56,    10,    11,    12,    56,    38,
      15,    16,    56,    18,    19,    20,    21,    22,    23,    24,
     275,   276,    27,    56,    29,    56,   245,   246,   247,    34,
      35,    56,    37,    38,    56,    40,    41,   299,   257,    44,
      31,    56,    56,    56,   263,    50,    56,    56,    56,    41,
       9,    54,    56,    55,    55,     3,    55,     8,     5,   314,
      55,    11,    55,    12,    16,    55,    55,    20,    22,   324,
      34,    37,    18,   328,    18,    35,    19,    55,    23,    21,
     299,    55,     3,     4,     5,   347,     7,     8,    24,    10,
      11,    12,    48,    56,    15,    16,    54,    18,    55,    40,
      55,    36,   276,   192,    31,    43,    27,    13,    29,   373,
     374,    50,   367,    34,    35,    55,    37,    38,    55,    40,
      41,    55,    55,    44,    55,    55,    55,    55,   347,    50,
      55,    55,    55,    55,    44,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    14,    14,    56,    56,    56,
      55,    55,    49,    56,    56,    56,    56,    56,    54,    31,
      55,    55,    55,     9,    56,    55,    55,    55,    55,    55,
      55,    55,    55,    48,    55,    36,    56,    56,    56,    45,
     168,    46,    55,    -1,    55,    55,    -1,    -1,    -1,   324
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    60,    51,     0,    28,    55,    54,    28,    55,
      54,    61,    26,    54,    62,    55,    25,    54,    63,    52,
     115,   117,    55,     6,    56,   115,    56,    54,    64,    53,
     116,   117,    28,    26,    47,    54,    65,    66,    67,    68,
      69,   117,   116,    55,    55,    55,    55,    32,    33,    39,
      42,    56,    65,    65,    65,    65,    54,    57,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    89,    90,    91,    92,    93,    94,    95,
      96,   100,   101,   102,   103,   108,   110,   111,   112,   113,
     114,   115,   115,   116,   116,   116,   116,    25,     3,     4,
       5,     7,     8,    10,    11,    12,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    27,    29,    34,    35,    37,
      38,    40,    41,    44,    50,    70,    56,    70,    56,    55,
      55,    55,    55,    55,   116,    55,   116,   116,   116,    55,
     116,   116,    55,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,    55,   116,    55,   116,
     116,    58,     6,    47,   115,   115,    55,   115,    55,    55,
      55,   115,    55,    55,   115,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,   115,    55,
     115,    55,    55,    55,    55,    56,    56,   115,    56,    54,
      80,   115,    56,    70,    54,    86,    87,    88,    56,   115,
      54,    70,   104,   105,   107,   109,   115,   115,   115,   115,
     115,   115,   115,    54,    85,   115,    56,   115,    56,    54,
      97,    85,    39,    42,    56,     4,    56,    56,    10,    56,
      13,    14,    56,    15,    56,    30,    43,    49,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    31,    56,    56,
      38,    56,    41,     9,    54,    98,    56,    55,    55,     3,
      55,     5,     8,    55,    11,    55,    55,    12,    55,    16,
     116,   116,   116,    18,    18,    19,    20,    21,    22,    23,
      24,    34,   116,    35,    37,    55,    40,    55,   116,    48,
      56,    50,    55,    55,    55,    55,   115,    54,    79,   115,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,   116,
      44,    55,    56,    56,    56,    54,   106,   115,    54,    81,
     115,   115,    55,    55,    13,    14,    14,    36,    56,    56,
      56,    56,    56,    54,    99,    55,    55,    55,   116,    43,
      49,    31,    31,     9,    45,    46,    56,    55,    55,    55,
      55,    55,    55,    55,    55,    48,   115,    70,    70,    55,
      56,    56,    56,    36,    45,    46,    55,    55,    55
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
#line 20 "work.y"
    {printf("!DOCTYPE\n");}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 24 "work.y"
    {printf("<header>\n");}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 30 "work.y"
    {printf("<head>\n");}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 38 "work.y"
    {printf("<title>\n");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 42 "work.y"
    {printf("<head_element>\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 43 "work.y"
    {printf("<head_element>\n");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 44 "work.y"
    {printf("<head_element>\n");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 45 "work.y"
    {printf("<head_element>\n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 49 "work.y"
    {printf("<script>\n");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 52 "work.y"
    {printf("<style>\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 55 "work.y"
    {printf("<meta>\n");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 58 "work.y"
    {printf("<link>\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 64 "work.y"
    {printf("<body_element>\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 65 "work.y"
    {printf("<body_element>\n");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 72 "work.y"
    {printf("<h1>\n");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 73 "work.y"
    {printf("<h2>\n");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 74 "work.y"
    {printf("<h3>\n");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 75 "work.y"
    {printf("<h4>\n");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 76 "work.y"
    {printf("<h5>\n");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 77 "work.y"
    {printf("<h6>\n");}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 240 "work.y"
    {printf("Identificador= ");}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 244 "work.y"
    {printf("Atributo\n");}
    break;


/* Line 1792 of yacc.c  */
#line 1900 "y.tab.c"
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
#line 249 "work.y"

int main(){
 return yyparse();
}
yyerror (char *s) {fprintf(stderr,"Syntax Error near: %s at line: %d\n",yylval.str,yylineno);}
