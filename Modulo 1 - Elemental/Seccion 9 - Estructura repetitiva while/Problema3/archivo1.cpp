#include <iostream>

using namespace std;

int main(){

    short medio=0, alto=0,i=0;
    float sueldos,importe;
    bool flag=true;

    do{
        cout <<"Ingrese sueldo de empleado: "<<i+1<<"\n";
        cin >> sueldos;
        importe = importe + sueldos;
        if(sueldos >=100 && sueldos <=300){
            medio++;
        }else if(sueldos >300){
            alto++;
        }
        i++;
        cout <<"¿Continuar? 1:si / 0:no: \n";
        cin >> flag;
    }while(flag!=0);

    cout << "Sueldos medios: "<<medio<<"\n";
    cout << "Sueldos Altos: "<<alto<<"\n";
    cout << "Importe de empresa: "<<importe<<"\n";
    return(0);
}
