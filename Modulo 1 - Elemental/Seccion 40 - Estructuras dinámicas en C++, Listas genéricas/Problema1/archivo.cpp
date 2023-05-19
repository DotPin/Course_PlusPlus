#include "ListaGen.h"
#include <iostream>

using namespace std;

int main(){
    ListaGen *test = new ListaGen();

    cout<<"Inserta numeros\n";
    for (size_t i = 0; i < 10; i++){
        test->inserta(i);
    }
    test->mostrar();

    cout<<"Inserta al 40 y 46 al final seguidamente\n";
    test->insertaFinal(46);
    test->insertaFinal(40);
    test->mostrar();

    cout<<"Inserta al 23 y 45 en segundo lugar seguidamente\n";
    test->inserta2(45);
    test->inserta2(23);
    test->mostrar();

    cout<<"Inserta el 113 en ante último lugar\n";
    test->insertaAntFinal(11);
    test->mostrar();

    test->borra1();
    test->mostrar();

    test->borra2();
    test->mostrar();

    cout<<"Borra último en lista\n";
    test->borraUltimo();
    test->mostrar();

    cout<<"Borra info mayor en lista\n";
    test->borraInfo();
    test->mostrar();

    return 0;
}
