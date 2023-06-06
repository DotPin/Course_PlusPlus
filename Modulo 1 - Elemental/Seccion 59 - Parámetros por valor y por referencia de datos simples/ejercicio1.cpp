#include<iostream>

using namespace std;

class Prueba {
public:
    void cambiar1(int z);
    void cambiar2(int &z);
};

void Prueba::cambiar1(int z)
{
    z = 0;
}

void Prueba::cambiar2(int &z)
{
    z = 0;
}

int main()
{
    Prueba prueba1;
    int num = 10;
    cout << "Valor de la variable num:" << num << "\n";
    prueba1.cambiar1(num);
    cout << "Valor de la variable num luego de enviarla por valor:" << num << "\n";
    prueba1.cambiar2(num);
    cout << "Valor de la variable num luego de enviarla por referencia:" << num << "\n";
    return 0;
}