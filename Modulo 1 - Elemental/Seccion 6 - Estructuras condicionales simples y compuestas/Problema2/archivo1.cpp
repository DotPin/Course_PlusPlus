#include <iostream>

using namespace std;

int main(){

    float n1, n2, n3;
    cout << "Ingrese Nota 1\n";
    cin >> n1;
    cout << "Ingrese Nota 2\n";
    cin >> n2;
    cout << "Ingrese Nota 3\n";
    cin >> n3;
    if (((n1+n2+n3)/3)>7.0){
        cout << "Promocionado";
    }else{
        cout << "Reprobado";
    }


    return 0;
}