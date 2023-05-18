#include <iostream>
#include "../../Aleatorio/Aleatorio.h"

//compilar g++ ../../Aleatorio/Aleatorio.cpp archivo1.cpp -o tst

using namespace std;


class predictor{
    private:
        char paises[5][40];
        int tmp[12][5];
        int prom[3][5];
        void mostrar();
        void tmedia();
        void trimestral();
    public:
        void iniciar();

};

void predictor::trimestral(){
    int may[5],mayor;
    short idx,idy;
    //inicializo acumulador
    for (size_t i = 0; i < 5; i++){
        may[i]=0;
    }
    
    //calculo los promedios trimestrales por pais
    for (size_t i = 0; i < 5; i++){
        for (size_t j = 0; j < 3; j++){
            may[i] = may[i] + prom[j][i];
        }
        may[i] = may[i]/3;
    }
    
    //busco el mayor
    mayor=may[0];
    for (size_t i = 0; i < 5; i++){
        if(mayor<may[i]){
            mayor = may[i];
            idx = i;
        }
    }
    cout << "\nT° media mayor\n";
    cout << "Pais: "<<paises[idx]<<" T°: "<<may[idx];
}

void predictor::tmedia(){
    short idx=0;

    cout <<"\nPromedios Trimestrales";
    cout << "\nPais 1\t"<<"Pais 2\t"<<"Pais 3\t"<<"Pais 4\t"<<"Pais 5\n";
    for (size_t i = 0; i < 5; i++){;
        cout << paises[i]<<"\t";
    };
    cout <<"\n";

    //inicializo acumulador matricial
    for (size_t i = 0; i < 5; i++){
        for (size_t j = 0; j < 3; j++){
            prom[j][i] = 0;
        }
    }
    
    //realizo los cálculos de promedios
    for (size_t i = 0; i < 5; i++){
        for (size_t j = 0; j < 12; j++){
            prom[idx][i] = prom[idx][i] + tmp[j][i];
            if(((j+1)%4)==0 && j!=0){
                idx++;
            }
        }
        idx=0;
    }

    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 5; j++){
            prom[i][j] = prom[i][j]/4;
            cout << prom[i][j] << "\t";
        }
        cout << "\n";
    }
    
    
}

void predictor::mostrar(){
    short inx=0;
    cout << "\nPais 1\t"<<"Pais 2\t"<<"Pais 3\t"<<"Pais 4\t"<<"Pais 5\n";
    for (size_t i = 0; i < 5; i++){;
        cout << paises[i]<<"\t";
    };
    cout<<"\n";
    for (size_t i = 0; i < 12; i++){
        for (size_t j = 0; j < 5; j++){
            cout<<tmp[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void predictor::iniciar(){

    Aleatorio *rnd = new Aleatorio(time(NULL));

    for (size_t i = 0; i < 5; i++){
        cout <<"Pais "<<i+1<<": ";
        cin.getline(paises[i],40);
        for(size_t j = 0; j < 12; j++){
            //cout<<"Ingrese T° mes "<<j+1<<": ";
            //cin >> tmp[j][i];
            tmp[j][i] = rnd->int_uniform(10,35);
        }
    }
    mostrar();
    tmedia();
    trimestral();
}

int main(){
    srand(time(NULL));
    predictor rst;
    rst.iniciar();

    return(0);
}