#include<string>
#include<iostream>

//Acceder a un caracter individual del string por medio de un subíndice
//Inicializar un string con la cadena “hola” luego extraer el primer y 
//último caracter del string por medio de subíndices


using namespace std;

int main()
{
    string cadena1 = "Hola";
    cout << cadena1[0];
    cout << "\n";
    cout << cadena1[3];
    return 0;
}