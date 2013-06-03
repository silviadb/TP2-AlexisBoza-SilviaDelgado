/*********************************
Insitituto Tecnologico de Costa Rica
Compiladores e Interpretes
Alexis Boza 
Silvia Delgado
2013
ANALIZADOR SINTACTICO
**********************************/
%{
#include <stdio.h>
#include <assert.h>
#include "tree.c"//Arbol de parsing
//Importamos la variable yylineno para el conteo de linea
extern yylineno;
%}
/******************************************************************
La declaracion %union define la estructura que el analizador 
lexico utilizara para pasar lexemas al analizador
*******************************************************************/
%union{
	char *str;
}
/******************************************************************
Definicion de los simbolos que representan los valores que seran
devueltos por el analizador lexico y que corresponden con los 
terminales de varias reglas del parser
*******************************************************************/
%token  T_a T_b T_blockquote T_body T_br T_button T_caption T_code T_div T_dl T_dt T_dd T_em T_embed T_footer T_form T_h1 
%token  T_h2 T_h3 T_h4 T_h5 T_h6 T_head T_header T_hr T_html T_img T_input T_li T_link T_meta T_object T_ol T_option T_p 
%token  T_pre T_script T_span T_strong T_style T_select T_table T_td T_th T_title T_tr T_textarea T_ul T_DOCTYPE  T_IDENT T_ATT 
%token  T_Tag T_TagClose T_FinalTag T_comment_open T_comment_close 
%%
/*************************************************************
Definicion de la gramatica, las reglas se encuentran ordenadas
segun su relevancia (de la mas general a la mas especifica)
**************************************************************/
/***************************************
Elementos Principales del Documento HTML
-!DOCTYPE
-html
-header
-head
-body
-footer
***************************************/
document: 	T_Tag T_DOCTYPE T_html T_TagClose {Agrega_nodo(&root,"!DOCTYPE");}  
		T_Tag T_html T_TagClose{Agrega_nodo(&root,"html");}//<html>
                header  //Header Content 
		head    //Head Content
		body	//Body Content
		footer	//Footer Content
		T_FinalTag T_html T_TagClose//</html>
	;
header	: 	T_Tag T_header T_TagClose {insertar_nodo("html","header");}//<header> 
		text	//Texto(identificadores) dentro de la etiqueta		
		T_FinalTag T_header T_TagClose  //</header>
       	;

head	: 	T_Tag T_head T_TagClose{insertar_nodo("html","head");}//<head>
		title	//Titulo: es necesario en el Head
		head_element //Conjunto de elementos que pueden aparacer dentro de la etiqueta del head
		T_FinalTag T_head T_TagClose//</head>
	;
body	: 	T_Tag T_body Atribute T_TagClose{insertar_nodo("html","body");} //<body>
		body_content  //Conjunto de elementos que pueden aparecer dentro de la etiqueta del body
		T_FinalTag T_body T_TagClose  //</body>
	;
footer	: 	T_Tag T_footer T_TagClose{insertar_nodo("html","footer");}//<footer>
		text	//Texto dentro de la etiqueta
		T_FinalTag T_footer T_TagClose //</footer>
	;

/******************************
Elementos de la etiqueta <head>
*******************************/
title	:	T_Tag T_title T_TagClose//<title>
		text //Titulo de la pagina
		T_FinalTag T_title T_TagClose//</title>
	;

head_element
	:	script head_element 	//Elemento Script
	|	style head_element 	//Elemento Style
	|	META head_element  	//Elemento meta
	|	LINK head_element  	//Elemento link
	|	epsilon			//la etiqueta <head> puede estar vacia por lo que deriva a Epsilon
	;

script	:	T_Tag T_script 
		Atribute //Atributos del script 
		T_TagClose//<script>
		text //Texto dentro de la etiqueta 
		T_FinalTag T_script T_TagClose//</script>
	;
style	:	T_Tag T_style 
		Atribute //Atributos del style
		T_TagClose //<style>
		text //Texto dentro de la etiqueta 
		T_FinalTag T_style T_TagClose//</style>
	;
META
	: 	T_Tag T_meta  
		Atribute //Atributos de la etiqueta
		T_TagClose//<meta>
	;
LINK
	:	T_Tag T_link 
		Atribute //Atributos de la etiqueta
		T_TagClose//<link>
	;
/**************FIN DE LOS TAGS DEL ENCABEZADO************/

