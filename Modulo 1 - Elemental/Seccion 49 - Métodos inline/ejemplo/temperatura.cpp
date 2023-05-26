#include "temperatura.h"
#include <iostream>

using namespace std;

temperatura::temperatura(int min,int max, int act){
    minima = min;
    maxima = max;
    actual = act;
}

void temperatura::imprimir(){
    cout << "Minima:" << minima << "\n";
    cout << "Maxima:" << maxima << "\n";
    cout << "Actual:" << actual << "\n";
}