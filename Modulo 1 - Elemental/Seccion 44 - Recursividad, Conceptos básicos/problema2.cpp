#include <iostream>

using namespace std;

//Método recursivo con condición de tope regresivo

class Recursividad {
public:
    void imprimir(int x);
};

void Recursividad::imprimir(int x)
{
    if (x > 0)
    {
        cout << x << "-";
        imprimir(x - 1);
    }
}

int main()
{
    Recursividad *recu = new Recursividad();
    recu->imprimir(5);
    delete recu;
    return 0;
}