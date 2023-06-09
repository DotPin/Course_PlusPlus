#include<string>
#include<iostream>

//Método: empty()
//Cargar un string por teclado y luego mostrar un mensaje que no se 
//ingresó caracteres por teclado o la cantidad de caracteres que se 
//ingresaron. Emplear el método empty

using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese una cadena:";
    getline(cin, cadena);
    if (cadena.empty())
    {
        cout << "No se ingresaron caracteres por teclado.";
    }
    else
    {
        cout << "La cadena tiene una longitud de:" << cadena.length();
    }
    return 0;
}