#include "ListaDCircular.h"
#include <iostream>

using namespace std;

int main(){

    ListaDCircular *ldc = new ListaDCircular();

    ldc->insertarPrimero(2);
    ldc->insertarPrimero(24);
    ldc->insertarPrimero(51);

    ldc->mostrar();

    return 0;
}