#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un numero: ";
    cin >> b;
    cout << "Ingrese un numero: ";
    cin >> c;
    if (a == b && b == c && a == c ){
        cout << "Resultante :" <<(a+b)*c;
    }else{
        cout << "Numeros diferentes";
    }

    return(0);
}
