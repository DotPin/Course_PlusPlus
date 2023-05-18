#include <iostream>

using namespace std;

int main(){

    short equ=0,isc=0,esc=0,n;
    int a,b,c,my;

    cout << "Ingrese cantidad de triángulos: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << "\nIngrese lado 1: ";
        cin >> a;
        cout << "Ingrese lado 2: ";
        cin >> b;
        cout << "Ingrese lado 3: ";
        cin >> c;
        if (a==b && a==c && b==c){
            equ = equ + 1;
        }else if((a==b && a!=c)||(b==c && b!=a)||(c==a && c!=b)){
            isc = isc + 1;
        }else if(a != b && a != c && b != c){
            esc = esc + 1;
        }

    }
    
    cout << "\nTriangulos Equilateros: "<<equ;
    cout << "\nTriangulos Iscosceles: "<<isc;
    cout << "\nTriangulos Escalenos: "<<esc;

    my=equ;
    if(my<equ){
        my = equ;
    }else if(my<isc){

    }else{
        my = esc;
    }

    cout << "\nTriángulo con menor cantidad: "<<my;


    return(0);
}
