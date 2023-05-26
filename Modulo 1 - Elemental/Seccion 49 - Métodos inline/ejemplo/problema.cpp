#include "temperatura.h"
#include <iostream>

using namespace std;

int main(){

    temperatura tmp(5,25,17);
    cout << "Rango de variacion de temperaturas:" << tmp.rango()<<"\n\n";
    tmp.imprimir();

    return 0;
}