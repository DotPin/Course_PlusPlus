#include <iostream>

using namespace std;

class persona{
        string nombre;
        int edad;
    public:
        persona();
        void mostrar();
};

persona::persona(){
    cout << "\nIngrese nombre: ";
    cin >> nombre;
    cout << "\nIngrese edad: ";
    cin >> edad;
}

void persona::mostrar(){
    cout << "\nPersona: "<<nombre;
    cout << "\nEdad: "<<edad;
}

class empleado: persona{
        int sueldo;
    public:
        empleado();
        void imprimir();
};

empleado::empleado(){
    cout << "\nIngrese el sueldo: ";
    cin >> sueldo;
}

void empleado::imprimir(){
    cout << "\nSueldo: "<<sueldo;
}

int main(){

    persona prs;
    prs.mostrar();

    empleado emp;
    emp.imprimir();

    return(0);
}