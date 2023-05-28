#include <iostream>

using namespace std;

int main(){

    string out;
    int edad;
    float mn=0,tr=0,nc=0,my;
    for (size_t i = 0; i < 5; i++)
    {
        cout << "Ingrese edad turno mañana: \n";
        cin >> edad;
        mn = mn + edad;
    }
    for (size_t i = 0; i < 6; i++)
    {
        cout << "Ingrese edad turno tarde: \n";
        cin >> edad;
        tr = tr + edad;
    }

    for (size_t i = 0; i < 11; i++)
    {
        cout << "Ingrese edad turno noche: \n";
        cin >> edad;
        nc = nc + edad;
    }
        
    mn  = mn/5;
    tr = tr/6;
    nc = nc/11;
    cout << "Promedios mañana: "<<mn<<" tarde: "<<tr<<" noche: "<<nc;

    my = mn;
    out=  "\nPromedio Mañana es mayor";
    if(my < tr){
        out = "\nPromedio Tarde es mayor";
        my = tr;
    }
    if( my < nc){
        out = "\nPromedio Noche es mayor";
    }

    cout << out;
    return(0);
}