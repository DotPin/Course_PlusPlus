#include <iostream>

using namespace std;

int main(){

    short i=0;
    float alturas, rst;
    bool flag=true;

    do{
        cout << "Ingrese la altura de la persona "<<i+1<<"\n";
        cin >> alturas;
        rst = rst + alturas;
        cout << "Contina? 1:si / 0:no :\n";
        cin >> flag;
        i++;
    }while(flag);

    cout << "Altura promedio: "<<rst/i;

    return(0);
}