#ifndef ABB_H
#define ABB_H

using namespace std;

class abb{
    private:
        class Nodo{
            public:
                int info;
                Nodo *izq;
                Nodo *der;
        };
        Nodo *raiz;
        void borrar(Nodo *reco);
        void imprimirPre(Nodo *reco);
        void imprimirEntre(Nodo *reco);
        void imprimirPost(Nodo *reco);
    
    public:
        abb();
        ~abb();
        void insertar(int x);
        void imprimirPre();
        void imprimirEntre();
        void imprimirPost();
};

#endif