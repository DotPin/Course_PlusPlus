#include <iostream>

using namespace std;

class socio{
        string nombre;
        int antiguedad;
    public:
        socio();
        string rNombre();
        int rAntiguedad();
};

class club{
        socio socio1, socio2, socio3;
    public:
        void imprimir();
};


socio::socio(){
    cout <<"Ingrese nombre del socio: ";
    cin >> nombre;
    cout <<"Ingrese antiguedad: ";
    cin >> antiguedad;
}

int socio::rAntiguedad(){
    return antiguedad;
}

string socio::rNombre(){
    return nombre;
}

void club::imprimir(){
    int may;
    string nom;
    may = socio1.rAntiguedad();
    nom = socio1.rNombre();
    if(may<socio2.rAntiguedad()){
        may = socio2.rAntiguedad();
        nom = socio2.rNombre();
    }
    if(may<socio3.rAntiguedad()){
        may = socio3.rAntiguedad();
        nom = socio3.rNombre();
    }

    cout <<"Socio "<<nom<<" Mayor antiguedad "<<may;
}

int main(){

    club clb;
    clb.imprimir();
    return(0);
}