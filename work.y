%{
#include <stdio.h>
#include <assert.h>
extern yylineno;
%}
%union{
	char *str;
}
%token  T_a T_b T_blockquote T_body T_br T_button T_caption T_code T_div T_dl T_dt T_dd T_em T_embed T_footer T_form T_h1 
%token  T_h2 T_h3 T_h4 T_h5 T_h6 T_head T_header T_hr T_html T_img T_input T_li T_link T_meta T_object T_ol T_option T_p 
%token  T_pre T_script T_span T_strong T_style T_select T_table T_td T_th T_title T_tr T_textarea T_ul T_DOCTYPE  T_IDENT T_ATT 
%token  T_Tag T_TagClose T_FinalTag T_comment_open T_comment_close 
%%
/*Tokens ordenados del mas general al mas especifico*/
document: 	T_Tag T_DOCTYPE T_html T_TagClose 
		T_Tag T_html T_TagClose
                header  
		head
		body
		T_FinalTag T_html T_TagClose{printf("!DOCTYPE\n");}
	;
header	: 	T_Tag T_header T_TagClose 
		text
		T_FinalTag T_header T_TagClose{printf("<header>\n");}
       	;

head	: 	T_Tag T_head T_TagClose
		title
		head_element
		T_FinalTag T_head T_TagClose{printf("<head>\n");}
	;
body	: 	T_Tag T_body Atribute T_TagClose  
		body_content  
		T_FinalTag T_body T_TagClose  
	;

/*TAGS DEL ENCABEZADO*/
title	:	T_Tag T_title T_TagClose text T_FinalTag T_title T_TagClose{printf("<title>\n");}
	;

head_element
	:	script head_element {printf("<head_element>\n");}
	|	style head_element {printf("<head_element>\n");}
	|	META head_element {printf("<head_element>\n");}
	|	LINK head_element {printf("<head_element>\n");}
	|	epsilon
	;

script	:	T_Tag T_script Atribute T_TagClose text T_FinalTag T_script T_TagClose{printf("<script>\n");}
	;
style
	:	T_Tag T_style Atribute T_TagClose text T_FinalTag T_style T_TagClose{printf("<style>\n");}
	;
META
	: 	T_Tag T_meta Atribute T_TagClose{printf("<meta>\n");}
	;
LINK
	:	T_Tag T_link Atribute T_TagClose{printf("<link>\n");}
	;
/*FIN DE LOS TAGS DEL ENCABEZADO*/

/*TAGS DEL BODY*/
body_content
	: 	body_tag body_content {printf("<body_element>\n");}
	| 	text      {printf("<body_element>\n");}
	;
body_tag
	: 	heading 
	|	block  
	;
heading
	:	h1 {printf("<h1>\n");}
	|	h2 {printf("<h2>\n");}
	| 	h3 {printf("<h3>\n");}
	| 	h4 {printf("<h4>\n");}
	| 	h5 {printf("<h5>\n");}
	| 	h6 {printf("<h6>\n");}
	;

h1	:	T_Tag T_h1 Atribute T_TagClose text T_FinalTag T_h1 T_TagClose
	;
h2	:	T_Tag T_h2 Atribute T_TagClose text T_FinalTag T_h2 T_TagClose
	;
h3	:	T_Tag T_h3 Atribute T_TagClose text T_FinalTag T_h3 T_TagClose
	;
h4	:	T_Tag T_h4 Atribute T_TagClose text T_FinalTag T_h4 T_TagClose
	;
h5	:	T_Tag T_h5 Atribute T_TagClose text T_FinalTag T_h5 T_TagClose
	;
h6	:	T_Tag T_h6 Atribute T_TagClose text T_FinalTag T_h6 T_TagClose
	;
block
	:	paragraph  
	| 	list 
	| 	preformatted  
	| 	div 
	| 	blockquote 
	| 	HR 
	|	table 
	|	button 
	| 	span 
	| 	embed 
	|	object 
	| 	comment 
	|	form
	|	BR
	|	IMG	
	|	bold
	|	emphasize
	| 	strong
	|	code
	|	anchor
	;
paragraph
	:	T_Tag T_p Atribute T_TagClose  text  T_FinalTag T_p T_TagClose	
	;

list
        :	unordered_list
	|	ordered_list
	|	def_list
	;

unordered_list
	:	 T_Tag T_ul Atribute T_TagClose  list_item T_FinalTag T_ul T_TagClose
	;