/********************************
Elementos de la etiqueta <body>
*********************************/
body_content
	: 	body_tag body_content//Conjunto de etiquetas o elementos que forman el contenido del body
	| 	text   //texto dentro del body  
	;
body_tag
	: 	heading //Etiquetas de heading (h1-h6)
	|	block  //Etiquetas de cuerpo o bloque
	;
heading		//Etiquetas h1-h6
	:	h1 
	|	h2 
	| 	h3 
	| 	h4 
	| 	h5 
	| 	h6 
	;

h1	:	T_Tag T_h1 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<h1>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_h1 T_TagClose	//</h1>
	;
h2	:	T_Tag T_h2 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<h2>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_h2 T_TagClose	//<h2>
	;
h3	:	T_Tag T_h3 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<h3>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_h3 T_TagClose	//</h3>
	;
h4	:	T_Tag T_h4 
		Atribute	//Atributos de la etiqueta 
		T_TagClose 	//<h4>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_h4 T_TagClose	//</h4>
	;
h5	:	T_Tag T_h5
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<h5>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_h5 T_TagClose	//</h5>
	;
h6	:	T_Tag T_h6 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<h6>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_h6 T_TagClose	//</h6>
	;
block		//Etiquetas o elementos de bloque o contenido 
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
	:	T_Tag T_p 
		Atribute	//Atributos de la etiqueta 
		T_TagClose  	//<p>
		text  		//Texto dentro de la etiqueta
		T_FinalTag T_p T_TagClose	//</p>	
	;

list		//Listas XHTML ordenadas y desordenadas
        :	unordered_list	//Desordenadas
	|	ordered_list	//Ordenadas
	|	def_list	//Descriptivas
	;

unordered_list	//Listas Desordenadas
	:	T_Tag T_ul 
		Atribute	//Atributos de la etiqueta
		T_TagClose  	//<ul>
		list_item	//Item de la lista 
		T_FinalTag T_ul T_TagClose	//</ul>
	;

ordered_list	//Listas Ordenadas
	:	T_Tag T_ol 
		Atribute	//Atributos de la etiqueta 
		T_TagClose  	//<ol>
		list_item 	//Item de la Lista
		T_FinalTag T_ol T_TagClose	//</ol>
	;

def_list	//Listas Descriptivas
	:	T_Tag T_dl 
		Atribute 	//Atributos de la etiqueta
		T_TagClose  	//<dl>
		def_list_item 	//Item de la Lista
		T_FinalTag T_dl T_TagClose 	//</dl>
	;

list_item	//Un Item de una lista puede poseer solo texto o sublistas
	:	//Item con solo texto
		T_Tag T_li  
		Atribute 	//Atributos de la etiqueta
		T_TagClose  	//<li>
		text  		//Texto dentro de la etiqueta
		T_FinalTag T_li T_TagClose list_item	//</li>
		//Item con Sublistas
        |       T_Tag T_li  
		Atribute	//Atributos de la etiqueta 
		T_TagClose  	//<li>
		list  		//Sublistas
		T_FinalTag T_li T_TagClose list_item	//</li>	
	|	epsilon		//Puede derivar en epsilon
	;
	
def_list_item	//Items de las listas descriptivas
	:	dt def_list_item	//Define terminos/nombres
	| 	dd def_list_item	//Descripcion de cada termino/nombre
	|	epsilon
	;

dt	:	T_Tag T_dt  T_TagClose	//<dt>
		text 	//Texto dentro de la etiqueta
		T_FinalTag T_dt T_TagClose	//</dt>
	;
dd	:	T_Tag T_dd  T_TagClose	//<dd>
		text //Texto dentro de la etiqueta
		T_FinalTag T_dd T_TagClose	//</dd>
	;
preformatted
	:	T_Tag T_pre  T_TagClose	//<pre>
		text 	//Texto dentro de la etiqueta
		T_FinalTag T_pre T_TagClose	//</pre>
	;

div	:	T_Tag T_div 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<div>
		body_content 	//Un div puede contener varios elementos
		T_FinalTag T_div T_TagClose		//</div>
	;

blockquote
	:	T_Tag T_blockquote 
		Atribute	//Atributos de la etiqueta 
		T_TagClose 	//<blockquote>
		block 	//Para validar un blockquote en XHTML este debe contener otros elementos de bloque
		T_FinalTag T_blockquote T_TagClose	//</blockquote>
	;

form
 	:	
		T_Tag T_form 
		Atribute	//Atributos de la etiqueta 
		T_TagClose 	//<form>
		form_field   	//Elementos de la etiqueta <form>
		T_FinalTag T_form T_TagClose	//</form>
	;

