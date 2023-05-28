#include <iostream>
#include <stdlib.h>

using namespace std;

int aleatorio(int sm){      // rango del aleatoreo será [1,sm]
    return (1+rand())%(sm-1);
}

int main(){

    short i=0;
    int ls1, ls2, aux, aux2;
    cout << "Lista 1\tLista 2\n";
    do{
        aux = aleatorio(100);
        aux2 = aleatorio(100);
        cout <<aux<<"\t"<<aux2<<"\n";
        ls1 = ls1 + aux;
        ls2 = ls2 + aux2;
    }while(i++<15);

    if(ls1 > ls2){
        cout << "Lista 1 mayor acumulada ";
    }else if(ls1 < ls2){
        cout << "Lista 2 mayor acumulada ";
    }else if(ls1 == ls2){
        cout << "Listas acumuladas iguales ";
    }

    return(0);
}