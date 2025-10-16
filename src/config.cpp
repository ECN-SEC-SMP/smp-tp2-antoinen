/*
Fichier config.cpp
contient :
    readConf --> permet de lire le fichier entiers.conf
*/
#include "config.h"

void readConf(int *a, int *b, int *n)
{
    FILE *file = fopen("../entiers.conf", "r"); //ouverture du fichier en lecture seulement 
    if (file)
    {
        char line[1000];

        while (fgets(line, sizeof(line), file))
        {
            if (strstr(line, "A=")) // recherche du A= dans le fichier
                sscanf(line, "A=%d", a); // association de la valeur relevé dans le fichier à la variable
            else if (strstr(line, "B="))
                sscanf(line, "B=%d", b);
            else if (strstr(line, "n="))
                sscanf(line, "n=%d", n);
        }
    }
}