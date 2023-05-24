#include "ListaDCircular.h"
#include <iostream>

using namespace std;

int main(){

    ListaDCircular *ldc = new ListaDCircular();

    ldc->insertarPrimero(2);
    ldc->insertarPrimero(24);
    ldc->insertarPrimero(51);
    ldc->mostrar();

    ldc->insertarUltimo(1001);
    ldc->insertarUltimo(1011);
    ldc->insertarUltimo(1100);
    ldc->mostrar();

    ldc->cantidad();
    ldc->borrar(51);
    ldc->mostrar();
    ldc->cantidad();

    return 0;
}