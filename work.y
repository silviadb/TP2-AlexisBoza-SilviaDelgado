%{
#include <stdio.h>
#include <assert.h>

%}
%token  T_a T_b T_blockquote T_body T_br T_button T_caption T_code T_div T_dl T_dt T_dd T_em T_embed T_footer T_form T_h1 
%token  T_h2 T_h3 T_h4 T_h5 T_h6 T_head T_header T_hr T_html T_img T_input T_li T_link T_meta T_object T_ol T_option T_p 
%token  T_pre T_script T_span T_strong T_style T_select T_table T_td T_th T_title T_tr T_textarea T_ul T_DOCTYPE  T_IDENT T_ATT 
%token  T_Tag T_TagClose T_FinalTag T_comment_open T_comment_close 
%%
/*Tokens ordenados del mas general al mas especifico*/
document
  : 	T_DOCTYPE 
                header 
		T_Tag T_html T_TagClose 
		head
		body
                footer 
		T_FinalTag T_html T_TagClose
	;
head: 	T_Tag T_head T_TagClose 
		 head_element
		T_IDENT | head_element 
		T_FinalTag T_head T_TagClose 
	;
header: 
	T_Tag T_header T_TagClose 
		 block
		T_FinalTag T_header T_TagClose 
       ;
footer: 
	T_Tag T_footer T_TagClose 
		 block
		T_FinalTag T_footer T_TagClose 
       ;
head_element
	:	title	//bug need at least a title, rest optional
	|	script
	|	style
	|	META
	|	LINK
	;
title
	:	T_Tag T_title T_TagClose text T_FinalTag T_title T_TagClose
	;
script
	:	T_Tag T_script T_ATT T_TagClose text T_FinalTag T_script T_TagClose
	;
META
	: 	T_Tag T_meta T_ATT T_TagClose
	;

LINK
	:	T_Tag T_link  T_ATT T_TagClose	
	;
style
	:	T_Tag T_style T_ATT T_TagClose text T_FinalTag T_style T_TagClose
	;


body: 	 T_Tag T_body T_ATT T_TagClose  
		 body_content  
		 T_FinalTag T_body T_TagClose  
	;

body_tag
	: 	heading | block 
	;

body_content
	: 	body_tag | text
	;


heading
	:	h1 | h2 | h3 | h4 | h5 | h6
	;

block
	:	paragraph | list | preformatted  | div 
		| blockquote | HR | table | button | span | embed |object | comment
	;
font:	  bold 
	;

phrase
	:	emphasize | strong | code 
	;
	
special
	:	anchor | IMG | BR 
	;

texT_Tag
	:         font | phrase | special | form
	;

text:	T_IDENT | texT_Tag
	;

h1	:	T_Tag T_h1 T_ATT T_TagClose block T_FinalTag T_h1 T_TagClose
        |       T_Tag T_h1 T_ATT T_TagClose text T_FinalTag T_h1 T_TagClose
	;
h2	:	T_Tag T_h2 T_ATT T_TagClose block T_FinalTag T_h2 T_TagClose
        |       T_Tag T_h2 T_ATT T_TagClose text T_FinalTag T_h2 T_TagClose
	;
h3	:	T_Tag T_h3 T_ATT T_TagClose block T_FinalTag T_h3 T_TagClose
        |       T_Tag T_h3 T_ATT T_TagClose text T_FinalTag T_h3 T_TagClose
	;
h4	:	T_Tag T_h4 T_ATT T_TagClose block T_FinalTag T_h4 T_TagClose
        |       T_Tag T_h4 T_ATT T_TagClose text T_FinalTag T_h4 T_TagClose
	;
h5	:	T_Tag T_h5 T_ATT T_TagClose block T_FinalTag T_h5 T_TagClose
        |       T_Tag T_h5 T_ATT T_TagClose text T_FinalTag T_h5 T_TagClose
	;
