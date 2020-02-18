#include <cstdlib>
#include <iostream>
#include "Menu.h"
#include <string>
#include <curses.h>
#include "ListaDoble.cpp"
#include "Caracter.h"
#include "EditorTexto.cpp"
#define ctrl(x)           ((x) & 0x1f)
#include <panel.h>
#include <stdlib.h>
#include "Graficador.cpp"
using namespace std;
char ca;
ListaDoble* listaDoble = new ListaDoble();
Graficador* graficador = new Graficador();
bool verificar=true; //Boleano para el ciclo que va contener el recibimiento de caracteres

void Menu::menu(){
    initscr();
    int dim_x , dim_y; // Estas variables solo me ayudaran a almacenar las dimensiones
     int ica;
     // Obtengo las dimensiones

    if (has_colors()) {

     start_color();
     init_pair(1,COLOR_RED,COLOR_BLACK);
     init_pair(2,COLOR_BLUE,COLOR_BLACK);
     attron(COLOR_PAIR(1));
     mvprintw(2,7,"__________________________________________________");
     mvprintw(3,7,"UNIVERSIDAD DE SANCARLOS DE GUATEMALA");
     mvprintw(4,7,"FACULTAD DE INGENIERIA");
     mvprintw(5,7,"ESTRUCTURA DE DATOS");
     mvprintw(6,7,"PRACTICA 1");
     mvprintw(7,7,"STEVEN AARON SIS HERNANDEZ");
     mvprintw(8,7,"201706357");
     mvprintw(9,7,"---------------------------------------------------");
    keypad(stdscr, TRUE);
     int c = getch();
    switch (c) {
    case KEY_ENTER:
        printw("\nkey_enter: %d = %s\n", c,keyname(c));
        break;
    case ctrl('j'):
        printw("\nkey: ctrl j keyname: %d = %s\n", c, keyname(c));
        break;
    default:
        printw("\nkeyname: %d = %s\n", c, keyname(c));
        break;
    }
     getch(); //Solo para esperar para borrar la venta
      erase(); //Borra todo lo de la ventana
     attroff(COLOR_PAIR(1));
     dim_x=0;
     dim_y=0;
     move(dim_y,dim_x);
     while(verificar){
       noecho(); //Provoca que lo que resiva del teclado no se escriba
        ica=getch(); //Lo que recibe el reclado lo combierte a caracter
        char ca = ica;
         switch (ica) {
            case ctrl('v'):
                verificar=false;
                pintarVentana();
            break;
            case KEY_LEFT:
            dim_x-=1;
            move(dim_y,dim_x);
            break;
            case ctrl('c'):
                graficador->graficarListaDoble();
            break;
            case 8:
            listaDoble->EliminarUltimo();
            erase();
            listaDoble->VerL();
            break;
            case KEY_RIGHT:
            dim_x+=1;
            move(dim_y,dim_x);
            break;
            default:
            listaDoble->InsertarPrimero(ca,listaDoble->primero);
            erase();
            listaDoble->VerL();
            break;
    }
     //   refresh();
      //  mvprintw(20,3,"Lo del teclado fue: %d",c2);
     }
    }

         listaDoble->VerL();
    refresh();
    getch();
    getch();
    endwin();
}
void Menu::pintarVentana(){

}


