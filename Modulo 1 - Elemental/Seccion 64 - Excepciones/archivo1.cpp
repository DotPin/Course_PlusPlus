#include <iostream>

using namespace std;

//uso del try catch

void miFuncion() {

    throw runtime_error("Algo salió mal");

}

int main() {

    try {

        miFuncion();

    } catch (const runtime_error& e) {

        cout << e.what() << endl;

    }

    return 0;

}