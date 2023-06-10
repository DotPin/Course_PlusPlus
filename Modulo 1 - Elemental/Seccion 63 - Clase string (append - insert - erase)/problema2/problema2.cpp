#include <iostream>
#include <string>

//Cargar una oración por teclado. Modificar el string de tal forma 
//que se borren todos los espacios en blanco entre palabras.

using namespace std;

int main(){

    string ingreso,salida,aux;

    cout <<"Ingrese una oración:\n";
    getline(cin,ingreso);

    for (size_t i = 0; i < ingreso.length(); i++){
        if(ingreso.at(i) !=' '){
            salida = salida + ingreso.at(i);
        } 
    }

    cout << "Limpieza: " <<salida<<"\n";
    

    return 0;
}