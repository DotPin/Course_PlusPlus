#include <iostream>

using namespace std;

int main(){

    short i=1;
    int nm, suma=0;

    for (size_t i = 0; i <= 10; i++)
    {
        cout << "Ingrese el numero: ";
        cin >> nm;
        if(i>4){
            suma = nm + suma;
        }
    }

    cout << "Suma parcial: "<<suma;

    return(0);
}