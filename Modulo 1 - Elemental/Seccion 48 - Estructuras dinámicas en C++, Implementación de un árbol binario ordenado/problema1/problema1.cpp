#include "abb.h"
#include <iostream>

using namespace std;

int main(){
    abb *arbol = new abb();
    arbol->insertar(100);
    arbol->insertar(50);
    arbol->insertar(25);
    arbol->insertar(75);
    arbol->insertar(150);
    cout<<"Impresion preorden: ";
    arbol->imprimirPre();
    cout<<"Impresion entreorden: ";
    arbol->imprimirEntre();
    cout<<"Impresion postorden: ";
    arbol->imprimirPost();
    delete arbol;
    return 0;
}