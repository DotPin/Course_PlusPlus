#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <cstdlib>

using namespace std;

class Pila{
    protected:
        class Nodo{
            public: 
                int valor;
                Nodo *siguiente;
        };
        Nodo * inicio;
    
    public:
        Pila(){inicio=0;}
        void inserta(int valor);
        int extrae(void);
        void despliega_Tope(void);
        int cantidad(void);
        ~Pila();

};

#endif