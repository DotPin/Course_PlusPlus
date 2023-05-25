#ifndef ABB_H
#define ABB_H

class abb{
    private:
        class Nodo{
            public:
                int info;
                Nodo *izq;
                Nodo *der;
        };
        Nodo *raiz;
        int cant;
        int altura;
        void borrar(Nodo *reco);
        void imprimirEntre(Nodo *reco);
        void cantidad(Nodo *reco);
        void cantidadNodosHoja(Nodo *reco);
        void imprimirEntreConNivel(Nodo *reco, int nivel);
        void retornarAltura(Nodo *reco, int nivel);
    public:
        abb();
        ~abb();
        void insertar(int x);
        bool existe(int x);
        void imprimirEntre();
        int cantidad();
        int cantidadNodosHoja();
        void imprimirEntreConNivel();
        int retornarAltura();
        void mayorValor();
        void borrarMenor();

};

#endif