ordered_list
	:	T_Tag T_ol Atribute T_TagClose  list_item T_FinalTag T_ol T_TagClose
	;

def_list
	:	T_Tag T_dl Atribute T_TagClose  def_list_item T_FinalTag T_dl T_TagClose 
	;

list_item
	:	T_Tag T_li  Atribute T_TagClose  text  T_FinalTag T_li T_TagClose
        |       T_Tag T_li  Atribute T_TagClose  list  T_FinalTag T_li T_TagClose	
	;
	
def_list_item
	:	dt 
	| 	dd
	;

dt	:	T_Tag T_dt  T_TagClose text T_FinalTag T_dt T_TagClose
	;
dd	:	T_Tag T_dd  T_TagClose text T_FinalTag T_dd T_TagClose
		| T_Tag T_dd  T_TagClose block T_FinalTag T_dd T_TagClose
	;
preformatted
	:	T_Tag T_pre  T_TagClose text T_FinalTag T_pre T_TagClose
	;

div	:	T_Tag T_div Atribute T_TagClose body_content T_FinalTag T_div T_TagClose		
	;

blockquote
	:	T_Tag T_blockquote Atribute T_TagClose paragraph T_FinalTag T_blockquote T_TagClose
	;

form
 	:	T_Tag T_form Atribute T_TagClose form_field   T_FinalTag T_form T_TagClose
        |       T_Tag T_form Atribute T_TagClose body_content T_FinalTag T_form T_TagClose
	;
BR
	:	T_Tag T_br Atribute T_TagClose 
	;
HR	:	T_Tag T_hr Atribute T_TagClose
	;
IMG	:	T_Tag T_img Atribute T_TagClose
	;


table
	:	T_Tag T_table Atribute T_TagClose caption tr  T_FinalTag T_table T_TagClose
	;

caption
	:	T_Tag T_caption Atribute T_TagClose text T_FinalTag T_caption T_TagClose	
	;

tr	:	T_Tag T_tr Atribute T_TagClose th_or_td T_FinalTag T_tr T_TagClose
	;

th_or_td
	:       T_Tag T_th T_TagClose  body_content T_FinalTag T_th T_TagClose 
        |       T_Tag T_td T_TagClose  body_content T_FinalTag T_td T_TagClose 
	;
bold:	        T_Tag T_b T_TagClose   text  T_FinalTag T_b T_TagClose
	;
emphasize
	:	T_Tag T_em T_TagClose  text  T_FinalTag T_em T_TagClose
	;

strong
	:	T_Tag T_strong T_TagClose  text  T_FinalTag T_strong T_TagClose
	;
code
	:	T_Tag T_code T_TagClose  text  T_FinalTag T_code T_TagClose
	;
form_field
	:	INPUT 
	| 	select 
	| 	textarea
	;
select
	:	T_Tag T_select Atribute T_TagClose  select_option  T_FinalTag T_select T_TagClose
	;

select_option
	:	T_Tag T_option Atribute T_TagClose text T_FinalTag T_option T_TagClose
	;
textarea
	:	T_Tag T_textarea Atribute T_TagClose  text T_FinalTag T_textarea T_TagClose
	;
anchor	
	:	T_Tag T_a Atribute T_TagClose text T_FinalTag T_a T_TagClose
	;
INPUT   :	T_Tag T_input Atribute T_TagClose 
	;

button 
        :	T_Tag T_button Atribute T_TagClose text T_FinalTag T_button T_TagClose
        ;
span 
        :	T_Tag T_span Atribute T_TagClose text T_FinalTag T_span T_TagClose
        ;
embed 
        :	T_Tag T_embed Atribute T_TagClose text T_FinalTag T_embed T_TagClose
        ;
object 
        :	T_Tag T_object Atribute T_TagClose text T_FinalTag T_object T_TagClose
        ;
comment :	T_comment_open body_content T_comment_close
	;

/*FIN DE LOS TAGS DEL BODY*/

text	:	T_IDENT text{printf("Identificador= ");}
	| 	epsilon 
	;

Atribute : 	T_ATT Atribute {printf("Atributo\n");}
	|	epsilon
	;
epsilon :	/*EPSILON*/
	;
ATT     :       T_ATT  ATT
        |
        ;
%%
int main(){
 return yyparse();
}
yyerror (char *s) {fprintf(stderr,"Syntax Error near: %s at line: %d\n",yylval.str,yylineno);}
