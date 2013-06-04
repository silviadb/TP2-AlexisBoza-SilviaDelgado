parser: lex.yy.o y.tab.o
	gcc -o parser lex.yy.o y.tab.o -ly -lfl
lex.yy.c: scanner.l y.tab.c
	flex scanner.l
y.tab.c: parser.y
	bison -vdty parser.y
