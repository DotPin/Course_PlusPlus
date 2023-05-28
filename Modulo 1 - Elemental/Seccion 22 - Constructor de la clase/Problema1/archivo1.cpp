#include <iostream>

using namespace std;

class empleado{
    private:
        string nombre;
        int sueldo;

    public:
        empleado(string name,int rent);
        void imprimir();
};


empleado::empleado(string n, int r){
    nombre = n;
    sueldo = r;
}

void empleado::imprimir(){
    cout <<nombre<<" $"<<sueldo<<"\n";
    if (sueldo>3000){
        cout << nombre <<" debe pagar impuesto";
    }else{
        cout << nombre <<" no paga impuesto";
    }
}

int main(){
    empleado emp("diego", 2000);
    emp.imprimir();
    return(0);
}