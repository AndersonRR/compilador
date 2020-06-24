compilar: TabLexica.l TabSintatica.y
	bison -d TabSintatica.y
	mv TabSintatica.tab.h build/sintatico.h
	mv TabSintatica.tab.c build/sintatico.c
	flex TabLexica.l
	mv lex.yy.c build/lexico.c
	g++ build/sintatico.c build/lexico.c -g -o build/portugolc -lm 2>/dev/null

init: #portugolc
	rm build/codigo.c
	./build/portugolc codigo.prg >> build/codigo.c 

exec: build/codigo.c
	gcc build/codigo.c -o build/programaC 2>/dev/null
	./build/programaC

clean: 
	rm build/lexico.* build/sintatico.* build/portugolc


