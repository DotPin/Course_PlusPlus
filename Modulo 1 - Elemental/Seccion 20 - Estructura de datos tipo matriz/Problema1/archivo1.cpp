#include <iostream>

using namespace std;

class matrices{
    private:
        int mat[2][5];
        void mostrar();
    public:
        void iniciar();


};

void matrices::mostrar(){
    for (size_t i = 0; i < 2; i++){
        for (size_t j = 0; j < 5; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void matrices::iniciar(){
    for (size_t i = 0; i < 2; i++){
        for (size_t j = 0; j < 5; j++){
            cout << "Ingrese numero ("<<i<<","<<j<<") :";
            cin >> mat[i][j];
        }
    }
    mostrar();
}

int main(){

    matrices nm;
    nm.iniciar();

    return(0);
}