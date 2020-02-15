#include <cstdlib>
#include <iostream>
#include "Menu.cpp"
using namespace std;

int main(void){
    Menu* menu = new Menu();
    menu->menu();

    return 0;
}
