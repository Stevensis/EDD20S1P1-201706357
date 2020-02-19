#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include "Caracter.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
class Nodo{
public:
    int x,y,id;
    char c;
    Nodo* siguiente=NULL;
    Nodo* atras=NULL;
    Nodo (char cc);
};


#endif // NODO_H_INCLUDED
