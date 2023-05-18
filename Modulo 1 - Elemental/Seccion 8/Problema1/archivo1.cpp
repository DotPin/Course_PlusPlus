#include <iostream>

using namespace std;


int main(){

    int dd, mm, yy;
    do{
    
        cout << "Ingrese el día: ";
        cin >>dd;

    }while(dd < 0 || dd > 31);
    do{
        cout << "Ingrese el mes: ";
        cin >>mm;
    }while(mm<0 || mm>12);
    do{
        cout << "Ingrese el año: ";
        cin >>yy;
    }while(yy<1900 || yy>2900);

    if (dd == 25 && mm == 12){
        cout << "Fecha corresponde a navidad: "<<dd<<"/"<<mm<<"/"<<yy;
    }else{
        cout << "Fecha del año";
    }


    return(0);
}