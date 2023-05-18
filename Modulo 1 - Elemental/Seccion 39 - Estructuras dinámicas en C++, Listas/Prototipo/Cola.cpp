#include "Cola.h"

void Cola::inserta(int valor){
    Nodo * nuevo = new Nodo();
    nuevo->valor = valor;
    nuevo->siguiente = 0;
    if(final)
        final->siguiente = nuevo;
    else
        inicio = nuevo;
    final = nuevo;
}

int Cola::extrae(void){
    if(inicio){
        Nodo * aux = inicio;
        int valor = inicio->valor;
        inicio = inicio->siguiente;
        delete aux;
        return valor;
    }else{
        cout << "Cola vacía\n";
        return 0;
    }
}

void Cola::despliega_Inicio(void){
    if(inicio){
        cout << "Elemento al inicio de la cola es: \n";
        cout << inicio->valor << "\n";
    }else cout << "Cola Vacía \n";
}

bool Cola::vacia(){
    if(inicio)
        return true;
    else
        return false;
}

int Cola::cantidad(){
    Nodo *aux = inicio;
    int cant = 0;
    while(aux != NULL){
        cant++;
        aux = aux->siguiente;
    }
    return cant;
}

Cola::~Cola(){
    Nodo *aux = inicio;
    Nodo *bor;
    while(aux != NULL){
        bor =  aux;
        aux = aux->siguiente;
        delete bor;
    }
}