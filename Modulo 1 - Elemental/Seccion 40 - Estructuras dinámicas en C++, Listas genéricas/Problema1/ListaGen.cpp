#include "ListaGen.h"
#include <iostream>

using namespace std;

ListaGen::ListaGen(){
    raiz = NULL;
}

void ListaGen::inserta(int x){
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if(raiz){
        nuevo->sig = raiz;
    }
    raiz = nuevo;
}

void ListaGen::mostrar(){
    Nodo *show;
    show = raiz;
    while(show!=NULL){
        cout << show->info <<"-";
        show = show->sig;
    }
    cout <<"\n";
}

void ListaGen::insertaFinal(int x){
    Nodo *nuevo = new Nodo();
    Nodo *aux;
    aux = raiz;
    nuevo->info = x;
    if(raiz==NULL){
        nuevo->sig = raiz;
        raiz = nuevo;
    }else{
        while(aux->sig!=NULL){        
            aux = aux->sig;
        }
        nuevo->sig = aux->sig;
        aux->sig = nuevo;
    }
    aux = NULL;
    delete aux;
}

void ListaGen::inserta2(int x){
    Nodo *nuevo = new Nodo();
    Nodo *aux;
    aux = raiz;
    nuevo->info = x;
    if(aux!=NULL && aux->sig!=NULL){
        nuevo->sig = aux->sig;
        aux->sig = nuevo;
    }
    aux = NULL;
    delete aux;
}

void ListaGen::insertaAntFinal(int x){
    Nodo *nuevo = new Nodo();
    Nodo *aux,*aux2;
    aux = raiz;
    aux2 = aux;
    nuevo->info = x;
    if(aux==NULL){
        cout << "Lista Vacía\n";
    }else{
        while ((aux->sig)->sig !=NULL){
            aux = aux->sig;
        }
        nuevo->sig = aux->sig;
        aux->sig = nuevo;
    }
    aux = NULL;
    delete aux;
}

void ListaGen::borra1(){
    Nodo *aux;
    aux = raiz;
    cout <<"Elimina Primero Lista: "<<aux->info<<"\n";
    raiz = raiz->sig;
    delete aux;
}

void ListaGen::borra2(){
    Nodo *aux;
    aux = raiz->sig;
    cout<<"Elimina Segundo Lista: "<<aux->info<<"\n";
    raiz->sig = (raiz->sig)->sig;
}

void ListaGen::borraUltimo(){
    Nodo *aux;
    aux = raiz;
    while((aux->sig)->sig != NULL){
        aux= aux->sig;
    }
    aux->sig = NULL;
}

void ListaGen::borraInfo(){
    Nodo *aux,*aux2;
    int my=0;
    aux = raiz;
    aux2 = aux;
    my = aux->info;
    aux = aux->sig;
    while (aux != NULL){
        if(aux->info >= my)
            my = aux->info;
        aux = aux->sig;
    }
    aux = raiz;
    aux2 = aux;
    aux = aux->sig;
    while (aux->info != my){
        aux2 = aux;
        aux = aux->sig;
    }
    
    aux2->sig = aux->sig;
    aux = NULL;
    delete aux;   
}