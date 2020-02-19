#ifndef LISTADOBLE_H_INCLUDED
#define LISTADOBLE_H_INCLUDED
#include "Nodo.h"
#include <string>
using namespace std;
class ListaDoble{
public:
    Nodo* primero = NULL;
    Nodo* ultimo = NULL;
    void InsertarPrimero(char c,Nodo* n);
    void EliminarUltimo();
    void Buscar(string s);
    void VerL();
    //Cuando se va querrer añadir al inicio de la lista el cursor esta en una posicion donde no existe nodo
    //Entonces si mando una posicion del cursor y no existe nodo en esa posicion me va devolver falso y en otro metodo voy a añadir al incio de la lista
    bool ExisteElNodo(int x, int y);
    //Va crear el grafo
    void printList(string nombre);
};


#endif // LISTADOBLE_H_INCLUDED
