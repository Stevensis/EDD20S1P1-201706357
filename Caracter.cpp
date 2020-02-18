#include <cstdlib>
#include <iostream>
#include <string>
#include "Caracter.h"
using namespace std;
Caracter::Caracter (int asc):ascci(asc){
    c = ascci;
}
void Caracter:: setPosx(int px){ posx = px;}
void Caracter:: setPosy(int py){ posy = py;}
int Caracter:: getPosx(){ return posx;}
int Caracter:: getPosy(){ return posy;}
char Caracter:: getCaracter(){ return c;}
