%{
#include "y.tab.h"
#include <stdio.h>
#include <math.h>
int T_identificador = 0;/*valor default 0(no tag) y 1(tag)*/
%} 
/*definiciones*/
DocType !DOCTYPE
Size size
Char char
Tag <
TagClose >
FinalTagClose "</"
CommentOpenTag "<--"
CommentCloseTag "-->"
Equal =
Parentesis "()"
Ident  [a-z,A-Z,0-9,".",":",",","/","\-","_",'\\']+
Expresion "\""+{Ident}+"\""
Funcion "\""+{Ident}+{Parentesis}"\""
/*fin definiciones*/
%%
body {if(T_identificador == 1) return T_body;}
head {if(T_identificador == 1) return T_head;}
html {if(T_identificador == 1) return T_html;}
title {if(T_identificador == 1) return T_title;}
h1 {if(T_identificador == 1) return T_h1;}
{Tag}	{T_identificador=1;return T_Tag;}
{TagClose} {T_identificador=0;return T_TagClose;}
{Ident} {yylval.str=strdup(yytext);return Ident;}
{FinalTagClose}  {T_identificador=1; return T_FinalTag;}
á fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);/*ERRORES*/
à fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
é fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
è fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
í fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
ì fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
ó fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
ò fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
ú fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
ù fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
@ fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
ñ fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
[\n]+ {++yylineno;}
[\t\n]+
" " ;/*AL parecer el t no toma los espacios solo los tabs*/
. fprintf(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno);
%%
