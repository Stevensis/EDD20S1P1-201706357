#include <curses.h>
#include <stdlib.h>
#include <panel.h>
#include <string>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include "EditorTexto.h"
using namespace std;

void EditorTexto::EditorTxt(){

    WINDOW* win = newwin(50,50,50,50);
    wprintw(win,"Marcelo prrr agachate y conocelo");
    box(win, 0, 0);
    wrefresh(win);

    while(true){
        int c = getch();
    }

}
