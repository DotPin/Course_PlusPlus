#include<string>
#include<iostream>

//Operador +
//Realizar la carga de dos string por teclado luego crear un tercer string concatenando los dos con el caracter "-" entre medio

using namespace std;

int main()
{
    string s1;
    string s2;
    cout << "Primer cadena:";
    getline(cin, s1);
    cout << "Segundo cadena:";
    getline(cin, s2);
    string s3 = s1 + "-" + s2;
    cout << "string que resulta de la concatenacion de los dos anteriores:" << s3;
    return 0;
}