/*
 *   This program demonstrates the concept of protected members inheritance in C++.
 *   The 'Base' class has a protected member variable 'x', and the 'Derived' class inherits from the 'Base' class.
 *   The 'Derived' class has access to the protected member variable 'x' and can modify it directly.
 *   Protected members are accessible within the class that defines them and by any class that inherits from that class.
 *   Protected members are not accessible by instances of the class, but are accessible by any class that inherits from the class.
 *   Inheritance is demonstrated by the 'Derived' class, which inherits the protected member variable 'x' from the 'Base' class.
*/

#include <iostream>

using namespace std;

class Base
{
protected:
    int x;

public:
    Base(int x) : x(x) {}
};

class Derived : public Base
{
public:
    Derived(int x) : Base(x) {}

    void printX()
    {
        cout << "x is: " << x << endl;
    }

    void modifyX(int newX)
    {
        x = newX;
    }
};

int main()
{
    // Create an instance of the 'Derived' class
    Derived d(10);

    // Call the 'printX' method to print the value of 'x'
    d.printX(); // Output: x is: 10

    // Call the 'modifyX' method to modify the value of 'x'
    d.modifyX(20);

    // Call the 'printX' method again to print the new value of 'x'
    d.printX(); // Output: x is: 20

    return 0;
}

/*
Output:
x is: 10
x is: 20
*/

/*

In this program, the 'Base' class has a protected member variable 'x', which is inherited by the 'Derived' class. The 'Derived' class can access and modify the protected member variable 'x' directly.
The 'printX' method is used to print the value of 'x' to the console, and The 'modifyX' method is used to modify the value of 'x'.
In the main function, an instance of the 'Derived' class is created withan initial value of 10 for 'x'. 
The 'printX' method is called to print the value of 'x', which is 10. 
Then the 'modifyX' method is called to change the value of 'x' to 20. 
The 'printX' method is called again to print the new value of 'x', which is 20.
Protected members inheritance allows a derived class to access and modify the protected member variables of its base class.
This can be useful for creating a hierarchy of classes with increasing levels of specialization, where each derived class inherits and adds to the functionality of the base class.
*/
