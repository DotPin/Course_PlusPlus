#include "ListaGen.h"
#include <iostream>

using namespace std;

ListaGen::ListaGen(){
    raiz = NULL;
}

ListaGen::~ListaGen(){
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGen::insertarPrimero(int x){
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGen::imprimir(){
    imprimir(raiz);
}

void ListaGen::imprimir(Nodo *reco){
    if (reco != NULL) 
    {
        imprimir(reco->sig);
        cout<<reco->info << "-";
    }
}
