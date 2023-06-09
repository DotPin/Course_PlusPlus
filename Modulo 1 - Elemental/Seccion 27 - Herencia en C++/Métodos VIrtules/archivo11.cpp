// CPP program to demonstrate that
// virtual functions can be inlined
#include <iostream>
using namespace std;

class Base {
public:
	virtual void who() { cout << "I am Base\n"; }
};
class Derived : public Base {
public:
	void who() { cout << "I am Derived\n"; }
};

int main()
{
	// Part 1
	Base b;
	b.who();

	// Part 2
	Base* ptr = new Derived();
	ptr->who();

	return 0;
}