h6	:	T_Tag T_h6 T_ATT T_TagClose block T_FinalTag T_h6 T_TagClose
        |       T_Tag T_h6 T_ATT T_TagClose text T_FinalTag T_h6 T_TagClose
	;

paragraph
	:	T_Tag T_p  T_ATT T_TagClose  text  T_FinalTag T_p T_TagClose	
	;

list
        :	unordered_list
	|	ordered_list
	|	def_list
	;

unordered_list
	:	 T_Tag T_ul  T_ATT T_TagClose  list_item T_FinalTag T_ul T_TagClose
	;

ordered_list
	:	T_Tag T_ol  T_ATT T_TagClose  list_item T_FinalTag T_ol T_TagClose
	;

def_list
	:	T_Tag T_dl  T_ATT T_TagClose  def_list_item T_FinalTag T_dl T_TagClose 
	;

list_item
	:	T_Tag T_li  T_ATT T_TagClose  text  T_FinalTag T_li T_TagClose
        |       T_Tag T_li  T_ATT T_TagClose  list  T_FinalTag T_li T_TagClose	
	;
	
def_list_item
	:	dt | dd
	;

dt	:	T_Tag T_dt  T_TagClose text T_FinalTag T_dt T_TagClose
	;
dd	:	T_Tag T_dd  T_TagClose text T_FinalTag T_dd T_TagClose
		| T_Tag T_dd  T_TagClose block T_FinalTag T_dd T_TagClose
	;
preformatted
	:	T_Tag T_pre  T_TagClose text T_FinalTag T_pre T_TagClose
	;

div	:	T_Tag T_div T_ATT T_TagClose body_content T_FinalTag T_div T_TagClose		
	;

blockquote
	:	T_Tag T_blockquote T_ATT T_TagClose paragraph T_FinalTag T_blockquote T_TagClose
	;

form
 	:	T_Tag T_form T_ATT T_TagClose form_field   T_FinalTag T_form T_TagClose
        |       T_Tag T_form T_ATT T_TagClose body_content T_FinalTag T_form T_TagClose
	;
BR
	:	T_Tag T_br T_ATT T_TagClose 
	;
HR	:	T_Tag T_hr T_ATT T_TagClose
	;
IMG	:	T_Tag T_img T_ATT T_TagClose
	;


table
	:	T_Tag T_table T_ATT T_TagClose caption tr  T_FinalTag T_table T_TagClose
	;

caption
	:	T_Tag T_caption T_ATT T_TagClose text T_FinalTag T_caption T_TagClose	
	;

tr	:	T_Tag T_tr T_ATT T_TagClose th_or_td T_FinalTag T_tr T_TagClose
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
	:	INPUT | select | textarea
	;
select
	:	T_Tag T_select T_ATT T_TagClose  select_option  T_FinalTag T_select T_TagClose
	;

select_option
	:	T_Tag T_option T_ATT T_TagClose text T_FinalTag T_option T_TagClose
	;
textarea
	:	T_Tag T_textarea T_ATT T_TagClose  text T_FinalTag T_textarea T_TagClose
	;
anchor	
	:	T_Tag T_a T_ATT T_TagClose text T_FinalTag T_a T_TagClose
	;
INPUT   :	T_Tag T_input T_ATT T_TagClose 
	;

button 
        :	T_Tag T_button T_ATT T_TagClose text T_FinalTag T_button T_TagClose
        ;
span 
        :	T_Tag T_span T_ATT T_TagClose text T_FinalTag T_span T_TagClose
        ;
embed 
        :	T_Tag T_embed T_ATT T_TagClose text T_FinalTag T_embed T_TagClose
        ;
object 
        :	T_Tag T_object T_ATT T_TagClose text T_FinalTag T_object T_TagClose
        ;
comment :       T_comment_open body_content T_comment_close 
	;

%%
int main {
 return yyparse;
}
yyerror char s { freturn(stderr,"Error: Unrecognized character: %s at line: %d\n",yytext,yylineno ; }
