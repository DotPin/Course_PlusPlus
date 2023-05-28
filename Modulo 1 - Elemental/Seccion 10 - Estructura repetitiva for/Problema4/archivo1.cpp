#include <iostream>

using namespace std;

int main(){

    short i=1;
    int entrada;
    do{
        cout << "Ingrese tabla de multiplicar [1-10]";
        cin >> entrada;
    }while(entrada>10 && entrada<1);
    
    cout << "Tabla el "<<entrada<<"\n";
    for (size_t i = 1; i <= 12; i++)
    {
        cout<<entrada<<" x "<<i<<"="<<entrada*i<<"\n";
    }
    
    return(0);
}