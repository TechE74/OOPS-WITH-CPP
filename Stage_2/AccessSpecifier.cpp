/*
    Access Specifiers are used in C++ to control the access to the members of a class. 
    There are three access specifiers in C++: Public, Private, and Protected.

    Public Access Specifier:
    A public member variable or function can be accessed from anywhere in the program, including outside the class.

    Private Access Specifier:
    A private member variable or function can only be accessed within the class.

    Protected Access Specifier:
    A protected member variable or function can only be accessed within the class and its subclasses.

    
        ____________________________________________________
        | Accessibility     | Public | Protected | Private |
        |-------------------|--------|-----------|---------|
        | Same Class        |   Yes  |    Yes    |   Yes   |
        |-------------------|--------|-----------|---------|
        | Derived Class     |   Yes  |    Yes    |   No    |
        |-------------------|--------|-----------|---------|
        | Outside Class     |   Yes  |    No     |   No    |
        |___________________|________|___________|_________|


        ____________________________________________________________________________________________________________________________________
        | Accessibility     | Public                           | Protected                                  | Private                      |
        |-------------------|----------------------------------|--------------------------------------------|------------------------------|
        | Same Class        |   Accessible inside class        | Accessible inside class and derived classes| Accessible only inside class |
        |-------------------|----------------------------------|--------------------------------------------|------------------------------|
        | Derived Class     |   Accessible as public members   | Accessible as protected members            | Not accessible               |
        |-------------------|----------------------------------|--------------------------------------------|------------------------------|
        | Outside Class     |   Accessible as public members   | Not accessible                             | Not accessible               |
        |___________________|__________________________________|____________________________________________|______________________________|


        Public members are accessible from anywhere in the program.
        Protected members are accessible within the class and any subclasses (derived classes) that inherit from it.
        Private members are only accessible within the class.

        If the code is in the same class as the member, it can access all three types of members (public, protected, and private).
        If the code is in a derived class (subclass), it can access the public and protected members of the base class, but not the private members.
        If the code is outside the class, it can only access the public members of the class.

        Public members can be accessed by any code in the program, regardless of where it is located.
        Protected members can be accessed by code in the same class and any subclasses that inherit from the class.
        Private members can only be accessed by code within the same class.
*/

#include <iostream>

using namespace std;

class MyClass
{
public:
    int publicVar;

private:
    int privateVar;

protected:
    int protectedVar;

public:
    void setPrivateVar(int value)
    {
        privateVar = value;
    }
    int getPrivateVar()
    {
        return privateVar;
    }
};

int main()
{
    MyClass obj;
    obj.publicVar = 10;    // Public member variable can be accessed from outside the class
    obj.setPrivateVar(20); // Private member variable can only be accessed within the class
    cout << "Private variable value: " << obj.getPrivateVar() << endl;
    // Protected member variable can only be accessed within the class and its subclasses
    return 0;
}