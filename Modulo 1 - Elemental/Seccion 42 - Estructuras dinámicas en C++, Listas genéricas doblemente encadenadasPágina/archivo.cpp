#include "ListaDoble.h"
#include <iostream>

int main(){

    ListaDoble *lst = new ListaDoble();
    lst->insertarInicio(4);
    lst->insertarInicio(10);
    lst->insertarInicio(16);

    lst->mostrar();

    lst->insertarFinal(42);
    lst->insertarFinal(34);
    lst->insertarFinal(141);

    lst->mostrar();

    return 0;

}