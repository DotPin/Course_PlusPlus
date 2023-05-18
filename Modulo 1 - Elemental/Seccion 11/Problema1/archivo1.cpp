#include <iostream>

using namespace std;

int main(){

    int acm, crg;
    bool flag=true;

    do{
        cout << "\nIngrese numero: ";
        cin >> crg;
        if(crg == 9999){
            flag=false;
        }else{
            acm = acm + crg;
        }
    }while(flag);

    cout << "Numeros acumulados: "<<acm;

    return(0);
}