#include "ListaDoble.h"
#include <iostream>

using namespace std;

ListaDoble::ListaDoble(){
    raiz = NULL;
}

void ListaDoble::mostrar(){
    Nodo *aux;
    aux = raiz;
    while(aux != NULL){
        cout <<aux->info<<"-";
        aux = aux->sig;
    }

}

void ListaDoble::insertarInicio(int x){
    
    Nodo *nuevo = new Nodo();

    nuevo->info = x;
    if(raiz == NULL){
        nuevo->sig = raiz;
        nuevo->ant = NULL;
        raiz = nuevo;
        cout <<"Inserta\n";
    }else{
        nuevo->sig = raiz;
        nuevo->ant = NULL;
        raiz->ant = nuevo;
        raiz = nuevo;
    }


}