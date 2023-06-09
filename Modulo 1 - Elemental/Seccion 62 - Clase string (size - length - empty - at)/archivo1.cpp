#include<string>
#include<iostream>

//Métodos: length() y size()
//Mostrar la cantidad de caracteres de tiene un string empleando estos dos métodos


using namespace std;

int main()
{
    string cadena1 = "Hola";
    cout << "cadena:" << cadena1;
    cout << "\n";
    cout << cadena1.size();
    cout << "\n";
    cout << cadena1.length();
    return 0;
}