#include <iostream>

using namespace std;

int main(){

    short i=0,j,c1=0,c2=0,c3=0,c4=0;
    float x,y;

    cout << "Ingrese cantidad de coordenadas:\n";
    cin >> j;
    for (size_t i = 0; i < j; i++)
    {
        cout << "Ingrese coordenada x: ";
        cin >> x;
        cout << "Ingrese coordenada y: ";
        cin >> y;

        if(x > 0 && y > 0){
            c1++;
        }else if(x < 0 && y > 0){
            c2++;
        }else if(x < 0 && y < 0){
            c3++;
        }else if(x > 0 && y < 0){
            c4++;
        }
    }

    cout <<"Cantidad en C1: "<<c1<<"\n";
    cout <<"Cantidad en C2: "<<c2<<"\n";
    cout <<"Cantidad en C3: "<<c3<<"\n";
    cout <<"Cantidad en C4: "<<c4<<"\n";

    return(0);
}