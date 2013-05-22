%{
#include <stdio.h>
#include <assert.h>
%}
%union{
	char *str;
}
%token T_body T_head T_html T_title T_h1 Ident T_Tag
%token T_TagClose T_FinalTag 
%%
/*Tokens ordenados del mas general al mas especifico*/
html_tag:T_Tag T_html T_TagClose head_tag body_tag T_FinalTag T_html T_TagClose {printf("Buena");}
	;
head_tag:T_Tag T_head T_TagClose title_tag T_FinalTag T_head T_TagClose{printf("Buena");}
	;
title_tag:T_Tag T_title T_TagClose Identificador T_FinalTag T_title T_TagClose{printf("Buena");}
	;
body_tag:T_Tag T_body T_TagClose contenido T_FinalTag T_body T_TagClose{printf("Buena");}
	;
contenido: h1_tag
	;
h1_tag	:T_Tag T_h1 T_TagClose Identificador T_FinalTag T_h1 T_TagClose{printf("Buena");}/*porque no funciona poniendolo "</" asi*/
	;
Identificador:Ident{printf("[T_IDENT] %s",yylval.str);}
	;
%%
int main() {
 return yyparse();
}
yyerror (char *s) { printf ("%s\n", s); }
