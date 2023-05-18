// CPP Program to demonstrate Virtual member functions
// cannot be static
#include <iostream>

using namespace std;

class Test {
public:
	virtual static void fun() {}
};
