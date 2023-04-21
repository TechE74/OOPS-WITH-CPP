/*
    * Multiple inheritance is a feature in object-oriented programming that allows a derived class to inherit from more than one base class.
    * In multiple inheritance, the derived class has access to all the public members of all its base classes.
    * This allows the derived class to have functionality from multiple parent classes.



    *  EXAMPLE

    A `Bird` class may inherit from both `Animal` and `Flyer` classes to gain the functionality of both parent classes. 
    However, if a `Penguin` class needs to inherit from both `Bird` and `Swimmer` classes, it may cause ambiguity because a penguin is a bird that can swim. In such cases, alternative design patterns, such as composition, may be used to achieve the desired functionality.
*/

/*
    CAUTION!!!
    Multiple inheritance can lead to ambiguity when the base classes have member functions or variables with the same name.

    RESULT
    In such cases, the derived class must use scope resolution operator to disambiguate and select the member of the intended base class.
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

// Base class for flying creatures
class Flyer {
public:
    void fly() {
        cout << "Flying creature is flying." << endl;
    }
};

// Base class for swimming creatures
class Swimmer {
public:
    void swim() {
        cout << "Swimming creature is swimming." << endl;
    }
};

// Derived class that inherits from both Animal and Flyer
class Bird : public Animal, public Flyer {
public:
    void chirp() {
        cout << "Bird is chirping." << endl;
    }
};

// Derived class that inherits from both Bird and Swimmer
class Penguin : public Bird, public Swimmer {
public:
    void slide() {
        cout << "Penguin is sliding on its belly." << endl;
    }
};

int main() {
    Penguin penguin;
    
    // Accessing members of the Animal base class
    penguin.eat();
    
    // Accessing members of the Flyer base class
    penguin.fly();
    
    // Accessing members of the Swimmer base class
    penguin.swim();
    
    // Accessing members of the Bird derived class
    penguin.chirp();
    
    // Accessing member of the Penguin derived class
    penguin.slide();
    
    return 0;
}

