/*
Fichier de définition d'outils pour les entiers long 
*/

#ifndef UTILITAIRE_H
#define UTILITAIRE_H

#include "entierlong.h"
#include "lit_ecrit.h"

t_EntierLong int2intLong(int); // int --> entierlong (entierlong.h)

bool equality(t_EntierLong, t_EntierLong);// vérifie l'égalité de deux entiers long

bool compAbs(t_EntierLong, t_EntierLong); // compare la valeur absolue de deux entiers long

#endif