#include <cstdlib>
#include <iostream>
#include "Menu.h"

#include <curses.h>
using namespace std;

void Menu::menu(){
    initscr();
    int dim_x , dim_y; // Estas variables solo me ayudaran a almacenar las dimensiones
    getmaxyx ( stdscr , dim_y , dim_x ); // Obtengo las dimensiones

    if (has_colors()) {

     start_color();
     init_pair(1,COLOR_RED,COLOR_BLACK);
     attron(COLOR_PAIR(1));
     mvprintw(2,7,"__________________________________________________");
     mvprintw(3,7,"UNIVERSIDAD DE SANCARLOS DE GUATEMALA");
     mvprintw(4,7,"FACULTAD DE INGENIERIA");
     mvprintw(5,7,"ESTRUCTURA DE DATOS");
     mvprintw(6,7,"PRACTICA 1");
     mvprintw(7,7,"STEVEN AARON SIS HERNANDEZ");
     mvprintw(8,7,"201706357");
     mvprintw(9,7,"---------------------------------------------------");
     attroff(COLOR_PAIR(1));
    }

    refresh();
    getch();
    endwin();
}

