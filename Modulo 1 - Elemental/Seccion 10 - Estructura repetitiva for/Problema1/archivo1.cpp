#include <iostream>

using namespace std;

int main(){

    short suma,n;
    float h, c;

    cout<<"Cantidad de coordenadas: ";
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {

        cout<<"\n\nDel siguiente triángulo ingresar: \n";
        cout<<"         *     \n";
        cout<<"        ***    \n";
        cout<<"       * * *   \n";
        cout<<"      *  *h *  \n";
        cout<<"     *   *   * \n";
        cout<<"    ***********\n";
        cout<<"         c     \n";
        cout << "Ingrese altura: ";
        cin >> h;
        cout << "Ingrese base: ";
        cin >> c;

        cout << "Base triángulo: "<<c<<" altura: "<<h<<" área "<<(h*c)/2<<"\n";
        if (((h*c)/2)>12){
            suma++;
        }
    }
    cout << "\nÁreas Mayores a 12: "<< suma;

    return(0);
}