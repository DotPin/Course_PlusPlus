#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Ingrese un numero entre [1, 99]: \n";
    cin >> num;
    if(num > 0 && num <10){
        cout << "Largo de numero es de 1 dígito";
    }else if(num < 100){
        cout << "Largo de numero es de 2 dígitos";
    }else{
        cout << "Largo de numero es mayor de 2 dígitos";
    }
}