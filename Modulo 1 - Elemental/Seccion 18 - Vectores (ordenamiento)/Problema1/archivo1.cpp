#include <iostream>

using namespace std;

class numero{
    private:
        int nm[5];
        void ordenar(int *n);
    public:
        void iniciar();

};

void numero::ordenar(int *n){
    int swc=1,k=0,aux;
    while(swc!=0){
        swc = 0;
        k++;
        for (size_t i = 0; i <(5-k) ; i++){
            if(n[i] > n[i+1]){
                aux = n[i];
                n[i] = n[i+1];
                n[i+1] = aux;
                swc = 1;
            }
        }
        
    }
    for (size_t i = 0; i < 5; i++){
        cout <<n[i]<<" ";
    }
    
}

void numero::iniciar(){
    for (size_t i = 0; i < 5; i++){
        cout << "Ingrese numero: ";
        cin >> nm[i];
    }
    ordenar(nm);
}

int main(){
    numero num;
    num.iniciar();
    return(0);
}