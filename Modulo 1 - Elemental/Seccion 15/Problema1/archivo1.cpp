#include <iostream>

using namespace std;

class acumulado{
    private:
        float nm[8];
        void acm1(float *v);
        void acm2(float *v);
        void acm3(float *v);

    public:
        void iniciar();
};

void acumulado::acm1(float *v){
    float acm=0;
    for (size_t i = 0; i < 8 ; i++){
        acm = acm + v[i];
    }
    cout << "\nAcumulado total: "<<acm;
    
}

void acumulado::acm2(float *v){
    float acm=0;
    for (size_t i = 0; i < 8; i++){
        if(v[i]>36){
            acm = acm + v[i];
        }
    }
    cout << "\nAcumulado mayores a 36: "<<acm;
}

void acumulado::acm3(float *v){
    short cnt=0;
    for (size_t i = 0; i < 8; i++){
        if(v[i]>50){
            cnt++;
        }
    }
    cout << "\nAcumulado mayores a 50: "<<cnt;
}

void acumulado::iniciar(){
    for (size_t i = 0; i < 7; i++){
        cout << "Ingrese número: ";
        cin >> nm[i];
    }
    acm1(nm);
    acm2(nm);
    acm3(nm);
}

int main(){
    acumulado start;
    start.iniciar();
    return(0);
}