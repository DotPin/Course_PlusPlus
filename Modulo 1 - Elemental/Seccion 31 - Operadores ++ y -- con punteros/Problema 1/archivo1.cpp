#include <iostream>

/* Plantear una clase para administrar un vector de 5 enteros. 
Definir además del método para cargar el vector un método que 
imprima las componentes empleando un puntero que avance por todas 
las direcciones de las componentes utilizando el operador ++. */


using namespace std;


class admin{
        int vec[5];
    public:
        admin();
        void imprimir();
};

admin::admin(){
    for (size_t i = 0; i < 5; i++){
        cout <<"Ingrese numero: ";
        cin >> vec[i];
    }
}

void admin::imprimir(){
    int *p;
    p = &vec[0];
    for (size_t i = 0; i < 5; i++){
        cout <<*p <<" ";
        p++;
    }
    
}

int main(){

    admin nm;
    nm.imprimir();

    return(0);
}