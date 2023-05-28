#include <iostream>

using namespace std;

int main(){

    int nm;

    cout << "Ingrese un numero: ";
    cin >> nm;

    if(nm > 0 && nm < 10){
        cout << "Numero de 1 cifra";
    }else if(nm > 9 && nm < 100){
        cout << "Numero de 2 cifras";
    }else if(nm > 99){
        cout << "Numero mayor a 3 cifras";
    }

    return(0);
}