#include <iostream>

using namespace std;

class numeros{
    private:
        int a;
        void mostrar(int a);
        
    public:
        void iniciar();

};

void numeros::mostrar(int a){
    for (size_t i = 0; i < a; i++){
        cout <<"\n"<<i;
    }
    
}

void numeros::iniciar(){

    cout << "Ingrese un numero:";
    cin >> a;
    mostrar(a);
}


int main(){
    numeros nm;
    nm.iniciar();
    return(0);
}