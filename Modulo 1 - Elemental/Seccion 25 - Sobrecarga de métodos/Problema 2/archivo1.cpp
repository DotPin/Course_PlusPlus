#include <iostream>

using namespace std;

class puntos{
        int x,y;
    public:
        puntos();
        puntos(int a,int b);
};

puntos::puntos(){ 
    x=0;y=0;
    cout <<"\nInicio Parámetro x: "<<x<<" parámetro y: "<<y;    
}

puntos::puntos(int a, int b){
    x = a; y = b;
    cout <<"\nParámetro x: "<<x<<" parámetro y: "<<y;
}

int main(){

    puntos pts, pts1(3,5);
    
    return(0);
}