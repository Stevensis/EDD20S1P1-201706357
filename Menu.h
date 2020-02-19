#ifndef MENU_H
#define MENU_H
#include "Nodo.cpp"
class Menu{
public:
    void menu();
    void pintarVentana();
    Nodo* getNodoBuscado(int x, int y);
};

#endif // MENU_H
