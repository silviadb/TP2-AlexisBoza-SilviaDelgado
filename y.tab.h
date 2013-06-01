/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
typedef int YYSTYPE;
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
