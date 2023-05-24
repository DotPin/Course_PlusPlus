#ifndef LISTADCIRCULAR_H
#define LISTADCIRCULAR_H

using namespace std;

class ListaDCircular{
    private:
        class Nodo{
            public:
                int info;
                Nodo *sig;
                Nodo *ant;
        };
        Nodo *raiz;
    public:
        ListaDCircular();
        ~ListaDCircular();
        void mostrar();
        void insertarPrimero(int x);
        void insertarUltimo(int x);
        int cantidad();
        void borrar(int num);
};


#endif