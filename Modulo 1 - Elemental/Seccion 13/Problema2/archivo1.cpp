#include <iostream>

using namespace std;

class operaciones{
    private:
        int a,b;
    public:
        void inicializa();
        void suma();
        void resta();
        void multiplicacion();
        void division();
};

void operaciones::inicializa(){
    cout << "Ingrese primer numero";
    cin >> a;
    cout << "Ingrese primer numero";
    cin >> a;
}

void operaciones::suma(){
    cout << "Suma "<<a<<"+"<<b<<"="<<a+b;
}

void operaciones::resta(){
    cout << "Resta "<<a<<"-"<<b<<"="<<a-b;
}

void operaciones::multiplicacion(){
    cout << "Miltiplicaciones "<<a<<"*"<<b<<"="<<a*b;
}

void operaciones::division(){
    if(b==0){
        cout<<"No se puede hacer division por 0";
    }else{
        cout << "Division "<<a<<"/"<<b<<"="<<a/b;
    }
}


int main(){

    operaciones op;
    op.inicializa();
    op.suma();
    op.resta();
    op.multiplicacion();
    op.division();

    return(0);
}