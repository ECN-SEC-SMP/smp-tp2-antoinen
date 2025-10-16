/*
Fichier operations.cpp
ce fichier contient :
    add(a,b) --> permet d'additionner deux entiers long de même signe
    sub(a,b) --> permet de soustraire deux entiers long de même signe
*/

/*inclusion Lib & fichier entête*/
#include <iostream>
#include "operations.h"

/*---------------------------------------------------*/

/*
Addition
*/
t_EntierLong add(t_EntierLong a, t_EntierLong b)
{
    // variables
    t_EntierLong r;
    bool c = false;

    if (a.negatif == b.negatif)
    {
        r.negatif = a.negatif;

        /* somme de chaque élément des deux tableaux*/
        for (int i = 0; i < MAXCHIFFRES; i++)
        {
            int s = a.chiffres[i] + b.chiffres[i] + c;
            r.chiffres[i] = s % 10;
            c = (s > 9);
        }
    }
    else
    {
        if (compAbs(a, b)) // a < b
        {
            a.negatif = b.negatif;
            r = sub(b, a);
            r.negatif = b.negatif;
        }
        else // a > b
        {
            b.negatif = a.negatif;
            r = sub(a, b);
            r.negatif = a.negatif;
        }
    }

    return r;
}

/*
soustraction
*/
t_EntierLong sub(t_EntierLong a, t_EntierLong b)
{
    // variables
    t_EntierLong r;
    bool c = false;
    if (a.negatif == b.negatif)
    {
        if (!compAbs(a, b)) // vérification a>b
        {
            r.negatif = a.negatif;

            for (int i = 0; i < MAXCHIFFRES; i++)
            {
                int diff = a.chiffres[i] - b.chiffres[i] - c;

                if (diff < 0)
                {
                    diff += 10;
                    c = true;
                }
                else
                {
                    c = false;
                }

                r.chiffres[i] = diff;
            }
        }
        else // a < b
        {
            r.negatif = !a.negatif;
            for (int i = 0; i < MAXCHIFFRES; i++)
            {
                int diff = b.chiffres[i] - a.chiffres[i] - c;
                if (diff < 0)
                {
                    diff += 10;
                    c = true;
                }
                else
                {
                    c = false;
                }
                r.chiffres[i] = diff;
            }
        }
    }
    else
    {
        t_EntierLong x = b;
        x.negatif = !b.negatif;
        r = add(a, x);
    }
    return r;
}

t_EntierLong mul(t_EntierLong a, t_EntierLong b)
{
    t_EntierLong r;

    for (int i = 0; i < MAXCHIFFRES; i++) r.chiffres[i] = 0;

    r.negatif = (a.negatif != b.negatif);
    int c = 0;
    for (int i = 0; i < MAXCHIFFRES; i++)
    {
        c = 0;
        for (int n = 0; n < MAXCHIFFRES; n++)
        {
            int p = r.chiffres[i + n] + (a.chiffres[n] * b.chiffres[i]) + c;
            r.chiffres[i + n] = p % 10;
            c = p / 10;
        }
    }

    return r;
}
