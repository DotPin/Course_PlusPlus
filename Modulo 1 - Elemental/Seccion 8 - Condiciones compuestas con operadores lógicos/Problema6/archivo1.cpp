#include <iostream>

using namespace std;

int main(){

    float sueldo, antiguedad;
    cout << "Ingrese sueldo: ";
    cin >> sueldo;
    cout << "Ingrese antiguedad: ";
    cin >> antiguedad;

    if (sueldo <500 && antiguedad >= 10){
        cout << "Sueldo otorgado: "<<sueldo * 1.2;
    }else if(sueldo < 500 && antiguedad < 10){
        cout << "Sueldo otorgado: "<<sueldo * 1.05;
    }else if(sueldo >= 500){
        cout << "Sueldo otorgado: "<<sueldo;
    }

    return(0);
}