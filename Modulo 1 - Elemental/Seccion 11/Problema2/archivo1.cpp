#include <iostream>

using namespace std;

int main(){

    string salida="",estado;
    int cta=0, saldo=0,suma=0;
    bool flag=true;

    do{

        cout << "Ingrese cta cliente: ";
        cin >> cta;
        if(cta>=0){
            cout << "Ingrese saldo cta: ";
            cin >> saldo;
            if(saldo>0){
                estado = "Acreedor";
                suma = suma + saldo;
            }else if(saldo < 0){
                estado = "Deudor";
            }else if(saldo == 0){
                estado = "Nulo";
            }
            salida =  salida + to_string(cta)+"\t\t"+to_string(saldo)+"\t"+estado+"\n";
        }

        if(cta<0){
            flag=false;
        }

    }while(flag);
    cout << "\nEstado de cuentas:\n";
    cout << "Cta\t\tSaldo\tEstado\n";
    cout << salida;
    cout << "\nSuma de Acreedores: "<< suma;
}
