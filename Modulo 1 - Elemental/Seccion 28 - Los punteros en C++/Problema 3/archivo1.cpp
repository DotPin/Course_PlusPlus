#include <iostream>

/* Definir dos variables float y un puntero a un tipo de dato float. 
Hacer que el puntero guarde sucesivamente las direcciones de la primera y segunda 
variable y cambiar el contenido de las mismas por asignación. 
Imprimir las dos variables de tipo float. */

using namespace std;

int main(){
    float a=1.2,b=2.3;
    float *c;
    c = &a;
    cout <<"\n Salida A->C: "<<*c;
    *c = 3.4;
    cout <<"\n Salida C->A: "<<a;
    c = &b;
    cout <<"\n Salida B->C: "<<*c;
    *c = 14.2;
    cout <<"\n Salida C->B: "<<b;



    return(0);
}