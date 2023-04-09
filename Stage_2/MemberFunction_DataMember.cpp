/*
    Data Members:
        Data members are the variables that hold the data of an object in a class.
        They can be of any data type such as int, float, char, etc.
        Data members are declared in the class definition and can be either private, public or protected.
        Private data members are accessible only within the class, whereas public and protected data members are accessible outside the class.


    There are three types of data members in C++:

    1.Private Data Members:
        Private data members are declared using the "private" keyword in the class definition.
        They are accessible only within the class and cannot be accessed outside the class.
        Private data members are used to store the private data of the object.

    eg. class Person {
            private:
            string name;    // private data member
            int age;        // private data member

        };



    2.Public Data Members:
        Public data members are declared using the "public" keyword in the class definition.
        They are accessible outside the class and can be accessed using the dot operator.
        Public data members are used to store the public data of the object.

    eg. class Rectangle {
            public:
            int length;     // public data member
            int breadth;    // public data member
        };



    3.Protected Data Members:
        Protected data members are declared using the "protected" keyword in the class definition.
        They are accessible only within the class and its derived classes.
        Protected data members are used to store the protected data of the object.

    eg. class Shape {
            protected:
            int width;      // protected data member
            int height;     // protected data member
        };









    MEMBER FUNCTION

        Member functions are the functions that operate on the data members of a class.
        They are declared in the class definition and can be either private, public or protected.
        Private member functions are accessible only within the class and cannot be accessed outside the class.
        Public and protected member functions are accessible outside the class and can be accessed using the dot operator.


    There are two types of member functions in C++:

    1.Non-const Member Functions:
        Non-const member functions are declared without the const keyword in the class definition.
        They can modify the data members of the object.
        They are used to perform operations on the object and to modify its state.



    2.Const Member Functions:
        Const member functions are declared with the const keyword in the class definition.
        They cannot modify the data members of the object.
        They are used to access the data members of the object and to perform read-only operations on the object.
*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;  // private data member
    int breadth; // private data member

public:
    // constructor
    Rectangle(int _length = 0, int _breadth = 0) : length(_length), breadth(_breadth) {}

    // non-const member functions
    void setLength(int _length)
    { // non-const member function
        length = _length;
    }

    void setBreadth(int _breadth)
    { // non-const member function
        breadth = _breadth;
    }

    int area()
    { // non-const member function
        return length * breadth;
    }

    // const member functions
    int getLength() const
    { // const member function
        return length;
    }

    int getBreadth() const
    { // const member function
        return breadth;
    }

    int perimeter() const
    { // const member function
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle rect(10, 20); // calling constructor to instatntiate object of Recta

    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    rect.setLength(15);  // calling non-const member function
    rect.setBreadth(25); // calling non-const member function

    cout << "New Length: " << rect.getLength() << endl;
    cout << "New Breadth: " << rect.getBreadth() << endl;

    cout << "New Area: " << rect.area() << endl;
    cout << "New Perimeter: " << rect.perimeter() << endl;

    const Rectangle const_rect(5, 10); // create a Rectangle class object of const type

    cout << "Const Object Area: " << const_rect.area()<< endl;
    cout << "Const Object Perimeter: " << const_rect.perimeter() << endl;

    // cannot call non-const member functions on const object
    // const_rect.setLength(7); // error
    // const_rect.setBreadth(12);// error

    cout << "Const Object Length: " << const_rect.getLength() << endl;
    cout << "Const Object Breadth: " << const_rect.getBreadth() << endl;

    return 0;
}


/*
        In this example, 
        A Rectangle class is defined with two private data members (length and breadth) and both non-const and const member functions.
        We also had define a constructor to instantiate data members.
        We create a Rectangle object "rect" using the constructor and call the member functions(GETTER/SETTER) to set and get the data members.
        We also call the member functions to calculate the area and perimeter of the Rectangle object.
        We then create a const Rectangle object "const_rect" and call the const member functions to get the data members and to calculate the area and perimeter of the Rectangle object.
        We cannot call non-const member functions on the const object.
*/