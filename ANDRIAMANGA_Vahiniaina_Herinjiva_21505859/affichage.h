#include "Sokoban.h"
#include <uvsqgraphics.h>

void affiche_sokoban_terminal(SOKOBAN S,int niveau);

void initialiser_affichage();

void afficher_texte_haut(POINT debut);

void afficher_cases_boutons_haut();

void afficher_texte_bas(char *texte,int niveau);   //a appeler dans le main de sokoban.c pour afficher le fichier le fichier et le niveau

void afficher_nbr_coup(int coup);

void afficher_cases_boutons_bas();

void dessine_mur();

void dessine_caisse();

void dessine_bonhomme();

void dessine_emplacement();

void affichage_plateau(SOKOBAN S,int niveau);

void affiche_tout();
