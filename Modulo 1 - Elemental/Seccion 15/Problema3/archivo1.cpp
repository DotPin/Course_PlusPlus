#include <iostream>

using namespace std;

class curso{
    private:
        float notasA[5], notasB[5];
        void mejor(float *a,float *b);
    public:
        void iniciar();
};

void curso::mejor(float *a, float *b){
    float acmA=0, acmB=0;
    string rs="NULL";
    for (size_t i = 0; i < 5; i++){
        acmA = acmA + a[i];
        acmB = acmB + b[i];
    }
    acmA = acmA/5;
    acmB = acmB/5;
    if(acmA > acmB){
        rs = "Curso A Prom Gral. :"+to_string(acmA);
    }else{
        rs = "Curso B Prom Gral. :"+to_string(acmB);
    }
    cout << "\nMejor "<<rs;
}

void curso::iniciar(){
    for (size_t i = 0; i < 5; i++){
        cout << "Ingrese nota "<<i+1<<" Curso A: ";
        cin >> notasA[i];
        cout << "Ingrese nota "<<i+1<<" Curso B: ";
        cin >> notasB[i];
    }
    cout <<"Notas Curso A\tNotas Curso B";
    for (size_t i = 0; i < 5; i++)
    {
        cout <<"\n"<<notasA[i]<<"\t\t"<<notasB[i];
    }
    mejor(notasA,notasB);
}

int main(){
    curso rst;
    rst.iniciar();
    return(0);
}
