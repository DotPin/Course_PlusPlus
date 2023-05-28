#include <iostream>
#include <cstring>      //librería para ocupar strcpy

using namespace std;

class paises{
    private:
        char pais[5][40];
        int pob[5];
        void ordenar1();
        void ordenar2();
    public:
        void iniciar();

};

void paises::ordenar1(){
    int swc=1,k=0,aux;
    char aux1[40];
    while(swc!=0){
        swc = 0;
        k++;
        for (size_t i = 0; i <(5-k) ; i++){
            if(int(pais[i][0]) > int(pais[i+1][0])){
                aux = pob[i];
                pob[i] = pob[i+1];
                pob[i+1] = aux;
                strcpy(aux1,pais[i]);
                strcpy(pais[i],pais[i+1]);
                strcpy(pais[i+1],aux1);
                swc = 1;
            }
        }
    }
}

void paises::ordenar2(){
    int swc=1,k=0,aux;
    char aux1[40];
    while(swc!=0){
        swc = 0;
        k++;
        for (size_t i = 0; i <(5-k) ; i++){
            if(pob[i] < pob[i+1]){
                aux = pob[i];
                pob[i] = pob[i+1];
                pob[i+1] = aux;
                strcpy(aux1,pais[i]);
                strcpy(pais[i],pais[i+1]);
                strcpy(pais[i+1],aux1);
                swc = 1;
            }
        }
    }
}


void paises::iniciar(){
    for (size_t i = 0; i < 5; i++){
        cout << "Ingrese pais:";
        cin.getline(pais[i],40);
        cout << "Ingrese poblacion: ";
        cin >> pob[i];
        cin.get();
    }
    ordenar1();
    cout << "\nPais\t\tPoblacion\n";
    for (size_t i = 0; i < 5; i++){
        cout<<pais[i]<<"\t\t"<<pob[i]<<"\n";
    }
    ordenar2();
    cout << "\nPais\t\tPoblacion\n";
    for (size_t i = 0; i < 5; i++){
        cout<<pais[i]<<"\t\t"<<pob[i]<<"\n";
    }
    
}


int main(){
    paises ps;
    ps.iniciar();
    return(0);
}
