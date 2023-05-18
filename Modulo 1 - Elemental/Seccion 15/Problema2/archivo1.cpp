#include <iostream>

using namespace std;

class resultados{
    private:
        int x[4],y[4],z[4];
        void sumar(int *a,int *b);
    public:
        void iniciar();

};

void resultados::sumar(int *a,int *b){
    for (size_t i = 0; i < 4; i++){
        z[i] = a[i] + b[i];
        cout <<"\n"<<a[i]<<"+"<<b[i]<<"="<<z[i];
    }
}

void resultados::iniciar(){

    for (size_t i = 0; i < 4; i++){
        cout << "Ingrese primer numero: ";
        cin >> x[i];
        cout << "Ingrese segundo numero: ";
        cin >> y[i];
    }
    sumar(x,y);

}


int main(){
    resultados rst;
    rst.iniciar();
    return(0);
}