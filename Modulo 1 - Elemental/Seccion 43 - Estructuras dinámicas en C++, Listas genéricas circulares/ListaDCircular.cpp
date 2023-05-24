#include "ListaDCircular.h"
#include <iostream>

using namespace std;

ListaDCircular::ListaDCircular(){
    raiz = NULL;
}

ListaDCircular::~ListaDCircular(){
    delete raiz;
}

void ListaDCircular::insertarPrimero(int x){
    Nodo *nuevo = new Nodo();
    if(raiz != NULL){
        nuevo->sig = raiz;
        raiz->ant = nuevo;
        nuevo->ant = NULL;
    }else{
        nuevo->sig = raiz;
        raiz = nuevo;
        nuevo->ant = NULL;
    }
}

void ListaDCircular::mostrar(){
    Nodo *aux;
    aux = raiz;
    while(aux != NULL){
        cout <<aux->info<<"-";
        aux = aux->sig;
    }
}

