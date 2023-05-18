#include <iostream>
#include "../../Aleatorio/Aleatorio.h"

Aleatorio *rnd = new Aleatorio(time(NULL));

class cajero{
        int estado,llegada,salida,cntAtendidas;
        string nm;
    public:
        cajero();
        void setEstado(int e);
        void setLlegada(int l);
        void setSalida(int s);
        void setCnt(int c);
        void setNm(string n);
        int getEstado();
        int getLlegada();
        int getSalida();
        int getCnt();
        string getNm();
};

cajero::cajero(){
    estado=0;
    llegada = rnd->int_uniform(2,3);
    salida= -1;
    cntAtendidas = 0;
}

int cajero::getCnt() {return cntAtendidas;}
int cajero::getEstado() {return estado;}
int cajero::getLlegada() {return llegada;}
int cajero::getSalida() { return salida; }
string cajero::getNm() { return nm;}

void cajero::setCnt(int c) { cntAtendidas = c; }
void cajero::setEstado(int e) { estado = e; }
void cajero::setLlegada(int l) { llegada = l; }
void cajero::setSalida(int s) { salida = s; }
void cajero::setNm(string n) { nm = n; }

class mercado{
        cajero cj[3];
    public:
        mercado();
        void mostrar();
        void cambiar(int es, int sa, int cnt);
};

mercado::mercado(){
    for (size_t i = 0; i < 3; i++){
        cj[i].setNm("Cajero "+to_string(i));
    }
}

void mercado::cambiar(int c, int es, int cnt){
    cj[c].setCnt(cnt);
    cj[c].setEstado(es);
    cj[c].setLlegada(rnd->int_uniform(2,4));
    cj[c].setSalida(rnd->int_uniform(2,3));
}

void mercado::mostrar(){
    for (size_t i = 0; i < 3; i++){
        cout <<"\nNombre:"<<cj[i].getNm()<< " Estado "<<cj[i].getEstado()<<" llegada: "<<cj[i].getLlegada()<<" Salida "<<cj[i].getSalida()<<" atendidas "<<cj[i].getCnt(); ;
    }
}

int main(){

    mercado *arp = new mercado();
    arp->mostrar();
    arp->cambiar(0,1,23);
    arp->cambiar(1,0,13);
    arp->cambiar(2,1,18);
    arp->mostrar();
    return 0;
}