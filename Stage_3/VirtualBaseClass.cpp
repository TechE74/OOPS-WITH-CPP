/* INTRO
 * A virtual base class is a special type of base class that is used to avoid multiple copies of the same base class in a derived class hierarchy. When a virtual base class is used, only one copy of the base class is created, even if multiple derived classes inherit from it.
*/

class Base
{
public:
    int x;
};

class Derived1 : virtual public Base
{
public:
    int y;
};

class Derived2 : virtual public Base
{
public:
    int z;
};

class Final : public Derived1, public Derived2
{
public:
    int w;
};

/*
    * Base is declared as a virtual base class for Derived1 and Derived2. This means that when Final is created, only one copy of Base will be created.
    * In summary, virtual base classes are an important tool in creating complex class hierarchies in C++. By using virtual inheritance, you can avoid multiple copies of the same base class in a derived class hierarchy, and ensure that each base class is initialized only once.
*/


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "The animal is eating" << endl;
    }
};

class Mammal : virtual public Animal {
public:
    virtual void nurse() {
        cout << "The mammal is nursing" << endl;
    }
};

class Bird : virtual public Animal {
public:
    virtual void fly() {
        cout << "The bird is flying" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void print() {
        cout << "The bat is a mammal and a bird" << endl;
    }
};

int main() {
    Bat bat;
    bat.eat();
    bat.nurse();
    bat.fly();
    bat.print();
    return 0;
}

/*
    * The Animal class is the base class, and it has two derived classes: Mammal and Bird. 
    
    * Both Mammal and Bird inherit from Animal virtually, meaning that there is only one instance of the Animal class in the hierarchy.

    * The Bat class is derived from both Mammal and Bird, and it inherits the virtual eat() function from Animal. 
    
    * The Bat class also has its own print() function, which simply prints out a message indicating that the bat is both a mammal and a bird.

    * By using virtual inheritance, we ensure that there is only one instance of the Animal class in the hierarchy. 
    
    * Without virtual inheritance, there would be two separate instances of the Animal class in the Bat object, which could lead to errors or unexpected behavior.
*/

/*
virtual base classes are useful in situations where you have a hierarchy of classes with multiple levels of inheritance, and you want to avoid creating duplicate instances of a base class in the hierarchy. By using virtual inheritance, you can ensure that each base class is initialized only once in the derived class hierarchy.
*/