prog: y.tab.c lex.yy.c
	g++ -O3 -o prog lex.yy.c y.tab.c
	@echo "Run the program as ./prog <input.txt"

y.tab.c: file1.y 
	yacc -d file1.y

lex.yy.c: file1.l y.tab.h
	lex file1.l

clean:
	@rm lex.yy.c y.tab.h y.tab.c prog

