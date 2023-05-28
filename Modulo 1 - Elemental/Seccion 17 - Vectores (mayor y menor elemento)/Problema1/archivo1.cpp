#include <iostream>

using namespace std;

class numero{
    private:
        int nm[5];
        void mostrar(int *n);
    public:
        void iniciar();

};

void numero::mostrar(int *n){
    int mn = n[0];
    short cnt=0;
    for (size_t i = 0; i < 5; i++){
        if(mn > n[i]){
            mn = n[i];
            cnt=0;
        }
        if(mn == n[i]){
            cnt++;
        }
    }
    cout <<"\nNumero menor: "<<mn;
    cout <<"\nVeces repetido: "<<cnt;
}

void numero::iniciar(){
    for (size_t i = 0; i < 5; i++){
        cout << "Ingrese numero: ";
        cin >> nm[i];
    }
    mostrar(nm);
}


int main(){
    numero num;
    num.iniciar();
    return(0);
}