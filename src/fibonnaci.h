/*
Fichier de définition de la classe Fibonnaci permettant de calculer la suite
*/

#ifndef FIBONNACI_H
#define FIBONNACI_H

#include <vector>
#include "operations.h"

using namespace std;

class Fibonacci
{

public:
    Fibonacci();
    ~Fibonacci();
    void calculFibonacci(int);
    void printFibonacci();

    vector<t_EntierLong> v;

private:
    t_EntierLong u0, u1;
};

#endif