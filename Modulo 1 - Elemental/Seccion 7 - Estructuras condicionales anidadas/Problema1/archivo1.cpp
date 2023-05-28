#include <iostream>

using namespace std;

int main(){

    int nm1, nm2, nm3, mayor;
    
    cout << "Ingrese primer numero";
    cin >> nm1;
    cout << "Ingrese segundo numero";
    cin >> nm2;
    cout << "Ingrese tercer numero";
    cin >> nm3;

    mayor = nm1;
    if(mayor < nm2){
        mayor = nm2;
    }
    if(mayor < nm3){
        mayor = nm3;
    }

    cout << "El numero mayor: "<<mayor;

    return(0);
}