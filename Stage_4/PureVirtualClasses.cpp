//  Pure Virtual functions are functions declared in a base class without providing an implementation for them.
//  They are marked with the virtual keyword and have a =0 after their declaration.
//  These functions serve as a placeholder, indicating that derived classes must provide an implementation for them. A class containing a pure virtual function is called an abstract class, and objects cannot be created from it.

#include <iostream>

// abstract base class
class Animal
{
public:
    virtual void speak() const = 0; // pure virtual function
};

// derived classes
class Dog : public Animal
{
public:
    void speak() const { std::cout << "Woof!" << std::endl; }
};

class Cat : public Animal
{
public:
    void speak() const { std::cout << "Meow!" << std::endl; }
};

int main()
{
    // create objects of the derived classes
    Dog myDog;
    Cat myCat;

    // call the speak() functions for each object
    myDog.speak();
    myCat.speak();

    // create a pointer to the abstract base class
    Animal *myAnimal;

    // assign the pointer to the derived classes and call their speak() functions
    myAnimal = &myDog;
    myAnimal->speak();

    myAnimal = &myCat;
    myAnimal->speak();

    // trying to create an object of the abstract base class
    // Animal myAnimal; // this will give a compilation error

    return 0;
}

/*
    we have defined an abstract base class called Animal, which contains a pure virtual function called speak(). 
    The Dog and Cat classes are derived from Animal and provide their own implementations for speak().

    In the main() function, we create objects of the Dog and Cat classes and call their speak() functions. 
    We also create a pointer to the abstract base class Animal and assign it to the Dog and Cat objects, calling their speak() functions through the pointer.

    Note that attempting to create an object of the abstract base class Animal will give a compilation error, as it is an incomplete type due to the pure virtual function. 
    This ensures that any derived classes will provide an implementation for the function.

    Pure virtual classes are useful for creating a common interface for a group of related classes, while leaving the implementation of certain functions to be defined by the derived classes. 
    This allows us to write more modular and extensible code, as we can write generic functions that work with any class derived from the abstract base class.
*/