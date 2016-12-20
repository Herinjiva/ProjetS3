#Makefile sokoban 

CFLAGS=-c -g -Wall `sdl-config --cflags`

all: Sokoban
	./Sokoban -n 11

Sokoban:Sokoban.o  lecture.o affichage.o
	gcc -o Sokoban Sokoban.o lecture.o affichage.o -luvsqgraphics `sdl-config --libs` -lm -lSDL_ttf

Sokoban.o: Sokoban.c Sokoban.h lecture.h affichage.h
	gcc $(CFLAGS) Sokoban.c

lecture.o:lecture.c lecture.h constantes.h
	gcc $(CFLAGS) lecture.c

affichage.o:affichage.c affichage.h lecture.h Sokoban.h constantes.h
	gcc $(CFLAGS) `sdl-config --cflags` affichage.c

clean:
	rm -f Sokoban.o
	rm -f lecture.o
	rm -f affichage.o
	rm -f Sokoban


