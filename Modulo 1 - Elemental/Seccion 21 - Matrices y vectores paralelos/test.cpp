#include <iostream>
#include "../Aleatorio/Aleatorio.h"

using namespace std;

int main(){

    Aleatorio *rnd = new Aleatorio(time(NULL));
    //Aleatorio *rnd = new Aleatorio(100);
    for (size_t i = 0; i < 30; i++)
    {
        
        cout << rnd->int_uniform(10,40)<< " ";
    }
    return(0);

}