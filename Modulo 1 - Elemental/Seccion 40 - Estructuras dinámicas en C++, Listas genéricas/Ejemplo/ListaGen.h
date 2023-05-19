#ifndef LISTAGEN_H
#define LISTAGEN_H
#include <iostream>

using namespace std;

class ListaGen{
    private:
        class Nodo{
            public:
                int info;
                Nodo *sig;
        };

        Nodo *raiz;
    
    public:
        ListaGen();
        ~ListaGen();
        int cantidad();
        void insertar(int pos,int x);
        int extraer(int pos);
        void borrar(int pos);
        void intercambiar(int pos1, int pos2);
        bool vacia();
        int mayor();
        void imprimir();
        int posMayor();
        bool ordenada();
        bool existe(int x);
};


#endif