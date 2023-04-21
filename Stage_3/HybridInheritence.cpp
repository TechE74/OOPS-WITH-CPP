/*
    * Hybrid inheritance is a type of inheritance that combines multiple types of inheritance, such as single inheritance, multiple inheritance, and multilevel inheritance, into a single class hierarchy.
    * The derived class can also serve as a base class for other classes, creating a multilevel inheritance hierarchy.
*/

#include <iostream>
using namespace std;

// Base class for vehicles
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

// Base class for cars
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

// Base class for boats
class Boat {
public:
    void float_on_water() {
        cout << "Boat is floating on water." << endl;
    }
};

// Derived class that inherits from Car and Boat using multiple inheritance
class Amphibious_Car : public Car, public Boat {
public:
    void drive_on_land_and_water() {
        cout << "Amphibious car is driving on land and water." << endl;
    }
};

int main() {
    Amphibious_Car ac;
    
    // Accessing members of the Vehicle base class
    ac.start();
    
    // Accessing members of the Car base class
    ac.drive();
    
    // Accessing members of the Boat base class
    ac.float_on_water();
    
    // Accessing members of the Amphibious_Car derived class
    ac.drive_on_land_and_water();
    
    return 0;
}


/* CODE SUMMARY

    We have four classes: Vehicle, Car, Boat, and Amphibious_Car. 

    The Vehicle and Car classes are part of a single inheritance hierarchy, while the Boat class is a standalone class.

    The Amphibious_Car class inherits from both Car and Boat using multiple inheritance. 
    
    This means that an Amphibious_Car object will have access to all the public members of both Car and Boat.

    In addition, the Amphibious_Car class has a member function drive_on_land_and_water() that is unique to the Amphibious_Car class. 
    
    This function uses the drive() function from the Car class and the float_on_water() function from the Boat class to simulate an amphibious car driving on both land and water.

    In the main() function, we create an Amphibious_Car object called ac. We can access the start() and drive() member functions of the Vehicle and Car base classes using the . operator on the ac object. 
    
    We can also access the float_on_water() and drive_on_land_and_water() member functions of the Boat and Amphibious_Car classes using the . operator on the ac object.
*/

/* KEY POINTS

    Hybrid inheritance combines multiple types of inheritance, such as single inheritance, multiple inheritance, and multilevel inheritance, into a single class hierarchy. 
    
    This allows for the creation of complex class hierarchies that can model a wide variety of real-world scenarios. 
    
    However, it can also lead to issues such as code complexity and tight coupling between classes, so it should be used judiciously.
*/