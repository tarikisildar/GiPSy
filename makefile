all:
	lex gipsy.l
	yacc -d gipsy.y
	gcc -o gipsy_parser y.tab.c lex.yy.c -lfl -lm
