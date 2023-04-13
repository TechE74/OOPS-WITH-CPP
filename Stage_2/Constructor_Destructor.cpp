/*
    Constructors and Destructors are fundamental concepts in C++ programming, and they play an important role in object-oriented programming.
    Constructors and Destructors are special member functions of a class that are called when objects of that class are created and destroyed, respectively.

    CONSTRUCTOR

    It is a member function that is used to initialize objects of a class.
    Constructors are called automatically when objects of a class are created, and they can take parameters to specify how the object should be initialized.
    Constructors can be overloaded, which means that multiple constructors can be defined with different parameter lists.

    Types of Constructors
        # Default constructors
        # Parameterized constructors
        # Copy constructors
        # Move constructors.

    A default constructor is a constructor that takes no parameters and initializes the object with default values.
    A parameterized constructor is a constructor that takes one or more parameters to specify how the object should be initialized.
    A copy constructor is a constructor that creates a new object as a copy of an existing object.
    A move constructor is a constructor that creates a new object by moving the contents of an existing object.





    DESTRUCTOR
    A destructor is a member function that is used to clean up resources used by an object when it is destroyed.
    Destructors are called automatically when objects of a class are destroyed, either by going out of scope or by being explicitly deleted.
    Destructors can be used to free memory that was allocated by the object, release locks or other system resources, or perform other cleanup tasks.

    It is important to note that if a class does not define a constructor, the compiler will provide a default constructor that takes no parameters.
    Similarly, if a class does not define a destructor, the compiler will provide a default destructor that simply releases any resources held by the object.


    NOTE -> (If a class manages resources such as dynamically allocated memory, it is important to define a destructor to release those resources when the object is destroyed.)

*/

#include <iostream>

using namespace std;

class MyClass
{
public:
    // Default constructor
    MyClass()
    {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    MyClass(int value)
    {
        cout << "Parameterized constructor called with value: " << value << endl;
    }

    // Copy constructor
    MyClass(const MyClass &other)
    {
        cout << "Copy constructor called" << endl;
    }

    // Move constructor
    MyClass(MyClass &&other) noexcept
    {
        cout << "Move constructor called" << endl;
    }

    // Destructor
    ~MyClass()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Create object using default constructor
    MyClass obj1;

    // Create object using parameterized constructor
    MyClass obj2(42);

    // Create object using copy constructor
    MyClass obj3 = obj2;

    // Create object using move constructor
    MyClass obj4 = move(obj3);

    // Destructor will be called automatically when objects go out of scope
    return 0;
}