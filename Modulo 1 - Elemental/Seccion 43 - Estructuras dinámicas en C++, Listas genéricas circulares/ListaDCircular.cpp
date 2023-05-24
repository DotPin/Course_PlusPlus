#include "ListaDCircular.h"
#include <iostream>

using namespace std;

ListaDCircular::ListaDCircular(){
    raiz = NULL;
}

ListaDCircular::~ListaDCircular(){
    delete raiz;
}

void ListaDCircular::mostrar(){
    Nodo *aux;
    aux = raiz;
    while(aux != NULL){
        cout <<aux->info<<"-";
        aux = aux->sig;
    }
}

void ListaDCircular::insertarPrimero(int x){
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if(raiz != NULL){
        nuevo->sig = raiz;
        raiz->ant = nuevo;
        raiz = nuevo;
        nuevo->ant = NULL;
    }else{
        nuevo->sig = raiz;
        raiz = nuevo;
        nuevo->ant = NULL;
    }
}

void ListaDCircular::insertarUltimo(int x){
    Nodo *nuevo= new Nodo();
    Nodo *aux;
    aux = raiz;
    nuevo->info = x;

    if(raiz != NULL){
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        nuevo->sig = aux->sig;
        nuevo->ant = aux;
        aux->sig = nuevo;
    }else{
        insertarPrimero(x);
    }

    aux = NULL;
    delete aux;
}




