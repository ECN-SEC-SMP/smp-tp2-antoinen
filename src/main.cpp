#include <iostream>
#include "utilitaire.h"
#include "operations.h"
#include "config.h"
#include "fibonacci.h"

int main(void)
{
    int a, b, n;
    readConf(&a, &b, &n); // Lecture du fichier de configuration entier.conf pour récupérer les valeurs.
    Fibonacci f = Fibonacci(); // création de l'objet

    f.calculFibonacci(n); // calcul de la suite de Fibonacci pour n fois
    f.printFibonacci(); // affiche les 3 dernieres valeurs

    /*
        Vérification que n60 - n59 = n58
    */
    std::cout << "n60-n59 = ";
    afficheEntierLong(sub(f.v[60],f.v[59]));
    std::cout <<"n58 = ";
    afficheEntierLong(f.v[58]);
    std::cout << "égalité : " << equality(sub(f.v[60],f.v[59]),f.v[58]) << "\n";

    // passage des entiers standards vers entiers longs
    t_EntierLong t = int2intLong(a);
    t_EntierLong y = int2intLong(b);

    std::cout << "Chiffres : \n";
    afficheEntierLong(t);
    afficheEntierLong(y);

    /*
        test des opérations
    */
    t_EntierLong x = add(t, y);
    std::cout << "addition :";
    afficheEntierLong(x);

    x = sub(t, y);
    std::cout << "soustraction :";
    afficheEntierLong(x);

    x = mul(t, y);
    std::cout << "multiplication :";
    afficheEntierLong(x);
}