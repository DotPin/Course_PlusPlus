#include <iostream>

using namespace std;

class estudiante{
    private:
        char nm[5][40];
        float nota[5];
        void mostrar();
    public:
        void iniciar();

};

void estudiante::mostrar(){
    string status="NULL";
    short cnt=0;
    cout << "Estudiante\t\tNota:\t\tCondicion\n";
    for (size_t i = 0; i < 5; i++){
        if(nota[i]>=8){
            status="Muy Bueno";
            cnt++;
        }else if(nota[i]>4 && nota[i]<8){
            status = "Bueno";
        }else{
            status = "Insuficiente";
        }
        cout<<nm[i]<<"\t\t"<<nota[i]<<"\t\t"<<status<<"\n";
    }
    cout<<"Cantidad de Estudiantes status Muy Bueno: "<<cnt;
    
}

void estudiante::iniciar(){
    for (size_t i = 0; i < 5; i++){
        cout << "Ingrese nombre estudiante: ";
        cin.getline(nm[i],40);
        cout << "Ingrese nota de estudiante: ";
        cin >> nota[i];
        cin.get();
    }
    mostrar();
}


int main(){

    estudiante nts;
    nts.iniciar();
    return(0);
}