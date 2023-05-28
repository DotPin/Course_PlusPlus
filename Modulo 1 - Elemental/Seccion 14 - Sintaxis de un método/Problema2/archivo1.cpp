#include <iostream>

using namespace std;

class numeros{
    private:
        int a,b;
        void mayor(int a, int b);
    public:
        void iniciar();
};

void numeros::mayor(int x, int y){

    int my = x;
    if(my > y){
        cout <<"Numero: " <<x<<" es mayor";
    }else{
        cout <<"Numero: "<<y<<" es mayor";
    }

}

void numeros::iniciar(){
    cout << "Ingresar primer numero: ";
    cin >> a;
    cout << "Ingresar segundo numero: ";
    cin >> b;

    mayor(a,b);
}




int main(){

    numeros nm;
    nm.iniciar();

    return(0);
}