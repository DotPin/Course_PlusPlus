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
    cout<<"\n";
}

void ListaDoble::insertarInicio(int x){
    
    Nodo *nuevo = new Nodo();

    nuevo->info = x;
    if(raiz == NULL){
        nuevo->sig = raiz;
        nuevo->ant = NULL;
        raiz = nuevo;
    }else{
        nuevo->sig = raiz;
        nuevo->ant = NULL;
        raiz->ant = nuevo;
        raiz = nuevo;
    }
}


void ListaDoble::insertarFinal(int x){
    Nodo *nuevo = new Nodo();
    Nodo *aux;
    
    nuevo->info = x;
    aux = raiz;

    if(aux == NULL){
        nuevo->sig = raiz;
        nuevo->ant = NULL;
        raiz = nuevo;
    }else{
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        nuevo->sig = aux->sig;
        nuevo->ant = aux;
        aux->sig = nuevo;
    }

}