#include <iostream>

using namespace std;


int main(){

    float preg, resp, rst;
    cout << "Ingrese la cantidad de preguntas: ";
    cin >> preg;
    cout << "Ingrese la cantidad de respuestas: ";
    cin >> resp;

    rst = (resp/preg)*100;

    if(rst >= 90){
        cout << "Nivel Maximo con "<<rst;
    }else if(rst >= 75 && rst < 90){
        cout << "Nivel Medio con "<<rst;
    }else if(rst >= 50 && rst < 75){
        cout << "Nivel Regular con  "<<rst;
    }else if(rst < 50){
        cout << "Fuera de Nivel con "<<rst;
    }

    return(0);
}