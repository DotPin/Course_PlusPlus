#include <iostream>

using namespace std;

class productos{
    private:
        char producto[5][40];
        int precio[5];
        void mostrar();
    public:
        void iniciar();
};


void productos::mostrar(){
    short cnt=0;
    int valor=precio[0];
    for (size_t i = 0; i < 5; i++){
        if (valor < precio[i]){
            cnt++;
        }
        
    }
    cout << cnt << " Productos son mayores en precio a\n";
    cout <<producto[0]<<" Con valor: $"<<precio[0];
}

void productos::iniciar(){
    for (size_t i = 0; i < 5; i++){
        cout << "Ingrese nombre producto: ";
        cin.getline(producto[i],40);
        cout << "Ingrese valor producto: $";
        cin >>precio[i];
        cin.get();
    }
    
    mostrar();

}

int main(){

    productos start;
    start.iniciar();

    return(0);
}