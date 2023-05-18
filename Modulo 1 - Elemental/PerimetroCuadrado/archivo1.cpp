#include <iostream>

using namespace std;

//Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo

int main(){

    int lado, perimetro;
    cout << "Ingrese el lado del cuadrado ";
    cin >> lado;
    perimetro = 4*lado;
    cout << " Pedímetro de cuadrado "<<perimetro<<" de lado "<<lado;
    return 0;
}