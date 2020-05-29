portugolc: PCLexico.l PCSintatico.y
	bison -d PCSintatico.y
	mv PCSintatico.tab.h build/sintatico.h
	mv PCSintatico.tab.c build/sintatico.c
	flex PCLexico.l
	mv lex.yy.c build/lexico.c
	g++ build/sintatico.c build/lexico.c -Wall -g -o build/portugolc -lm

init: #portugolc
	rm build/codigo.c
	./build/portugolc codigo.prg >> build/codigo.c

exec: build/codigo.c
	gcc build/codigo.c -o build/programaC
	./build/programaC

clean: 
	rm build/lexico.* build/sintatico.* build/portugolc


