parse: lex.yy.o y.tab.o
	gcc -o parse lex.yy.o y.tab.o -ly -lfl
lex.yy.c: work.l y.tab.c
	flex work.l
y.tab.c: parse.y
	bison -vdty parse.y
