#include "ListaGen.h"
#include <iostream>

using namespace std;

ListaGen::ListaGen(){
    raiz = NULL;
}

ListaGen::~ListaGen(){
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL){
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGen::insertar(int x){
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == 0){
        raiz = nuevo;
    }else{
        if (x<raiz->info){
            nuevo->sig = raiz;
            raiz = nuevo;
        }else{
            Nodo *reco = raiz;
            Nodo *atras = raiz;
            while (x >= reco->info && reco->sig != NULL){
                atras = reco;
                reco = reco->sig;
            }
            if (x >= reco->info){
                reco->sig = nuevo;
            }else{
                nuevo->sig = reco;
                atras->sig = nuevo;
            }
        }
    }
}

void ListaGen::imprimir(){
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL){
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

