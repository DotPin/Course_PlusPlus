#include <iostream>

using namespace std;

int main(){

    int precio, cantidad;
    cout << "Ingrese el precio: \n";
    cin >> precio;
    cout << "Ingrese Cantidad \n";
    cin >> cantidad;
    cout << "Cantidad a Cancelar: $"<<precio*cantidad;

    return 0;
}