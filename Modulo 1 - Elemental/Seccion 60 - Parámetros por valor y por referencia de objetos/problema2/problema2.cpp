#include "reloj.h"
#include <iostream>

using namespace std;

/*Volver a codificar el problema anterior pero ahora al 
método iguales hacer que llegue como referencia el 
parámetro (agregamos el modificador const ya que no 
tenemos que modificar el objeto que le pasamos como 
referencia)*/

int main(){

    reloj run1(12,24,53);
    //reloj run2(14,21,52);
    reloj run2(12,24,53);
    run1.imprimir();
    run2.imprimir();

    if(run1.iguales(run2)){
        cout <<"Son iguales\n";
    }else{
        cout <<"Son diferentes\n";
    }

    return 0;
}
