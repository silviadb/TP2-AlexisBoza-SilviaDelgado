%{
#include <stdio.h>
#include <assert.h>
%}
%union{
	char *str;
}
%token T_body T_head T_html T_title T_h1 T_h2 T_h3 T_h4 T_h5 T_h6 Ident
%token OpenTag "<"
%token CloseTag ">"
%%
/*Tokens ordenados del mas general al mas especifico*/
html_tag:'<'T_html'>'head_tag body_tag"</"T_html'>'{printf("Buena");}
	;
head_tag:'<'T_head'>'title_tag"</"T_head'>'{printf("Buena");}
	;
title_tag:'<'T_title'>'Identificador"</"T_title'>'{printf("Buena");}
	;
body_tag:'<'T_body'>'contenido"</"T_body'>'{printf("Buena");}
	;
contenido: h1_tag
	|h2_tag
	|h3_tag
	|h4_tag
	|h5_tag
	|h6_tag
	;
h1_tag	:'<'T_h1'>'Identificador"</"T_h1'>'{printf("Buena");}/*porque no funciona poniendolo "</" asi*/
	;
h2_tag	:'<'T_h2'>'Identificador"</"T_h2'>'{printf("Buena");}
	;
h3_tag	:'<'T_h3'>'Identificador"</"T_h3'>'{printf("Buena");}
	;
h4_tag	:'<'T_h4'>'Identificador"</"T_h4'>'{printf("Buena");}
	;
h5_tag	:'<'T_h5'>'Identificador"</"T_h5'>'{printf("Buena");}
	;
h6_tag	:'<'T_h6'>'Identificador"</"T_h6'>'{printf("Buena");}
	;
Identificador:Ident{printf("[T_IDENT] %s",yylval.str);}
	;
%%
int main() {
 return yyparse();
}
yyerror (char *s) { printf ("%s\n", s); }
