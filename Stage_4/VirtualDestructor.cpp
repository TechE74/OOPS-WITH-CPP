/*
    Virtual destructors are used in C++ to ensure that destructors of derived classes are called properly.
    Without virtual destructors, if you delete an object through a pointer to a base class, and the base class's destructor is not virtual, then only the base class's destructor is called.
    This can lead to memory leaks and undefined behavior.
*/

#include <iostream>

class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base destructor called\n";
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "Derived destructor called\n";
    }
};

int main()
{
    Base *ptr = new Derived();
    delete ptr;
    return 0;
}

/*
    Base is the base class and Derived is the derived class. The ~Base() destructor is declared virtual, which makes it a virtual destructor. When you call delete on a pointer to Base, the appropriate destructors are called. 
    In this case, the destructor of Derived is called first, followed by the destructor of Base.

    Without the virtual destructor, only the destructor of Base would be called, which would lead to a memory leak.

    Virtual destructors are necessary whenever you have a class hierarchy that uses polymorphism. 
    It's always a good practice to declare the destructor of a base class virtual if the class is intended to be used as a base class in a polymorphic hierarchy.
*/