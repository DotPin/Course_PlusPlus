#include <iostream>

using namespace std;

int main(){

    short i=1;
    int imp=0, par=0, nm, flag=1;
    do{

        cout << "Ingrese numero: "<<i<<"\n";
        cin >> nm;

        if((nm %2)==0){
            par++;
        }else{
            imp++;
        }

        i++;
        cout <<"Continua? 1:si / 0:no ";
        cin >> flag;
    }while(flag!=0);
    
    cout << "Cantidad de pares: "<<par<<"\n";
    cout << "Cantidad de impares: "<<imp<<"\n";

    return(0);
}