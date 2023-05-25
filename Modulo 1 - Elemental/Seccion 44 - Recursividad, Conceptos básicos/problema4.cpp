#include<iostream>

using namespace std;

//Recursividad para factorial

class Recursividad {
public:
    int factorial(int fact);
};

int Recursividad::factorial(int fact)
{
    if (fact>0) {
        int valor = fact * factorial(fact - 1);
        return valor;
    }
    else
        return 1;
}


int main()
{
    Recursividad *recu = new Recursividad();
    cout << "El factorial de 4 es " << recu->factorial(4);
    delete recu;
    return 0;
}