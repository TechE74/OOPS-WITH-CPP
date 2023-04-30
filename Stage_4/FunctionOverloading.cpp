/*
    Function Overloading in C++:
        Function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameters.
        It provide functionality to get multiple functions with the same name but different input parameters and return types.


    < > Overloading a function can be useful in a number of situations, such as when you want to perform the same operation on different data types, or when you want to provide default values for certain parameters.
*/

/*
    #Syntax
        return_type function_name(type1 arg1);
        return_type function_name(type2 arg2);
*/

#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

float add(float x, float y)
{
    return x + y;
}

int main()
{
    int a = 5, b = 10;
    float c = 2.5, d = 7.5;

    cout << add(a, b) << endl; // calls the first add() function
    cout << add(c, d) << endl; // calls the second add() function

    return 0;
}
/*
    We have defined two functions with the same name, but one takes integer parameters and the other takes float parameters.

    In the main function, we call both of these functions with different data types.

    When we call the first add() function with integer parameters, it will return an integer value.

    When we call the second add() function with float parameters, it will return a float value.

    This is the basic concept of function overloading. Now, let's take a look at some advanced examples.

*/

/*
    Advanced Examples:

    Overloading Constructors:
        Constructors can also be overloaded. This can be useful when you want to initialize an object with different values.
*/

class MyClass
{
public:
    int x, y;

    MyClass()
    {
        x = 0;
        y = 0;
    }

    MyClass(int a, int b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    MyClass obj1;        // calls the first constructor
    MyClass obj2(10,8); // calls the second constructor

    cout << obj1.x << " " << obj1.y << endl;
    cout << obj2.x << " " << obj2.y << endl;

    return 0;
}

class MyClass
{
public:
    int x, y;

    MyClass operator+(const MyClass &obj)
    {
        MyClass res;
        res.x = x + obj.x;
        res.y = y + obj.y;
        return res;
    }
};

int main()
{
    MyClass obj1 = {5, 10};
    MyClass obj2 = {15, 20};
    MyClass obj3 = obj1 + obj2; // calls the overloaded + operator

    cout << obj3.x << " " << obj3.y << endl;

    return 0;
}

/*
    we have defined two constructors for the MyClass class. 
    The first constructor initializes the object with default values, while the second constructor takes two integer parameters and initializes the object with those values.
*/



