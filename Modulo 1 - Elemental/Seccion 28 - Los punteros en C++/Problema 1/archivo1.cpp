#include<iostream>

using namespace std;

int main()
{
    int x1 = 50;
    int x2 = 100;
    int *pun1, *pun2;
    pun1 = &x1;
    pun2 = pun1;
    *pun1 = 2000;
    cout << x1;
    cout << "\n";
    cout << x2;
    cout << "\n";
    cout << *pun1;
    cout << "\n";
    cout << *pun2;
    cout << "\n";
    pun2 = &x2;
    x1 = 1;
    x2 = 2;
    cout << *pun1;
    cout << "\n";
    cout << *pun2;
    cout << "\n";
    *pun1 = 500;
    *pun2 = 600;
    cout << x1;
    cout << "\n";
    cout << x2;
    return 0;
}