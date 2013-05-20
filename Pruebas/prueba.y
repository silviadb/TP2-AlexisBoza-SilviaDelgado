%{
#include <stdio.h>
#include <assert.h>
%}
%token [T_html] [<] [<] [>] [</] 
%%
html_tag:[<][T_html][>][</][T_html][>]{printf("buena");}
	|
	; 
%%

