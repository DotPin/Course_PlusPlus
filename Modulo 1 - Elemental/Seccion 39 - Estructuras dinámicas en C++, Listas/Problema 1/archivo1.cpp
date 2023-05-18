#include <iostream>
#include "Cola.h"
#include "../../Aleatorio/Aleatorio.h"

using namespace std;

class supermercado{
    public:
        Aleatorio *rnd = new Aleatorio(time(NULL));
        int estado[3] = {0,0,0};
        int salida[3] = {-1,-1,-1};
        int cantAte[3] = {0,0,0};
        int marchan = 0;
        int tiempoEnCola = 0;
        int cantidadEnCola = 0;
        int llegada = rnd->int_uniform(2,4);
        Cola *cola[3];
        void init();
        void salidas(int ix, int mnt, Cola *cl);
        void simulacion();
};

void supermercado::init(){
    for (size_t i = 0; i < 3; i++){ cola[i] = new Cola(); }         
}

void supermercado::salidas(int idx, int mnt, Cola *cl){
    if (salida[idx] == mnt) 
        {
            cantAte[idx]++;
            estado[idx] = 0;
            if (!cl->vacia()) 
            {
                estado[idx] = 1;
                int m = cl->extrae();
                salida[idx] = mnt + rnd->int_uniform(7,13);
                tiempoEnCola = tiempoEnCola + (mnt - m);
                cantidadEnCola++;
            }
        }
}

void supermercado::simulacion(){
    init();
    for (int minuto = 0; minuto < 480; minuto++){
        if (llegada == minuto){
            if (estado[0] == 0){
                estado[0] = 1;
                salida[0] = minuto + rnd->int_uniform(7,13);
            }else{
                if (estado[1] == 0){
                    estado[1] = 1;
                    salida[1] = minuto + rnd->int_uniform(7,13);
                }else{
                    if (estado[2] == 0){
                        estado[2] = 1;
                        salida[2] = minuto + rnd->int_uniform(7,13);
                    }else{
                        if (cola[0]->cantidad() == 6 && cola[1]->cantidad() == 6 && cola[2]->cantidad() == 6){
                            marchan++;
                        }else{
                            if (cola[0]->cantidad() <= cola[1]->cantidad() && cola[0]->cantidad() <= cola[2]->cantidad()) {
                                cola[0]->inserta(minuto);
                            }else{
                                if (cola[1]->cantidad() <= cola[2]->cantidad()){
                                    cola[1]->inserta(minuto);
                                }else{
                                    cola[2]->inserta(minuto);
                                }
                            }
                        }
                    }
                }
            }
            llegada = minuto + rnd->int_uniform(2,4);
        }
        salidas(0,minuto,cola[0]);
        salidas(1,minuto,cola[1]);
        salidas(2,minuto,cola[2]);
    }
    cout <<"Clientes atendidos por caja: caja1=" <<cantAte[0] <<"  caja2=" <<cantAte[1] <<"  caja3=" <<cantAte[2] <<"\n";
    cout <<"Se marchan sin hacer compras:" <<marchan <<"\n";
    if (cantidadEnCola>0) 
    {
        int tiempoPromedio = tiempoEnCola / cantidadEnCola;
        cout <<"Tiempo promedio en cola:" <<tiempoPromedio <<"\n";
    }

}

int main(){

    supermercado *super;
    super = new supermercado();
    super->simulacion();
    delete super;
    return(0);
}