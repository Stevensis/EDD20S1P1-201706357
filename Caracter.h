#ifndef CARACTER_H_INCLUDED
#define CARACTER_H_INCLUDED
using  namespace std;
class Caracter{
public:
    char c;
    int posx;
    int posy;
    int ascci;
    Caracter (int asc);
    char getCaracter();
    void setPosx(int px);
    void setPosy(int py);
    int getPosx();
    int getPosy();
};


#endif // CARACTER_H_INCLUDED
