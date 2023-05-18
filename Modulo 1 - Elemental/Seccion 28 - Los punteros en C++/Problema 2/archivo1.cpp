#include <iostream>

/* Definir tres variables enteras e inicializarlas con los valores 5,10 y 15. 
Luego definir una variable puntero a entero. Hacer que dicha variable apunte 
sucesivamente a las distintas variables definidas previamente e imprimir su 
contenido. */

using namespace std;

int main(){
    int a=5,b=10,c=15;
    int *x;
    x = &a;
    cout << "\nVariable A: "<<*x;
    x = &b;
    cout << "\nVariable B: "<<*x;
    x = &c;
    cout << "\nVariable C: "<<*x;

    return(0);
}