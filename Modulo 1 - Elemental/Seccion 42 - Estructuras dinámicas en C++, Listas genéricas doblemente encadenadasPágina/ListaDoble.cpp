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

void ListaDoble::insertaSegundo(int x){
    Nodo *nuevo = new Nodo();

    nuevo->info = x;

    if(raiz != NULL){
        nuevo->sig = raiz->sig;
        raiz->sig->ant = nuevo;
        nuevo->ant = raiz;
        raiz->sig = nuevo;
    }

}

void ListaDoble::insertaAntePenultimo(int x){
    Nodo *nuevo = new Nodo();
    Nodo *aux;
    aux = raiz;
    nuevo->info = x;

    if(raiz != NULL){
        while (aux->sig->sig != NULL){
            aux = aux->sig;
        }
        nuevo->sig = aux->sig;
        aux->sig->ant = nuevo;
        nuevo->ant = aux;
        aux->sig = nuevo;
    }
}

void ListaDoble::borrarInicio(){

    Nodo *aux;
    aux = raiz;
    raiz->sig->ant = NULL;
    raiz = raiz->sig;

    cout<<"Borra raiz: "<<aux->info<<"\n";
    delete aux;
}

void ListaDoble::borrarSegundo(){

    Nodo *aux;
    aux = raiz;
    aux = aux->sig;
    aux->sig->ant = raiz;
    raiz->sig = aux->sig;

    cout<<"Borra Segundo nodo: "<<aux->info<<"\n";

    delete aux;

}

void ListaDoble::borraUltimo(){

    Nodo *aux;
    aux = raiz;
    while(aux->sig != NULL){
        aux = aux->sig;
    }
    aux->ant->sig = NULL;
    aux->ant = NULL;

    cout<<"Borra último nodo: "<<aux->info<<"\n";

    delete aux;
}

