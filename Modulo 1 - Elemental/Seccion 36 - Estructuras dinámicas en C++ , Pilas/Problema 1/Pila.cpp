#include "Pila.h"

void Pila::inserta(int valor){
    Nodo *nuevo = new Nodo();
    nuevo->valor = valor;
    nuevo->siguiente = 0;
    if(inicio)
        nuevo->siguiente = inicio;
    inicio=nuevo;
}

int Pila::extrae(void){
    if(inicio){
        Nodo * aux = inicio;
        int valor = inicio->valor;
        inicio = inicio->siguiente;
        delete aux;
        return valor;
    }else{
        cout << "Pila vacía \n";
        return 0;
    }
}

int Pila::cantidad(){
    if(inicio){
        Nodo * aux = inicio;
        short cnt;
        while(aux != NULL){
            cnt++;
            aux = aux->siguiente;
        }
        delete aux;
        return cnt;
    }else{
        cout << "Lista vacía";
        return 0;
    }
}

void Pila::despliega_Tope(){
    if(inicio){
        cout << "\nElemento al tope de la pila es: ";
        cout << inicio->valor << "\n";
    }else cout << "Pila Vacía \n";
}


//destructor libera la estructura de datos dinámica
Pila::~Pila(){
    Nodo *point = inicio;
    Nodo *del;
    while(point != NULL){
        del = point;
        point = point->siguiente;
        delete del;
    }
}