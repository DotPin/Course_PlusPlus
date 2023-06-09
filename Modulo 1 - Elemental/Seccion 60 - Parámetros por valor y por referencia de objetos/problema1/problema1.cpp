#include "reloj.h"
#include <iostream>

using namespace std;

/*Plantear la clase Reloj y definir como atributo la hora, 
minuto y segundo. En el constructor inicializar los atributos. 
Definir un método que retorne si son iguales los atributos 
de dos objetos de tipo Reloj, el método tiene que tener la 
estructura*/

int main(int argc, char *argv[]){

    reloj run(12,15,45);
    reloj run2(12,35,45);
    run.imprimir();
    run2.imprimir();
    if (run.iguales(run2)){
        cout <<"Horas iguales\n";
    }else{
        cout <<"Horas distintas\n";
    }
    return 0;
}