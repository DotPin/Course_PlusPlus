#include "abb.h"
#include <iostream>

using namespace std;

abb::abb(){
    raiz=NULL;
}

abb::~abb(){
    borrar(raiz);
}

void abb::borrar(Nodo *reco){
    if (reco != NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        delete reco;
    }
}

void abb::insertar(int x){
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo *anterior, *reco;
        anterior = NULL;
        reco = raiz;
        while (reco != NULL)
        {
            anterior = reco;
            if (x < reco->info)
                reco = reco->izq;
            else
                reco = reco->der;
        }
        if (x < anterior->info)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}

void abb::imprimirPre(){
    imprimirPre(raiz);
    cout<<"\n";
}

void abb::imprimirPre(Nodo *reco){
    if (reco != NULL)
    {
        cout << reco->info << "-";
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}

void abb::imprimirEntre(){
    imprimirEntre(raiz);
    cout<<"\n";
}

void abb::imprimirEntre(Nodo *reco){
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        cout << reco->info << "-";
        imprimirEntre(reco->der);
    }
}

void abb::imprimirPost(){
    imprimirPost(raiz);
    cout<<"\n";
}

void abb::imprimirPost(Nodo *reco){
    if (reco != NULL)
    {
        imprimirPost(reco->izq);
        imprimirPost(reco->der);
        cout << reco->info << "-";
    }
}