/*
    < > Introduction to Virtual Functions
        In C++, a virtual function is a member function that is declared in a base class and redefined in a derived class.
        When you call a virtual function through a pointer or a reference to a base class, the actual function that is called depends on the type of the object being pointed to or referred to, rather than the type of the pointer or reference itself.
        This is known as dynamic binding, which allows polymorphism, a key feature of object-oriented programming.


        Example Code

        Suppose we have a base class Shape with a virtual function area() that calculates the area of a shape:
*/
class Shape
{
public:
    virtual double area() = 0; // virtual function
};

/*
    Note that the area() function is declared as pure virtual with the = 0 syntax, which means that the Shape class is an abstract class and cannot be instantiated.
    Any derived class that inherits from Shape must implement the area() function.

    Let's create two derived classes: Circle and Rectangle.
*/

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() { return 3.14 * radius * radius; } // redefine area() function
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() { return length * width; } // redefine area() function
};

/*
    # Note

    Each derived class redefines the area() function to calculate the area of a circle or rectangle.
    Now, let's create a function printArea() that takes a pointer to a Shape object and calls the area() function.
*/
void printArea(Shape *s)
{
    cout << "Area: " << s->area() << endl;
}

/*
    Note that the printArea() function takes a pointer to a Shape object, which can be a Circle or a Rectangle.
    When we call the area() function through the pointer, the actual function that is called depends on the type of the object being pointed to.
    Let's create some objects and call the printArea() function:
*/

int main()
{
    Circle c(5);
    Rectangle r(4, 6);

    Shape *s1 = &c;
    Shape *s2 = &r;

    printArea(s1); // calls Circle::area()
    printArea(s2); // calls Rectangle::area()

    return 0;
}

/*
    #Overriding Virtual Functions

    When a virtual function is defined in a base class, it can be overridden in derived classes.
    This means that the derived class can provide its own implementation of the virtual function.
    To override a virtual function, you must provide a function with the same signature in the derived class.
*/

class Base
{
public:
    virtual void foo()
    {
        cout << "Base::foo()\n";
    }
};

class Derived : public Base
{
public:
    void foo() override
    {
        cout << "Derived::foo()\n";
    }
};

/*
    The Base class has a virtual function foo(), which is overridden in the Derived class. When you call the foo() function on a Derived object, the Derived implementation is called.
*/

/*
    #Calling Virtual Functions Explicitly
    In addition to being called through a pointer or reference to the base class, virtual functions can also be called explicitly using the scope resolution operator ::. This allows you to call the virtual function directly on a particular class, rather than going through the vtable lookup process.
*/

Base *b = new Derived();
b->foo(); // Calls Derived::foo() through vtable lookup

Derived d;
d.foo(); // Calls Derived::foo() directly

Base *b2 = &d;
b2->Base::foo(); // Calls Base::foo() explicitly

/*
    # Runtime Type Identification (RTTI)

    Virtual functions can be used to implement runtime type identification (RTTI) in C++.
    RTTI allows you to determine the type of an object at runtime, which can be useful for dynamic polymorphism.
*/

class Base
{
public:
    virtual void foo()
    {
        std::cout << "Base::foo()\n";
    }
};

class Derived : public Base
{
public:
    void foo() override
    {
        std::cout << "Derived::foo()\n";
    }
};

void bar(Base *b)
{
    if (dynamic_cast<Derived *>(b))
    {
        std::cout << "Object is a Derived\n";
    }
    else
    {
        std::cout << "Object is a Base\n";
    }
}

int main()
{
    Base *b1 = new Base();
    Base *b2 = new Derived();

    bar(b1);
    bar(b2);

    delete b1;
    delete b2;

    return 0;
}