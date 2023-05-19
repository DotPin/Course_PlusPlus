#include "ListaGen.h"
#include <iostream>


using namespace std;

int main(){
    ListaGen *lg = new ListaGen();
    lg->insertar(1, 10);
    lg->insertar(2, 20);
    lg->insertar(3, 30);
    lg->insertar(2, 15);
    lg->insertar(1, 115);
    lg->imprimir();
    cout <<"Luego de Borrar el primero\n";
    lg->borrar(1);
    lg->imprimir();
    cout<<"Luego de Extraer el segundo\n";
    lg->extraer(2);
    lg->imprimir();
    cout<<"Luego de Intercambiar el primero con el tercero\n";
    lg->intercambiar(1, 3);
    lg->imprimir();
    if (lg->existe(20))
        cout<<"Se encuentra el 20 en la lista\n";
    else
        cout<<"No se encuentra el 20 en la lista\n";
    cout <<"La posición del mayor es:" <<lg->posMayor() <<"\n";
    if (lg->ordenada())
        cout<<"La lista esta ordenada de menor a mayor\n";
    else
        cout<<"La lista no esta ordenada de menor a mayor\n";
    delete lg;
    return 0;
}