#include "Sokoban.h"
int max(int a, int b);

int nbrLignefichier(char *chemin);

int nbrcaracterefichier(char *chemin);

int est_nombre(int niv);

int ligne_nombre(int niv, SOKOBAN S);

int ligne_chiffre(int niv, SOKOBAN S);

int ligne_niveau(SOKOBAN S,int niveau);

SOKOBAN lit_fichier_sokoban(SOKOBAN S,char* adresse);
