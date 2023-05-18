#include <iostream>

using namespace std;

class sumatoria{
    private:
        int a, sum=0;
    public:
        sumatoria();
        ~sumatoria();
};

sumatoria::sumatoria(){
    do{
        cout<<"Ingrese numero: ";
        cin >> a;
        sum = sum + a;
    } while (a!=0);
}

sumatoria::~sumatoria(){
    cout << "Suma final: "<<sum;
}


int main(){

    sumatoria sm;

    return(0);
}