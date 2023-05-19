#ifndef LISTAGEN_H
#define LISTAGEN_H

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
        void inserta(int x);
        void mostrar();
        void insertaFinal(int x);
        void inserta2(int x);
        void insertaAntFinal(int x);
        void borra1();
        void borra2();
        void borraUltimo();
        void borraInfo();
};

#endif