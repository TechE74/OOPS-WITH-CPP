/*
*   Constructors and destructors are special methods in C++ classes that are used to initialize and clean up objects of that class. 
*   Constructors are called when an object is created, and they are used to set initial values for the object's member variables. 
*   Destructors are called when an object is destroyed, and they are used to clean up any memory or resources that the object was using.
*   In derived classes, constructors and destructors work a little differently. 
*   When a derived class is created, its base class constructor is called first, and then its own constructor is called. 
*   When a derived class is destroyed, its own destructor is called first, and then its base class destructor is called.
*   Constructors and destructors can be very useful for managing memory and other resources in your program.
*   They are important concepts to understand when working with C++ classes.
*/


#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(string name) {
        cout << "Creating new person object for " << name << endl;
        this->name = name;
    }

    ~Person() {
        cout << "Destroying person object for " << name << endl;
    }

    void sayHello() {
        cout << "Hello, my name is " << name << endl;
    }

private:
    string name;
};

int main() {
    // Create a new Person object
    Person *personPtr = new Person("Alice");

    // Call the sayHello() method on the Person object
    personPtr->sayHello();

    // Delete the Person object
    delete personPtr;

    return 0;
}



//constructor and destructor working in inheritence 

#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }
    ~Animal() {
        cout << "Animal destructor called" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called" << endl;
    }
    ~Dog() {
        cout << "Dog destructor called" << endl;
    }
};

int main() {
    Dog myDog; // create a Dog object
    return 0;
}
/*
In this example, we have a base class called Animal with a constructor and destructor, and a derived class called Dog that inherits from Animal and also has a constructor and destructor.

In the main function, we create a Dog object called myDog. When this object is created, the Animal constructor is called first, followed by the Dog constructor. The output of the program is:

*   Animal constructor called
*   Dog constructor called
*   Dog destructor called
*   Animal destructor called



As you can see, the Animal constructor is called before the Dog constructor, and the Dog destructor is called before the Animal destructor. This demonstrates the order in which constructors and destructors are called in inheritance.
*/