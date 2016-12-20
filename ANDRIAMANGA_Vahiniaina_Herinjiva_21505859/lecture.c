#include "Sokoban.h"
#include "lecture.h" 
#include "constantes.h" 
#include <stdio.h>
#include <stdlib.h>
#include <uvsqgraphics.h>

int max(int a, int b){return (a>b)?a:b; }

int nbrLignefichier(char *chemin) {
	FILE *f= NULL;
	char caractereActuel= 'a';
	int nbrLigne=0;
	f= fopen(chemin,"r");
	
	if (f==NULL) {
		printf("impossible d'ouvrir le fichier %s",chemin);
		exit(0);
	}
	while (caractereActuel!=EOF) {
		caractereActuel=fgetc(f);
		if(caractereActuel=='\n')
		{
			nbrLigne++;
		}
	}
	fclose(f);
	return(nbrLigne+1);	
}

int nbrcaracterefichier(char *chemin) {
	FILE *f= NULL;
	char caractereActuel= 'a';
	int nbrcaractere=0;
	f= fopen(chemin,"r");
	
	if (f==NULL) {
		printf("impossible d'ouvrir le fichier %s",chemin);
		exit(0);
	}
	while (caractereActuel!=EOF) {
		caractereActuel=fgetc(f);
			nbrcaractere++;
	}
	fclose(f);
	return(nbrcaractere);	
}


int est_nombre(int niv) {
	if((niv/10)>=1) {
		return 1;
	}
	else return 0;
	
	
}


int ligne_nombre(int niv, SOKOBAN S) {
	int i,j;
	int niveau_10,niveau_01;   //la partie décimal et l'entier
	niveau_10=niv/10;
	niveau_01=niv%10;
	i=0;
	j=TAILLE_MAX-1;
	while(j>=0) {
		while(i<=25) {
			if((S.tableau[i][j]==(niveau_10+48))&&(S.tableau[i+1][j]==niveau_01+48)){  //+48 pour son code ascii
				return j;	
			}
			i++;
		}
		j--;
		i=0;
	}
	return 1000;
}

int ligne_chiffre(int niv, SOKOBAN S) {
	int i,j;
	i=0;
	j=TAILLE_MAX-1;
	while(j>=0) {
		while(i<=25) {
			if(S.tableau[i][j]==niv+48) {
			return j;
		}
		i++;
	}
	j--;
	i=0;
	
}
}



int ligne_niveau(SOKOBAN S,int niveau) {
	int ligne=0;
	if(est_nombre(niveau)) {     
		ligne=ligne_nombre(niveau,S);
	}
	else ligne=ligne_chiffre(niveau,S);
	return ligne;
}


SOKOBAN lit_fichier_sokoban(SOKOBAN S,char* adresse){    //fonction sure de fonctionner
	FILE* f= fopen(adresse,"r");
  
	if (f==NULL) {
		printf("impossible d'ouvrir le fichier adresse",adresse);
		exit(0);
	}
	int car,k,colonne,ligne;
	int nbrck=nbrcaracterefichier(adresse);
	int sok[nbrck];
	car=fgetc(f);
	k=0;
	while(car!=EOF) {   //copie le fichier dans un tableau à une dimension
		sok[k]=car;
		k++;
		car=fgetc(f);
	}

          //a faire= copier dans un tableau à 2 dimensions     
	k=0;
	ligne=TAILLE_MAX;
	colonne=0;
	while(k<=nbrck-2){
		if(sok[k]==13) {
			S.tableau[colonne][ligne]=sok[k];
			k++;
			ligne--;
			colonne=0;
		}
		else {
			S.tableau[colonne][ligne]=sok[k];
			k++;
			colonne++;
		}
	}
	
	S.mode=1;
	fclose(f);
	return S;

}


/********** Fin lecture fichier sokoban *******/
