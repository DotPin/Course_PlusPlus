#include "ListaDoble.h"
#include <iostream>

int main(){

    ListaDoble *lst = new ListaDoble();
    lst->insertarInicio(9000);
    lst->insertarInicio(10);
    lst->insertarInicio(16);

    lst->mostrar();

    lst->insertarFinal(42);
    lst->insertarFinal(34);
    lst->insertarFinal(141);

    lst->mostrar();

    lst->insertaSegundo(121);
    lst->insertaSegundo(152);
    lst->insertaSegundo(15);

    lst->mostrar();

    lst->insertaAntePenultimo(98);
    lst->insertaAntePenultimo(76);
    lst->insertaAntePenultimo(8000);

    lst->mostrar();

    lst->borrarInicio();
    lst->mostrar();

    lst->borrarSegundo();
    lst->mostrar();

    lst->borraUltimo();
    lst->mostrar();

    lst->borraMayor();
    lst->mostrar();

    return 0;

}