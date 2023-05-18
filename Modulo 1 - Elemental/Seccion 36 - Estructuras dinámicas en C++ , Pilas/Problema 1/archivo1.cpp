#include <iostream>
#include "../../Aleatorio/Aleatorio.h"
#include "Pila.h"

using namespace std;

int main(){

    Pila *mia = new Pila();
    Aleatorio *rnd = new Aleatorio(time(NULL));
    int ext,tope=30;
    for (size_t i = 0; i < tope; i++){
        mia->inserta(rnd->int_uniform(1,100));
    }
    //cout << "\nCantidad de elementos en pila: "<<mia->cantidad();
    mia->despliega_Tope();

    /*
    do{
        cout <<"\nIngrese la cantidad de valores a extraer: ";
        cin >> ext;
    }while(ext > tope);
    for (size_t i = 0; i < ext; i++){
        mia->extrae();
    }
    
    mia->despliega_Tope();*/

    return(0);
}