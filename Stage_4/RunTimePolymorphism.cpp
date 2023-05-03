/*
    Runtime polymorphism, also known as dynamic polymorphism, is a key feature of object-oriented programming that allows objects of different classes to be treated as if they were objects of the same class.
    This is achieved using virtual functions and pointers/references to base class objects.
*/

#include <iostream>

// base class
class Shape
{
public:
    virtual double area() const = 0;
};

// derived classes
class Rectangle : public Shape
{
public:
    Rectangle(double width, double height) : m_width(width), m_height(height) {}
    double area() const { return m_width * m_height; }

private:
    double m_width;
    double m_height;
};

class Circle : public Shape
{
public:
    Circle(double radius) : m_radius(radius) {}
    double area() const { return 3.14159 * m_radius * m_radius; }

private:
    double m_radius;
};

// function that takes a Shape object by reference and prints its area
void printArea(const Shape &shape)
{
    std::cout << "Area: " << shape.area() << std::endl;
}

int main()
{
    // create objects of the derived classes
    Rectangle rect(5, 10);
    Circle circle(7);

    // call the printArea() function for each object
    printArea(rect);
    printArea(circle);

    // create an array of Shape pointers
    Shape *shapes[2];
    shapes[0] = &rect;
    shapes[1] = &circle;

    // loop through the array and call the area() function for each object
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Area: " << shapes[i]->area() << std::endl;
    }

    return 0;
}

/*
    We have defined a base class called Shape, which contains a pure virtual function called area(). 
    The Rectangle and Circle classes are derived from Shape and provide their own implementations for area().
    The printArea() function takes a Shape object by reference and prints its area. 
    We can pass objects of Rectangle and Circle to this function because they are both derived from Shape.

    In the main() function, we create objects of the Rectangle and Circle classes and call the printArea() function for each object. 
    We then create an array of Shape pointers and assign them to the Rectangle and Circle objects. 
    We loop through the array and call the area() function for each object, which will call the appropriate implementation of area() based on the actual object type.

    This is an example of runtime polymorphism, as we are treating objects of different classes as if they were objects of the same class (Shape) and calling the appropriate function based on the actual object type at runtime.

    Runtime polymorphism allows us to write more generic and flexible code, as we can define functions that work with any object derived from a common base class. 
    This makes it easier to write code that can handle different types of objects without having to know their specific implementation details.
*/