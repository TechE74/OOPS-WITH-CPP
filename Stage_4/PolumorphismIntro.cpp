/*
    Polymorphism in C++

    Polymorphism is a fundamental concept in object-oriented programming (OOP) that allows objects of different classes to be treated as objects of a common base class. 
    It enables the use of a single interface to represent multiple related classes, providing flexibility and extensibility in code design.


    Polymorphism is the ability of objects to exhibit different behaviors based on their underlying types. In C++, polymorphism is achieved through the use of virtual functions and function overloading. It allows objects of different classes to be treated uniformly, providing a common interface to interact with them.

    Polymorphism helps in writing flexible and reusable code, as it enables the programmer to write generic functions or classes that can work with objects of different types without being aware of their specific implementations.
*/



/*
    Types of Polymorphism


    In C++, there are two types of polymorphism:

    Runtime Polymorphism (Dynamic Polymorphism): It occurs during program execution and is resolved at runtime. It is achieved through virtual functions and function overriding.
    Compile-time Polymorphism (Static Polymorphism): It occurs during the compilation of the program and is resolved at compile-time. It is achieved through function overloading, operator overloading, and template polymorphism.

*/


/*
    Runtime Polymorphism (Dynamic Polymorphism)
    
    Virtual Functions
    Virtual functions are a key feature of runtime polymorphism in C++. They allow derived classes to provide their own implementation of a function defined in the base class. The virtual functions are declared in the base class using the virtual keyword and can be overridden in derived classes.
*/

class Base {
public:
    virtual void print() {
        std::cout << "Base class print function\n";
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived class print function\n";
    }
};


/* 
    Function Overriding
    Function overriding is the process of providing a different implementation of a virtual function in a derived class. It allows the derived class to specialize or extend the behavior of the base class's virtual function.

    To override a virtual function in a derived class, use the override keyword, which explicitly indicates that the function is intended to override a virtual function from the base class. 
    This helps improve code readability and catch potential mistakes.

    Pure Virtual Functions and Abstract Classes
    A pure virtual function is a virtual function declared in a base class but without any implementation. 
    It acts as a placeholder for a function that must be overridden in derived classes.
*/


/*
    Pure Virtual Functions and Abstract Classes
        A pure virtual function is a virtual function declared in a base class but without any implementation.
        It acts as a placeholder for a function that must be overridden in derived classes.
*/


/*
    basic code to understand complete polymorphism through simple example
*/

#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual double calculateArea() const {
        return 0.0;
    }
};

// Derived classes
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the calculateArea() function
    double calculateArea() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the calculateArea() function
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Create objects of derived classes
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);

    // Store the objects in a base class pointer
    Shape* shape1 = &rectangle;
    Shape* shape2 = &circle;

    // Calculate and display the areas
    std::cout << "Area of rectangle: " << shape1->calculateArea() << std::endl;
    std::cout << "Area of circle: " << shape2->calculateArea() << std::endl;

    return 0;
}