#include <iostream>
#include "../Aleatorio/Aleatorio.h"
#define ROW 4
#define COLUMN 2

class prueba{
        int matriz[ROW][COLUMN];
    public:
        prueba(Aleatorio *rnd);
        void mostrar();
};

prueba::prueba(Aleatorio *rnd){
    for (size_t i = 0; i < COLUMN; i++){
        for (size_t j = 0; j < ROW; j++){
            matriz[i][j] = rnd->int_uniform(0,100);
        }
    }
}

void prueba::mostrar(){
    for (size_t i = 0; i < COLUMN; i++){
        for (size_t j = 0; j < ROW; j++){
            cout<<matriz[i][j]<<"-";
        }
        cout<<"\n";
    }
}

int main(){

    Aleatorio *rnd = new Aleatorio(time(NULL));
    prueba *t = new prueba(rnd);
    t->mostrar();
    delete rnd;
    delete t;
    return 0;
}