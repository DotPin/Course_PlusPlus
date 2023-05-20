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
    
    public:
        ListaGen();
        ~ListaGen();
        void insertar(int x);
        void imprimir();
};


#endif