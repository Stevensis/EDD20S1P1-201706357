#include "ListaDoble.h"
#include <bits/stdc++.h>
#include <utility>
#include <cstdlib>
#include <iostream>
#include <string>
#include "ListaDoble.h"
#include <windows.h>

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
    }else if(n==ultimo){
        aux->atras = ultimo;
        ultimo->siguiente = aux;
        ultimo=aux;
    }
    else{
        n->atras->siguiente = aux;
        aux->atras = n->atras;
        n->atras =aux;
        aux->siguiente = n;
    }
}

void ListaDoble::VerL(){
    Nodo* temporal = ultimo;
    while(temporal !=NULL){
            getyx(stdscr,temporal->y,temporal->x);
           addch(temporal->c); //Va añadir a la pantalla caracter por caracter
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

bool ListaDoble::ExisteElNodo(int x, int y){
    Nodo* temporal = ultimo;
    while(temporal !=NULL){
            if(x== temporal->x && y==temporal->y){
                return true;
            }
            temporal = temporal->atras;
        }
}

void ListaDoble::printList(string nombre) {
    ofstream grafica;
    grafica.open("Prueba.dot", ios::out);
    grafica << "digraph {" << endl << "padre -> hijo; padre -> hija;" << endl;
    grafica << "}";

    grafica.close();

    string creacion = "dot -Tjpg " + nombre + ".dot -o " + nombre + ".jpg";
    system(creacion.c_str());
    string title = nombre  + ".jpg";
    ShellExecute(NULL, "open", title.c_str(), NULL, NULL, SW_SHOWNORMAL);

}
