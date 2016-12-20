#include "constantes.h"
#include "affichage.h"
#include "lecture.h"  
#include <stdio.h>
#include <stdlib.h> //a modifier au fur et à mesure ajout fichier

SOKOBAN initialise(SOKOBAN S) {
	int i,j;
	for(i=0;i<50;i++) {
		for(j=0;j<TAILLE_MAX;j++) {
			S.tableau[i][j]=0;       //intialise chaque case a 45 (-) 
		}
	}
	S.mode=0;
	return S;
	
}



int main(int argc,char **argv) {
	SOKOBAN S;
	int niveau;
	niveau=atoi(argv[2]);
	S=initialise(S);
	S=lit_fichier_sokoban(S,"sasquatch1.xsb");
	affiche_sokoban_terminal(S,niveau);
	affiche_tout();
	wait_escape();
	exit(0);
}
