#include<iostream>

using namespace std;

class Reloj {
    int hora;
    int minuto;
    int segundo;
public:
    Reloj(int hora, int minuto, int segundo) { this->hora = hora; this->minuto = minuto; this->segundo = segundo; };
    void imprimir();
    void intentoCambiar(Reloj &r);
};

void Reloj::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << "\n";
}

void Reloj::intentoCambiar(Reloj &r)
{
    r.hora = 1;
    r.minuto = 0;
    r.segundo = 0;
}

int main()
{
    Reloj reloj1(10, 10, 10);
    Reloj reloj2(20, 20, 20);
    reloj1.intentoCambiar(reloj2);
    reloj1.imprimir();  // imprime: 10:10:10
    reloj2.imprimir();  // imprime: 1:0:0
    return 0;
}