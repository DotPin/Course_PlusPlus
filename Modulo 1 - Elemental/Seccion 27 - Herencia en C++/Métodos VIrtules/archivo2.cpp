// C++ program To demonstrate how default arguments
// and virtual function are used together
#include <iostream>
using namespace std;

class Base {
public:
	virtual void fun(int x = 0)
	{
		cout << "Base::fun(), x = " << x << endl;
	}
};

class Derived : public Base {
public:
	virtual void fun(int x = 10) // NOTE THIS CHANGE
	{
		cout << "Derived::fun(), x = " << x << endl;
	}
};

int main()
{
	Derived d1; // Constructor

	// Base class pointer which will
	// Edit value in memory location of
	// Derived class constructor
	Base* bp = &d1;

	bp->fun(); // Calling a derived class member function

	return 0; // Returning 0 means the program
			// Executed successfully
}
