#include <cstdlib>
#include <iostream>
#include "Graficador.h"
using namespace std;

void Graficador::graficarListaDoble(){
   // system("dot.exe -Tpng imagen.dot -o imagen.png");
    system("nohup display C:\\Users\\Steven Sis\\Documents\\imagen.png &" );
}
