#include <iostream>
#include "../../Aleatorio/Aleatorio.h"

//compilar g++ ../../Aleatorio/Aleatorio.cpp archivo1.cpp -o tst

using namespace std;

class busqueda{
        int arr[5];
    public:
        busqueda();
        ~busqueda();
};

busqueda::busqueda(){
    Aleatorio *rnd = new Aleatorio(time(NULL));
    for (size_t i = 0; i < 5; i++){
        arr[i] = rnd->int_uniform(0,10);
    }
}

busqueda::~busqueda(){
    int mayor;
    mayor = arr[0];
    for (size_t i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
        if(mayor<arr[i]) mayor=arr[i];
    }
    cout<<"Mayor: "<<mayor;
}

int main(){
    busqueda bsq;
    return(0);
}