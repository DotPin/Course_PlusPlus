#include <iostream>
#include "Cola.h"
#include "../Aleatorio/Aleatorio.h"

using namespace std;

class CajeroAutomatico{
    public:
        void simulacion();
};

void CajeroAutomatico::simulacion(){

    Aleatorio *rnd = new Aleatorio(time(NULL));

    int estado=0;
    int llegada = rnd->int_uniform(2,3);
    int salida = -1;
    int cntAtendidas = 0;
    Cola *cola = new Cola();
    for (size_t minuto = 0; minuto < 600; minuto++){
        if(llegada == minuto){
                if(estado == 0){
                    estado = 1;
                    salida = minuto + rnd->int_uniform(2,4);
                }else{
                    cola->inserta(minuto);
                }
                llegada = minuto + rnd->int_uniform(2,3);
        }
        if(salida == minuto){
            estado = 0;
            cntAtendidas++;
            if(!cola->vacia()){
                cola->extrae();
                estado = 1;
                salida = minuto + rnd->int_uniform(2,4);
            }
        }
    }
    cout << "Atendidos: "<<cntAtendidas <<"\n";
    cout << "En Cola: "<<cola->cantidad() <<"\n";
    cout << "Minuto llegada: "<<cola->extrae();
}



int main(){

    CajeroAutomatico *cj1 = new CajeroAutomatico();
    cj1->simulacion();
    delete cj1;

    return(0);
}