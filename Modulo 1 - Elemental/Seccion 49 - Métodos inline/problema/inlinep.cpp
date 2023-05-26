#include "inlinep.h"
#include <iostream>

using namespace std;

inlinep::inlinep(){
    for (size_t i = 0; i < 5; i++){
        cout<<"Ingrese n° "+to_string(i+1)+": ";
        cin>>vct[i];
    }
    
}

void inlinep::imprimir(){
    for (size_t i = 0; i < 5; i++){
        cout << vct[i]<<"-";
    }
}