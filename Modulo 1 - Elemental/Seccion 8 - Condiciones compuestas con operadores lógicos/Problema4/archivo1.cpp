#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cout <<"Ingrese primer numero: ";
    cin >> a;
    cout <<"Ingrese segundo numero: ";
    cin >> b;
    cout <<"Ingrese tercer numero: ";
    cin >> c;

    if(a < 10 || b < 10 || c < 10){
        cout <<"Alguno de los numeros es menor a 10";
    }
    return(0);
}