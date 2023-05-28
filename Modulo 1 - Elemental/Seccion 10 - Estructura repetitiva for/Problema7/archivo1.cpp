#include <iostream>

using namespace std;

int main(){

    short n=0, neg=0, pos=0, mml=0,acm=0;
    int ing;
    cout << "Ingrese cantidad de numeros: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Ingrese numero: ";
        cin >> ing;

        acm = acm + ing;

        if(ing < 0){
            neg++;
        }else if(ing>=0){
            pos++;
        }
        if( (ing%15)==0){
            mml++;
        }
    }
    
    cout << "\nNumeros negativos: "<<neg;
    cout << "\nNumeros positivos: "<<pos;
    cout << "\nNumeros multiplos de 15: "<<mml;
    cout << "\nAcumulado: "<<acm;

    return(0);
}