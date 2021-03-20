Prgm2: main.o readin.o choice.o printclass.o 
		gcc -o Prgm2 main.o readin.o choice.o printclass.o

main.o: main.c
		gcc -c -Wall main.c

readin.o: readin.c
		gcc -c -Wall readin.c 

choice.o: choice.c
		gcc -c -Wall choice.c

printclass.o: printclass.c
		gcc -c -Wall printclass.c 
