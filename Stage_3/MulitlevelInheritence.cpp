/*
    * In C++, a derived class can inherit from a base class, and a derived class can itself become the base class for another derived class. This is known as multilevel inheritance.
    * In multilevel inheritance, a derived class inherits the members of its immediate base class, which in turn inherits the members of its own base class, and so on.
    * It creates a hierarchical class structure where each derived class has access to the members of all its base classes, all the way up the hierarchy
*/

#include <iostream>
using namespace std;

// Base class for animals
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class that inherits from Animal
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal is walking." << endl;
    }
};

// Derived class that inherits from Mammal
class Cat : public Mammal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Cat cat;
    
    // Accessing members of the Animal base class
    cat.eat();
    
    // Accessing members of the Mammal base class
    cat.walk();
    
    // Accessing members of the Cat derived class
    cat.meow();
    
    return 0;
}

/*
    We have three classes: Animal, Mammal, and Cat. 
    
    The Animal class is a base class for all animals and has a member function eat() that prints a message to indicate that the animal is eating.

    The Mammal class is derived from Animal using single inheritance. 
    
    This means that a Mammal object will have access to all the public members of Animal. 
    
    The Mammal class also has a member function walk() that prints a message to indicate that the mammal is walking.

    The Cat class is derived from Mammal using single inheritance. 
    
    This means that a Cat object will have access to all the public members of Mammal, which in turn has access to all the public members of Animal. 
    
    The Cat class also has a member function meow() that prints a message to indicate that the cat is meowing.

    In the main() function, we create a Cat object called cat. We can access the eat() and walk() member functions of the Animal and Mammal base classes using the . operator on the cat object. 
    
    We can also access the meow() member function of the Cat derived class using the . operator on the cat object.
*/



/*
    *  multilevel inheritance allows a derived class to inherit from its parent class, which in turn can itself be a derived class, creating a hierarchical class structure. This allows for the reuse of code and the creation of complex class hierarchies. However, it can also lead to issues such as code duplication and tight coupling between classes, so it should be used judiciously.
*/