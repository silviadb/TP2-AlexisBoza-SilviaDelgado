work: lex.yy.o y.tab.o
	gcc -o work lex.yy.o y.tab.o -ly -lfl
lex.yy.c: work.l y.tab.c
	flex work.l
y.tab.c: work.y
	bison -vdty work.y
