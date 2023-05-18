#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a=2,b=12,c=42,media,varianza;

    cout << "Valores: "<<a<<" "<<b<<" "<<c;
    media = (a+b+c)/3;
    varianza = ( pow((a-media),2) + pow((b-media),2) + pow((c-media),2) )/2;
    cout << "\nVarianza: "<<varianza;

    return(0);
}