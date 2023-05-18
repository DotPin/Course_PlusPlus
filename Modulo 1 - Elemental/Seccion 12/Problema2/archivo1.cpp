#include <iostream>

using namespace std;

int main()
{
    char nombre[40],apellido[40];
    cout <<"Ingrese su nombre: ";
    cin.getline(nombre,40);
    cout <<"Ingrese su apellido: ";
    cin.getline(apellido,40);
    cout <<"El nombre y apellido ingresado es :"<<nombre<<" "<<apellido;
    return 0;
}