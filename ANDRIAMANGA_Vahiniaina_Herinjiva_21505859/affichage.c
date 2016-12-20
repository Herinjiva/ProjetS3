#include <uvsqgraphics.h>
#include "lecture.h"
#include "affichage.h"
#include "Sokoban.h"
#include "constantes.h"
#include <stdio.h>
#include <stdlib.h>



void affiche_sokoban_terminal(SOKOBAN S,int niveau) {   
	int i,j;
	i=1;      //car i=0 on aura un ';' et la boucle ne sera pas executé
	j=ligne_niveau(S,niveau)-2;
	//printf("%d\n",j);
	while((S.tableau[i][j]!=';')&&(i<=49)&&(j>=0)){
		printf("%c",S.tableau[i][j]);
		i++;
		if(S.tableau[i][j]==13){
			printf("%c",S.tableau[i][j]);
			i=0;
			j--;
		}
		
	}
}


void initialiser_affichage() {
	init_graphics(LARG_FENETRE,HAUT_FENETRE);
	fill_screen(blanc);
	//affiche_auto_off();
}


void afficher_texte_haut(POINT debut) {
	aff_pol_centre("UNDO",TK,debut,red);
	debut.x=debut.x+LC;
	aff_pol_centre("REDO",TK,debut,red);
	debut.x=debut.x+LC;
	aff_pol_centre("INIT",TK,debut,red);
	debut.x=debut.x+LC;
	aff_pol_centre("PRECEDENT",TK,debut,red);
	debut.x=debut.x+LC;
	aff_pol_centre("SUIVANT",TK,debut,red);
	debut.x=debut.x+LC;
	aff_pol_centre("QUIT",TK,debut,red);
	
}

void afficher_cases_boutons_haut() {
	POINT pd,pg;
	pg.x=0; pd.x=LARG_FENETRE;
	pg.y=HAUT_FENETRE-50; pd.y=pg.y;
	draw_line(pg,pd,noir);
	
	POINT ph,pb,centre;
	ph.x=LC; pb.x=ph.x;
	ph.y=HAUT_FENETRE; pb.y=ph.y-HC;
	centre.x=ph.x-(LC/2); centre.y=HAUT_FENETRE-(HC/2);
	afficher_texte_haut(centre);
	int i;
	i=0;
	while(i<=5) {
		draw_line(pb,ph,noir);
		ph.x=ph.x+LC; pb.x=ph.x;
		i++;
		
	}
	
}

void afficher_texte_bas(char *texte,int niveau) {    //a appeler dans le main de sokoban.c pour afficher le fichier le fichier et le niveau
	//a finir
	
	
}

void afficher_nbr_coup(int coup) {
	//a finir
	
	
}

void afficher_cases_boutons_bas() {
	POINT pd,pg;
	pg.x=0; pd.x=LC*3;
	pg.y=50; pd.y=pg.y;
	draw_line(pg,pd,noir);
	
	POINT ph,pb;
	ph.x=LC; pb.x=LC;
	pb.y=0; ph.y=HC;
	int i=0;
	while(i<=2) {
		draw_line(pb,ph,noir);
		pb.x=pb.x+LC; ph.x=pb.x;
		i++;
		
		
	}
	
	
	
}

void dessine_mur(){ //# carre rouge
	
	
}

void dessine_caisse(){// $ carre marron
	
	
}

void dessine_bonhomme(){ // @ cercle rouge
	
	
	
}

void dessine_emplacement(){ // . carre jaune
	
	
	
}

void affichage_plateau(SOKOBAN S,int niveau) {       //prendre l'affiche sokoban terminal et le modifie
	
	
	
}

void affiche_tout() {
	initialiser_affichage();
	afficher_cases_boutons_haut();
	afficher_cases_boutons_bas();
	
}
