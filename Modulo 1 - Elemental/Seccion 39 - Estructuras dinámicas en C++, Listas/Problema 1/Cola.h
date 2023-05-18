#ifndef COLA_H
#define COLA_H
#include <iostream>

using namespace std;

class Cola{
    protected:
        class Nodo{
            public:
                int valor;
                Nodo *siguiente;
        };

        Nodo * inicio;
        Nodo * final;

    public:
        Cola(){inicio=0;final=0;}
        void inserta(int valor);
        int extrae(void);
        void despliega_Inicio(void);
        int cantidad(void);
        bool vacia(void);
        ~Cola();

};

#endif