#include <iostream>

using namespace std;

class operaciones{
    private:
        int a,b;
        void suma();
        void resta();
        void multiplicacion();
        void division();
    public:
        operaciones(int x, int y);
};

operaciones::operaciones(int x, int y){
    a = x;
    b = y;
    suma();
    resta();
    multiplicacion();
    division();
}

void operaciones::suma(){
    cout <<"\nSuma: "<<a<<"+"<<b<<"="<<a+b;
}
void operaciones::resta(){
    cout <<"\nResta: "<<a<<"-"<<b<<"="<<a-b;
}
void operaciones::multiplicacion(){
    cout <<"\nMultiplicacion: "<<a<<"*"<<b<<"="<<a*b;
}
void operaciones::division(){
    if(b>0){
        cout<<"\nDivision: "<<a<<"/"<<b<<"="<<a/b;
    }else{
        cout<<"\nDivision por 0 no existe";
    }
}

int main(){

    operaciones op(4,5);

    return(0);
}