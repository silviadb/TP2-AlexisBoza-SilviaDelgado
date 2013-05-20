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
body {if(T_identificador == 1) return "[T_body]";}
head {if(T_identificador == 1) return"[T_head]";}
html {if(T_identificador == 1) return "[T_html]";}
{Tag}	{T_identificador=1;return "[<]";}
{TagClose} {T_identificador=0;return "[>]";}
{FinalTagClose}  {T_identificador=1; return "[</]";}
{CommentOpenTag} {T_identificador=1;return "[<--]";}
CommentCloseTag  {T_identificador=0;return "[-->]";}
{Expresion} {yylval= ytext ; return "[T_EXP]";}
%%
