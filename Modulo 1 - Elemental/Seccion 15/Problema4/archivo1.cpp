#include <iostream>

using namespace std;

class numero{
    private:
        int nm[10];
        void verificacion(int *v);
    public:
        void iniciar();
};

void numero::verificacion(int *v){

    short cnt=0;
    for (size_t i = 1; i < 10; i++){
        if(v[i-1]<v[i]){
            cnt++;
        }
    }
    if (cnt == 9){
        cout << "Vector Ordenado";
    }else{
        cout << "Vector sin ordenar";
    }
    
}

void numero::iniciar(){
    for (size_t i = 0; i < 10; i++){
        cout << "Ingrese numero "<<i+1<<" :";
        cin >>nm[i];
    }
    verificacion(nm);
}


int main(){
    numero rst;
    rst.iniciar();
    return(0);
}