
/*---------------------------------------------------------------------------------
-----------------------------------------------------------------------------------
Fichier utilitaire.cpp
contient : 
    int2intLong(a)
    equality(a, b)
    compAbs(a,b)
-----------------------------------------------------------------------------------
-----------------------------------------------------------------------------------*/

/* inclusion librairie & fichier entete*/
#include "utilitaire.h"
#include <iostream>

/*---------------------------------------------------*/



/*
Transforme un standard int vers un intLong issue de la structure présente dans entierlong.h
*/
t_EntierLong int2intLong(int a)
{
    t_EntierLong b;
    b.negatif = a<0;
    for (int i =0; i< MAXCHIFFRES;i++)
    {
        b.chiffres[i] = abs(a)%10;
        a/=10;

    }
    return b;
}

/*
Vérifie si les deux entiers long sont égaux
*/
bool equality(t_EntierLong a, t_EntierLong b)
{
    if (a.negatif != b.negatif) return false;

    for (int i=0;i<MAXCHIFFRES;i++)
    {
        if(a.chiffres[i] != b.chiffres[i]) return false;
    }
    return true;
}

/*
compare deux entiers long 
renvoie true si n1<=n2
        false si n1>n2
*/
bool compAbs(t_EntierLong a, t_EntierLong b)
{
    for(int i = 1; i <= MAXCHIFFRES ;i++)
    {
        int r = a.chiffres[MAXCHIFFRES-i] - b.chiffres[MAXCHIFFRES-i];
        if (r>0) return false;
    }
    return true;
}