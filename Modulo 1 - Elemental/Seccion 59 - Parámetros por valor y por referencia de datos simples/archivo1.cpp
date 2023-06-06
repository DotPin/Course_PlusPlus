#include <iostream>

using namespace std;

/*Plantear una clase Vector que permita definir y cargar un vector de 5 elementos enteros. 
Definir un método que retorne el mayor y menor elemento del vector mediante dos parámetros por referencia.*/

class Vector {
    int vec[5];
public:
    void cargar();
    void imprimir();
    void mayorMenor(int &may, int &men);
};

void Vector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese elemento:";
        cin >> vec[f];
    }
}

void Vector::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f] << "-";
    }
    cout << "\n";
}

void Vector::mayorMenor(int &may, int &men)
{
    may = vec[0];
    men = vec[0];
    for (int f = 1; f < 5; f++)
    {
        if (vec[f]>may)
            may = vec[f];
        else
            if (vec[f] < men)
                men = vec[f];
    }
}

int main()
{
    Vector vector1;
    vector1.cargar();
    vector1.imprimir();
    int mayor, menor;
    vector1.mayorMenor(mayor, menor);
    cout << "Mayor elemento del vector:" << mayor << "\n";
    cout << "Menor elemento del vector:" << menor << "\n";
    return 0;
}