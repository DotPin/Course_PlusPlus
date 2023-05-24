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

int ListaDCircular::cantidad(){
    Nodo *aux;
    int cnt=0;
    aux = raiz;
    if(aux != NULL){
        while(aux != NULL){
            aux = aux->sig;
            cnt++;
        }
        cout <<"Hay "+to_string(cnt)+" Nodos\n";
    }else{
        cout<<"Lista Vacía\n";
    }
}

void ListaDCircular::borrar(int num){
    Nodo *aux;
    aux = raiz;
    bool flag = true;
    if(aux != NULL){
        while(aux->sig != NULL && flag){
            if(aux->info == num){
                aux->sig->ant = aux->ant;
                aux->ant->sig = aux->sig;
                flag = false;
            }
        }
    }
    delete aux;
}



