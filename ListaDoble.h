#ifndef LISTADOBLE_H_INCLUDED
#define LISTADOBLE_H_INCLUDED
#include "Nodo.h"
#include <string>
using namespace std;
class ListaDoble{
public:
    Nodo* primero = NULL;
    Nodo* ultimo = NULL;
    void InsertarPrimero(char c);
    void EliminarUltimo();
    void Buscar(string s);
    void VerL();
};


#endif // LISTADOBLE_H_INCLUDED
