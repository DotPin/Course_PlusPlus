#include "reloj.h"
#include <iostream>

using namespace std;

void reloj::imprimir(){
    cout<<hr<<":"<<min<<":"<<seg<<"\n";
}

bool reloj::iguales(const reloj &r){

    if(hr == r.hr && min==r.min && seg==r.seg){
        return true;
    }else{
        return false;
    }

}