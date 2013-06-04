parser: lex.yy.o y.tab.o
	gcc -o parser lex.yy.o y.tab.o -ly -lfl
lex.yy.c: work.l y.tab.c
	flex work.l
y.tab.c: parser.y
	bison -vdty parser.y
