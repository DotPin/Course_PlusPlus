#ifndef TEMPERATURA_H
#define TEMPERATURA_H

class temperatura{
        int minima;
        int maxima;
        int actual;
    public:
        temperatura(int min,int max,int act);
        //método inline
        int rango(){
            int valor = maxima - minima;
            return valor;
        }
        
        void imprimir();
};

#endif