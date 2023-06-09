#include<string>
#include<iostream>


//Creación, inicialización por asignación y carga por teclado de un objeto de tipo string
//Para permitir ingresar espacios en blanco dentro del string por teclado debemos utilizar la función getline

using namespace std;

int main()
{
    string cadena1 = "Hola mundo";
    string cadena2;
    cout << "Ingrese una cadena de caracteres:";
    getline(cin, cadena2);
    cout << "Primer string:" << cadena1 << "\n";
    cout << "Segundo string:" << cadena2;
    return 0;
}