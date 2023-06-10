#include <iostream>
#include <string>

//Realizar un programa que permita cargar una palabra por teclado. Modificar el 
//string para agregar un guión entre cada letra de la palabra.

using namespace std;

int main(){

    string palabra,salida="";
    cout <<"Ingrese una palabra: \n";
    cin >> palabra;
    for (size_t i = 0; i < palabra.length()-1; i++){
        //salida.append( palabra.at(i) +"-" );
        salida = salida + palabra.at(i) + "-";
    }
    salida = salida + palabra.at( palabra.length()-1 );
    cout <<"Salida de la palabra:\n"<<salida;

    return 0;
}