#ifndef LISTADOBLE_H
#define LISTADOBLE_H

class ListaDoble{
    private:
        class Nodo{
            public:
                int info;
                Nodo *sig;
                Nodo *ant;
        };

        Nodo *raiz;

    public:
        ListaDoble();
        ~ListaDoble();
        void insertarInicio(int x);
        void mostrar();

};


#endif