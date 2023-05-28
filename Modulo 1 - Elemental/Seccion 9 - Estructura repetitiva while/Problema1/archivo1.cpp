#include <iostream>

using namespace std;

int main(){

    short i=1;
    float notas=0,mayores=0,menores=0;
    do{
        cout << "Ingrese nota "<<i<<"\n";
        cin >> notas;
        if(notas >= 7.0){
            mayores = mayores + 1;
        }else if(notas < 7.0){
            menores = menores + 1;
        }
    }while(i++<10);

    cout << "Cantidad de notas mayores 7.0 "<<mayores<<"\n";
    cout << "Cantidad de notas menores 7.0 "<<menores<<"\n";

    return(0);
}