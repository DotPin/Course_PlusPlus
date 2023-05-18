#include <iostream>

using namespace std;

class empleado{
    private:
        char nombre[10];
        int sueldo;
    public:
        void carga();
        void imprime();
};

void empleado::carga(){
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese sueldo: ";
    cin >> sueldo;
}

void empleado::imprime(){
    cout << "Empleado: "<<nombre;
    if(sueldo>3000){
        cout<<"\nDebe pagar impuesto";
    }else{
        cout<<"\nSin efecto de impuesto";
    }
}


int main(){
    empleado emp;
    emp.carga();
    emp.imprime();
    return(0);
}