/*
    const Member Variables
        A const member variable is a member variable of a class that is marked with the const keyword.
        This indicates that the variable's value should not be modified after it is initialized.

    By using const member variables, we can enforce that certain properties of an object remain constant throughout its lifetime.
    This can help prevent unintended modifications to an object's state, and make our code more reliable
*/

class MyClass
{
public:
    MyClass(int value) : myConstVar(value) {}

private:
    const int myConstVar;
};

// myConstVar is a const member variable of the MyClass class. It is initialized with the value provided to the constructor, and cannot be modified afterwards

/*
    const Member Functions
        A const member function is a member function of a class that is marked with the const keyword.
        This indicates that the function does not modify the state of the object on which it is called.


        By marking member functions as const, we can ensure that they do not accidentally modify the state of an object.
        This can help prevent bugs and make our code more maintainable.

*/

class MyClass
{
public:
    // getValue() is a const member function of the MyClass class. It returns the value of the myValue member variable, but does not modify it.
    int getValue() const
    {
        return myValue;
    }

private:
    int myValue;
};







/*
    const Objects
        A const object is an instance of a class that is marked with the const keyword. 
        This indicates that the object's state should not be modified.


        By using const objects, we can ensure that certain properties of an object remain constant throughout its lifetime. 
        This can help prevent unintended modifications to an object's state, and make our code more reliable.
*/

const MyClass myConstObj(42);  // myConstObj is a const object of the MyClass class. It is initialized with the value 42, and cannot be modified afterwards


