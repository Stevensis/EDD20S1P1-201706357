#include "ListaDoble.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include "ListaDoble.h"
#include "Nodo.cpp"
using namespace std;

void ListaDoble::InsertarPrimero(char c, Nodo* n){
    Nodo* aux = new Nodo(c);
    if(primero==NULL){
        //Lista vacia
        primero = aux;
        ultimo = aux;
    }else if(n== primero){
        //Añade al primerio de la lista
        aux->siguiente=primero;
        primero->atras=aux;
        primero=aux;
    }else{
        n->atras->siguiente = aux;
        aux->atras = n->atras;
        n->atras =aux;
        aux->siguiente = n;
    }
}

void ListaDoble::VerL(){
    Nodo* temporal = ultimo;
  //  cout<<""<<endl;
    while(temporal !=NULL){
           // cout<< temporal->c;
           addch(temporal->c);
            temporal = temporal->atras;
        }
}

void ListaDoble::EliminarUltimo(){
    if(primero==NULL){
        //Lista vasia yi no se puede eliminar nada
    }else if(primero==ultimo){
             //Lista de un solo nodo
             ultimo=NULL;
             primero=NULL;
    }else{
        primero=primero->siguiente;
        primero->atras=NULL;
    }
}
