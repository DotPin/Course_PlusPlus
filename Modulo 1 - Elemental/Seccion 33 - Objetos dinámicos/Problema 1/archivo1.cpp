#include <iostream>

using namespace std;


class persona{
        char nombre[40];
        int edad;
    public:
        void iniciar();
        void imprimir();
        void esMayorEdad();
};

void persona::iniciar(){
    cout << "ingrese nombre: ";
    cin.getline(nombre,40);
    cout << "Ingrese edad: ";
    cin >> edad;
    cin.get();
}

void persona::imprimir(){
    cout << "\nNombre: "<<nombre<<" edad: "<<edad;
}

void persona::esMayorEdad(){
    if (edad>=18){
        cout <<"\n"<< nombre << " es mayor de edad";
    }else{
        cout <<"\n"<< nombre << " es menor de edad";
    }
}

int main(){

    persona *per;
    per = new persona();

    per->iniciar();
    per->imprimir();
    per->esMayorEdad();

    delete per;

    return(0);
}