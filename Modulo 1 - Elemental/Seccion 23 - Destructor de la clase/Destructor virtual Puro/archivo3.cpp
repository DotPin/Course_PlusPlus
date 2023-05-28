// C++ program to demonstrate how a class becomes
// an abstract class when a pure virtual destructor is
// passed
 
#include <iostream>
class Test {
public:
    virtual ~Test() = 0;
    // Test now becomes abstract class
};
Test::~Test() {}
 
// Driver Code
int main()
{
    Test p;
    Test* t1 = new Test;
    return 0;
}
