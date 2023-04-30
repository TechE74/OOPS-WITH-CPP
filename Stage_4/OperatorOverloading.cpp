/*
    Overloading Operators:
        Operators can also be overloaded in C++. It means that you can define how operators such as +, -, *, /, and % should work with user-defined types.
*/
#include <bits/stdc++.h>

using namespace std;

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
    ANOTHER EXAMPLE

    For example, if you have a class that represents a complex number, you can overload the + operator so that it can add two complex numbers together.
    By doing so, you can use the same operator to add complex numbers as you would use to add integers or floating-point numbers.
*/

#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex operator+(Complex c)
    {
        Complex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }
};

int main()
{
    Complex c1 = {5, 10};
    Complex c2 = {15, 20};
    Complex c3 = c1 + c2;

    cout << c3.real << " + i" << c3.imag << endl;

    return 0;
}