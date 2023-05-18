#include <iostream>

using namespace std;

/* Crear una matriz de 3 filas por 3 columnas. Implementar un método que permita cargar 
todas sus componentes, otro que la imprima y otra método que retorne la fila y columna 
(retorna dos datos el método) donde se encuentra el mayor elemento del vector 
(si está repetido retorne la posición de cualquiera de ellos) */


class matriz{
        int mtz[3][3];
    public:
        matriz();
        void imprimir();
        void mayor(int *x, int *y);
};

matriz::matriz(){
    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            cout << "Ingrese valor ("<<i<<")("<<j<<"): ";
            cin >> mtz[i][j];
        }
    }
    imprimir();
}

void matriz::imprimir(){
    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            cout <<mtz[i][j]<<"\t";
        }
        cout <<"\n";
    }
}

void matriz::mayor(int *x, int *y){
    int my = mtz[0][0];
    *x = 0;*y=0;
    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            if (my < mtz[i][j]) {
                my = mtz[i][j];
                *x = i;
                *y = j;
            }
        }
    }
}

int main(){

    matriz mt;
    int a,b;
    mt.mayor(&a,&b);
    cout << "Coordenada ("<<a<<")("<<b<<")";
    return(0);
}