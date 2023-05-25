#include "abb.h"
#include <iostream>

using namespace std;

int main(){

    abb *arbol1 = new abb();
    arbol1->insertar(100);
    arbol1->insertar(50);
    arbol1->insertar(25);
    arbol1->insertar(75);
    arbol1->insertar(150);
    cout<<"Impresion entreorden: ";
    arbol1->imprimirEntre();
    cout<<"Cantidad de nodos del árbol:" <<arbol1->cantidad() <<"\n";
    cout<<"Cantidad de nodos hoja:" <<arbol1->cantidadNodosHoja()<<"\n";
    cout<<"Impresion en entre orden junto al nivel del nodo:";
    arbol1->imprimirEntreConNivel();
    cout<<"Artura del arbol:";
    cout << arbol1->retornarAltura();
    cout << "\n";
    arbol1->mayorValor();
    cout << "\n";
    arbol1->borrarMenor();
    cout<<"Luego de borrar el menor:";
    arbol1->imprimirEntre();
    delete arbol1;
    return 0;
}
