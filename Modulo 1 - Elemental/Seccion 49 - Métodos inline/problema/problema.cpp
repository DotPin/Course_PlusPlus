#include "inlinep.h"
#include <iostream>

using namespace std;

int main(){

    inlinep *ej = new inlinep();

    cout << "Suma de elementos: "<<ej->sumar()<<"\n";
    ej->imprimir();


    return 0;
}