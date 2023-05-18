#include <iostream>
#include "../../Aleatorio/Aleatorio.h"

using namespace std;

class elementos{
        int vec[5];
    public:
        elementos();
        void imprimir();
        void imprimir(int hasta);
        void imprimir(int desde, int hasta);
};


elementos::elementos(){

    Aleatorio *rnd = new Aleatorio(time(NULL));

    for (size_t i = 0; i < 5; i++){
        vec[i] = rnd->int_uniform(0,9000);
    }
    
}

void elementos::imprimir(){
    cout<<"\nMétodo sobrecarga 1\n";
    for(size_t i = 0; i < 5; i++){
        cout <<vec[i]<<" ";
    }
    
}

void elementos::imprimir(int hasta){
    cout<<"\nMétodo sobrecarga 2\n";
    for(size_t i = 0; i < hasta; i++){
        cout <<vec[i]<<" ";
    }
}

void elementos::imprimir(int desde, int hasta){
    cout<<"\nMétodo sobrecarga 3\n";
    for(size_t i = desde; i < hasta; i++){
        cout <<vec[i]<<" ";
    }
    
}

int main(){

    elementos elm;
    elm.imprimir();
    elm.imprimir(3);
    elm.imprimir(2,4);

    return(0);
}