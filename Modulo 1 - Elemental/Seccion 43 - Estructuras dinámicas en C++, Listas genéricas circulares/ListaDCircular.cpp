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
    Nodo *reco = raiz;
    do {
        cout<<reco->info  <<"-";
        reco = reco->sig;
    } while (reco != raiz);
    cout << "\n";
}

void ListaDCircular::insertarPrimero(int x){
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if(raiz == NULL){
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }else{
        Nodo *ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
        raiz = nuevo;
    }
}

void ListaDCircular::insertarUltimo(int x){
    Nodo *nuevo= new Nodo();
    Nodo *aux;
    aux = raiz;
    nuevo->info = x;

    if(raiz == NULL){
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }else{
        Nodo *ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
    }

    aux = NULL;
    delete aux;
}

int ListaDCircular::cantidad(){
    Nodo *reco = raiz;
    int cnt;
    do {
        cnt++;
        reco = reco->sig;
    } while (reco != raiz);
    return cnt;
}

void ListaDCircular::borrar(int num){
    if (num <= cantidad())
    {
        if (num == 1) 
        {
            if (cantidad() == 1) 
            {
                delete raiz;
                raiz = NULL;
            }
            else 
            {
                Nodo *bor = raiz;
                Nodo *ultimo = raiz->ant;
                raiz = raiz->sig;
                ultimo->sig = raiz;
                raiz->ant = ultimo;
                delete bor;
            }
        }
        else {
            Nodo *reco = raiz;
            for (int f = 1; f <= num - 1; f++)
                reco = reco->sig;
            Nodo *bor = reco;
            Nodo *anterior = reco->ant;
            reco = reco->sig;
            anterior->sig = reco;
            reco->ant = anterior;
            delete bor;
        }
    }

}



