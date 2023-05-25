#include "ListaGen.h"
#include <iostream>

using namespace std;

int main(){
    ListaGen *lg = new ListaGen();
    lg->insertarPrimero(10);
    lg->insertarPrimero(4);
    lg->insertarPrimero(5);
    lg->imprimir();
    delete lg;
    return 0;
}