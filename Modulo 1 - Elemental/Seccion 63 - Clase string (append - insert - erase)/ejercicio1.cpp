#include<iostream>
#include<string>

//Inicializar un string con una cadena de caracteres y aplicar los métodos: append, 
//insert y erese. Mostrar el estado final del string después de llamar a cada método.

using namespace std;

int main()
{
    string cad = "uno tres";
    cout << "Cadena original:" << cad << "\n";
    cad.append(" cuatro");
    cout << "Cadena despues de llamar a append:" << cad << "\n";
    cad.insert(3, " dos");
    cout << "Cadena despues de llamar a insert:" << cad << "\n";
    cad.erase(0, 4);
    cout << "Cadena despues de llamar a erase:" << cad << "\n";
    return 0;
}