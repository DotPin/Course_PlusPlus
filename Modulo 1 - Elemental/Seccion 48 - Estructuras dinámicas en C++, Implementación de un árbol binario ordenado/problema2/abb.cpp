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
    if (!existe(x)){
        Nodo *nuevo;
        nuevo = new Nodo();
        nuevo->info = x;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        if (raiz == NULL)
            raiz = nuevo;
        else{
            Nodo *anterior, *reco;
            anterior = NULL;
            reco = raiz;
            while (reco != NULL){
                anterior = reco;
                if (x < reco->info) reco = reco->izq;
                else reco = reco->der;
            }
            if (x < anterior->info) anterior->izq = nuevo;
            else anterior->der = nuevo;
        }
    }
}

bool abb::existe(int x){
    Nodo *reco = raiz;
    while (reco != NULL){
        if (x == reco->info)
                return true;
        else
            if (x>reco->info)
                reco = reco->der;
            else
                reco = reco->izq;
    }
    return false;
}

int abb::cantidad(){
    cant = 0;
    cantidad(raiz);
    return cant;
}

void abb::cantidad(Nodo *reco){
    if (reco != NULL){
        cant++;
        cantidad(reco->izq);
        cantidad(reco->der);
    }
}

int abb::cantidadNodosHoja(){
    cant = 0;
    cantidadNodosHoja(raiz);
    return cant;
}

void abb::cantidadNodosHoja(Nodo *reco){
    if (reco != NULL) {
        if (reco->izq == NULL && reco->der == NULL)
            cant++;
        cantidadNodosHoja(reco->izq);
        cantidadNodosHoja(reco->der);
    }
}

void abb::imprimirEntreConNivel(){
    imprimirEntreConNivel(raiz, 1);
    cout << "\n";
}

void abb::imprimirEntreConNivel(Nodo *reco, int nivel){
    if (reco != NULL) {
        imprimirEntreConNivel(reco->izq, nivel + 1);
        cout<<reco->info <<"(" <<nivel <<") - ";
        imprimirEntreConNivel(reco->der, nivel + 1);
    }
}

int abb::retornarAltura(){
    altura = 0;
    retornarAltura(raiz, 1);
    return altura;
}

void abb::retornarAltura(Nodo *reco, int nivel){
    if (reco != NULL){
        retornarAltura(reco->izq, nivel + 1);
        if (nivel>altura)
            altura = nivel;
        retornarAltura(reco->der, nivel + 1);
    }
}

void abb::mayorValor(){
    if (raiz != NULL){
        Nodo *reco = raiz;
        while (reco->der != NULL)
            reco = reco->der;
        cout<<"Mayor valor del árbol:" <<reco->info;
    }
}

void abb::borrarMenor(){
    if (raiz != NULL) {
         Nodo *bor;
         if (raiz->izq == NULL){
             bor = raiz;
             raiz = raiz->der;
             delete bor;
         }else {
             Nodo *atras = raiz;
             Nodo *reco = raiz->izq;
             while (reco->izq != NULL){
                 atras = reco;
                 reco = reco->izq;
             }
             atras->izq = reco->der;
             delete reco;
         }
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