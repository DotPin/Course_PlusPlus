#include <iostream>

using namespace std;

int main(){

    float nm1, nm2;
    cout << "Ingrese numero 1 \n";
    cin >> nm1;
    cout << "Ingrese numero 2 \n";
    cin >> nm2;
    if(nm1 < nm2){
        cout << "Suma "<<nm1+nm2<<"\n";
        cout << "Diferencia "<<nm1-nm2<<"\n";
    }else{
        cout << "Proucto "<<nm1*nm2<<"\n";
        if(nm2 == 0){
            cout << "División por 0 no existe";
        }else{
            cout << "Division "<<nm1/nm2<<"\n";
        }
    }
    return 0;
}