#ifndef LISTAGEN_H
#define LISTAGEN_H

class ListaGen{
    private:
        class Nodo{
            public:
                int info;
                Nodo *sig;
        };

        Nodo *raiz;
        void imprimir(Nodo *reco);

    public:
        ListaGen();
        ~ListaGen();
        void insertarPrimero(int x);
        void imprimir();
};


#endif