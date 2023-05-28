#include <iostream>

using namespace std;

//Escribir un programa en el cual se ingresen cuatro números, 
//calcular e informar la suma de los dos primeros y el producto 
//del tercero y el cuarto.

int main(){

    int num1, num2, num3, num4;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;
    cout << "ingrese el tercer numero: ";
    cin >> num3;
    cout << "ingrese el cuarto numero: ";
    cin >> num4;
    cout << "Resultado suma "<< num1+num2<<"\n";
    cout << "Resultado Producto "<< num3*num4<<"\n";

    return 0;
}