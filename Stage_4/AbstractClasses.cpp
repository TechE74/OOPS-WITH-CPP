/*
    Abstract classes are classes that cannot be instantiated directly, but are instead used as base classes for other classes.
    They are used to define a common interface for a group of related classes, but they do not provide implementation for all of the functions that they declare.
    Instead, the derived classes must implement these functions themselves.
    Abstract classes are often used in combination with virtual functions to create a framework for polymorphism in C++.

    To define an abstract class in C++, you use the virtual keyword to declare one or more of its member functions as pure virtual functions.
    A pure virtual function is a virtual function that has no implementation in the base class, and is marked with = 0 at the end of its declaration.
*/
class Shape
{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

/*
    In this example, the Shape class is an abstract class with two pure virtual functions, area() and perimeter().
    This means that any class that derives from Shape must implement these functions themselves, or else they will also be abstract classes.

    To derive a class from an abstract class, you must provide definitions for all of its pure virtual functions.
    Here is an example of a derived class from the Shape class:
*/

class Rectangle : public Shape
{
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const { return width * height; }
    double perimeter() const { return 2 * (width + height); }

private:
    double width;
    double height;
};

/*
    In this example, the Rectangle class derives from Shape and implements the area() and perimeter() functions. Note that the implementation of these functions is specific to the Rectangle class, and may be different from other classes that derive from Shape.

    It is important to note that you cannot instantiate an abstract class directly. If you try to create an object of an abstract class, you will get a compilation error. Instead, you must create an object of a derived class that provides implementations for all of the pure virtual functions.

Abstract classes are useful for creating hierarchies of related classes that share a common interface. By using virtual functions and polymorphism, you can write generic code that works with any class derived from the abstract class. This allows you to write code that is more modular, extensible, and reusable.
*/

// COMPLETE CODE TO EXPLAIN

#include <iostream>
using namespace std;

// abstract base class
class Shape
{
public:
    virtual double area() const = 0;      // pure virtual function
    virtual double perimeter() const = 0; // pure virtual function
};

// derived class
class Rectangle : public Shape
{
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const { return width * height; }
    double perimeter() const { return 2 * (width + height); }

private:
    double width;
    double height;
};

int main()
{
    // creating an object of the derived class
    Rectangle rect(5.0, 10.0);

    // calling the area() and perimeter() functions
    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;

    // trying to create an object of the abstract base class
    // Shape shape; // this will give a compilation error

    return 0;
}

/*
    we have defined an abstract base class called Shape, which contains two pure virtual functions: area() and perimeter(). The Rectangle class is a derived class from Shape and provides implementations for these functions.

    In the main() function, we create an object of the Rectangle class and call its area() and perimeter() functions. Note that we cannot create an object of the abstract base class Shape, as it contains pure virtual functions and is therefore an incomplete type. Attempting to create such an object will give a compilation error.

    By using abstract classes, we can create a common interface for a group of related classes, while leaving the implementation of certain functions to be defined by the derived classes. This allows us to write more modular and extensible code, as we can write generic functions that work with any class derived from the abstract base class.
*/