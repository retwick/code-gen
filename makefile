a.out: y.tab.c lex.yy.c
	g++ -O3 lex.yy.c y.tab.c
	@echo "Run the program as ./a.out <input.txt >output.s"

y.tab.c: file1.y 
	yacc -d file1.y

lex.yy.c: file1.l y.tab.h
	lex file1.l

clean:
	@rm lex.yy.c y.tab.h y.tab.c a.out

archive: clean
	rm -r .git
	tar -zcvf ../CS16B024.tar.gz -C .. `basename ${PWD}` ; \
	echo "Created the archive file ../CS16B024.tar.gz."