form_field	//Elementos del form
	:	INPUT form_field
	| 	select form_field
	| 	textarea form_field
	|	epsilon
	;

INPUT   :	T_Tag T_input 
		Atribute 	//Atributos de la etiqueta
		T_TagClose	//<input>  
	;

select
	:	T_Tag T_select 
		Atribute 	//Atributos de la etiqueta
		T_TagClose  	//<select>
		select_option  	//Opciones del select
		T_FinalTag T_select T_TagClose	//</select>
	;

select_option
	:	T_Tag T_option 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<option>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_option T_TagClose select_option	//</option>
	|	epsilon	//Puede no tener por lo que deriva en Epsilon
	;

textarea
	:	T_Tag T_textarea
		Atribute	//Atributos de la etiqueta 
		T_TagClose  	//<textarea>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_textarea T_TagClose	//</textarea>
	;

BR
	:	T_Tag T_br 
		Atribute 	//Atributos de la etiqueta
		T_TagClose	//<br> 
	;
HR	:	T_Tag T_hr 
		Atribute 	//Atributos de la etiqueta
		T_TagClose	//<hr>
	;
IMG	:	T_Tag T_img 
		Atribute	//Atributos de la etiqueta 
		T_TagClose	//<img>
	;


table
	:	T_Tag T_table 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<table>
		caption 	//caption de la etiqueta <table>
		tr  		//TableRow
		T_FinalTag T_table T_TagClose	//</table>
	;

caption
	:	T_Tag T_caption 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<caption>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_caption T_TagClose		//<caption>
	;

tr	:	T_Tag T_tr 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<tr>
		th_or_td 	//th or td
		T_FinalTag T_tr T_TagClose tr	//</tr>
	|	epsilon	//Puede no tener por lo que deriva a Epsilon
	;

th_or_td
	:       T_Tag T_th T_TagClose //<th>
		 body_content 	//Elementos de contenido
		T_FinalTag T_th T_TagClose //</th>
        |       T_Tag T_td T_TagClose  	//<td>
		body_content 	//Elementos de contenido
		T_FinalTag T_td T_TagClose //</td>
	;
bold:	        T_Tag T_b T_TagClose //<b>  
		text  //Texto dentro de la etiqueta
		T_FinalTag T_b T_TagClose	//</b>
	;
emphasize
	:	T_Tag T_em T_TagClose //<embed>
		text  	//Texto dentro de la etiqueta
		T_FinalTag T_em T_TagClose	//</embed>
	;

strong
	:	T_Tag T_strong T_TagClose	//<strong>
		text  //Texto dentro de la etiqueta
		T_FinalTag T_strong T_TagClose	//</strong>
	;
code
	:	T_Tag T_code T_TagClose 	//<code> 
		text  	//Texto dentro de la etiqueta
		T_FinalTag T_code T_TagClose	//</code>
	;

anchor	
	:	T_Tag T_a 
		Atribute	//Atributos de la etiqueta 
		T_TagClose 	//<anchor>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_a T_TagClose	//</anchor>
	;
button 
        :	T_Tag T_button 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<button>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_button T_TagClose	//<button>
        ;
span 
        :	T_Tag T_span 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<span>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_span T_TagClose	//</span>
        ;
embed 
        :	T_Tag T_embed 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<embed>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_embed T_TagClose	//<embed>
        ;
object 
        :	T_Tag T_object 
		Atribute 	//Atributos de la etiqueta
		T_TagClose 	//<object>
		text 		//Texto dentro de la etiqueta
		T_FinalTag T_object T_TagClose	//</embed>
        ;
comment :	T_comment_open 	//<!-- 
		body_content //Cualquier tipo de contenido
		T_comment_close	//-->
	;

/*******************************FIN DE LOS TAGS DEL BODY****************************************/

text	:	T_IDENT text	//{insertar_nodo(etiqueta,yylval.str);}//Texto 
	| 	epsilon 	//puede derivar a epsilon
	;

Atribute : 	T_ATT Atribute 	//Atributo
	|	epsilon		//puede derivar a epsilon
	;
epsilon :	//Epsilon declarada como una regla solo por comprension
	;
%%
int main(){
/**************PARSING**************/
	yyparse();
	imprimir_arbol (root); 
    	liberar_arbol (root);
	return 0; 
}
/*******************************
Errores Sintacticos
********************************/
yyerror (char *s) {fprintf(stderr,"Syntax Error at line: %d\n",yylineno);}
