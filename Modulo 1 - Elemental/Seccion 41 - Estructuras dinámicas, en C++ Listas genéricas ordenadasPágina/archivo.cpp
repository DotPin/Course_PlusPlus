#include <ListaGen.h>
#include <iostream>

using namespace std;

int main(){
    ListaGen *lista = new ListaGen();
    lista->insertar(10);
    lista->insertar(5);
    lista->insertar(7);
    lista->insertar(50);
    lista->imprimir();
    delete lista;
    return 0;
}