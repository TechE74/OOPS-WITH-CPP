/*
    Single inheritance is a concept in C++ where a class can inherit the properties of another class.
    It's like having a parent and a child relationship, where the child can inherit some of the characteristics of the parent.
    Think of it like this: You have a car, and your friend likes your car so much that they want one just like it.
    They don't want to start from scratch and build a new car, they just want to use your car as a starting point and add some additional features. That's what single inheritance is like in C++.
    The original car is like the parent class, and the new car with the additional features is like the child class.
    The child class can use all of the features of the parent class and add its own unique features as well.
*/

#include <iostream>
using namespace std;

// Parent class
class Shape
{
protected:
    int width;
    int height;

public:
    Shape(int w, int h)
    {
        width = w;
        height = h;
    }

    int area()
    {
        cout << "Parent class area :" << endl;
        return 0;
    }
};

// Derived class
class Rectangle : public Shape
{
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};

int main()
{
    Shape *shape;         // Pointer to base class
    Rectangle rec(10, 7); // Object of derived class

    shape = &rec; // Point to derived class object

    // Call area function of base class using pointer
    shape->area();

    // Call area function of derived class using pointer
    rec.area();

    return 0;
}

/*
    In this example, we have a parent class called Shape that has two protected member variables width and height, and a constructor that initializes these variables. It also has a virtual area function that returns 0 and prints a message.

    The Rectangle class is a derived class that inherits from Shape. It has a constructor that calls the constructor of the base class to initialize the width and height variables, and it also overrides the area function to return the area of the rectangle.

    In the main function, we create an object of the Rectangle class and a pointer to the Shape class. We then assign the address of the Rectangle object to the Shape pointer. This is possible because of the single inheritance relationship between Rectangle and Shape.

    We then call the area function of the Shape class using the pointer, which invokes the area function of the base class and prints a message. We then call the area function of the Rectangle class using the rec object, which invokes the overridden area function of the derived class and prints a message.

*/