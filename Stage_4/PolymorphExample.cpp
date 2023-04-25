#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "The dog barks \n";
    }
};

// Derived class
class Cat : public Animal
{
public:
    void animalSound()
    {
        cout << "The cat meows \n";
    }
};

int main()
{
    Animal *myAnimal = new Animal(); // Create an Animal object
    Animal *myDog = new Dog();       // Create a Dog object
    Animal *myCat = new Cat();       // Create a Cat object

    myAnimal->animalSound(); // Call the function
    myDog->animalSound();    // Call the function
    myCat->animalSound();    // Call the function

    delete myAnimal;
    delete myDog;
    delete myCat;
    return 0;
}

/*
    We have a base class Animal that has a virtual method makeSound(). 
    The Dog and Cat classes inherit from Animal and each have their own implementation of makeSound().
    In the main() function, we create two pointers of type Animal that point to instances of Dog and Cat. 
    When we call the makeSound() method on each pointer, the appropriate implementation is called based on the type of object it points to.

    This is an example of polymorphism because we're able to treat objects of different classes as if they were objects of the same base class. The makeSound() method is polymorphic because it has different implementations depending on the type of object it's called on.

*/