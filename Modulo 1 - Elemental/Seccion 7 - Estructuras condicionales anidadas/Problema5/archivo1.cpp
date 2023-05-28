#include <iostream>

using namespace std;

int main(){
    short i=1;
    cout<<i*8;
    do{
        i++;
        cout<<" - "<<i*8;
    }while(i<63);
    return(0);
}