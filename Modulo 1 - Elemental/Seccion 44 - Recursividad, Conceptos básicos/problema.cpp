#include <iostream>

using namespace std;

//método recursivo sin finalización

class Recursividad {
public:
    void imprimir(int x);
};

void Recursividad::imprimir(int x)
{
    cout<<x<<"-";
    imprimir(x - 1);
}

int main()
{
    Recursividad *recu = new Recursividad();
    recu->imprimir(5);
    delete recu;
    return 0;
}