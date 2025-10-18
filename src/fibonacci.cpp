#include <iostream>
#include "fibonacci.h"

Fibonacci::Fibonacci() // constructeur
{
    u0 = int2intLong(0);
    u1 = int2intLong(1);
}

Fibonacci::~Fibonacci() {} // destructeur

/*
    calcul de la suite de Fibonnaci
*/
void Fibonacci::calculFibonacci(int n)
{
    std::cout << "Fibonacci avec n=" << n << "\n";
    v.push_back(u0);
    v.push_back(u1);

    for (int i = 2; i < n; i++)
    {
        t_EntierLong un = add(v[i - 1], v[i - 2]);
        v.push_back(un);
    }
}


/*
    Affichage de la suite
*/
void Fibonacci::printFibonacci()
{
    for (int i = (v.size() - 3); i < v.size(); i++)
    {
        afficheEntierLong(v[i]);
    }
}