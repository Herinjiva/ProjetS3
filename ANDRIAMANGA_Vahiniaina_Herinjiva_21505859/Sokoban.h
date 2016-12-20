#include "constantes.h"

#ifndef ___SOKOBAN_H
#define ___SOKOBAN_H
struct sokoban {      
  int tableau[50][TAILLE_MAX];
  int mode;
};
typedef struct sokoban SOKOBAN;
#endif
