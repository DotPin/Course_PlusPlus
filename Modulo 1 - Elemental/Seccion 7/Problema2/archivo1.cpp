#include <iostream>

using namespace std;

int main(){

    int nm;

    cout << "Ingrese un numero: ";
    cin >> nm;

    if(nm>=0){
        cout << "Numero es positivo";
    }else{
        cout << "Numero es negativo";
    }

    return 0;
}