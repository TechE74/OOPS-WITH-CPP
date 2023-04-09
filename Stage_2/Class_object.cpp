/* 
  Welcome to Object-Oriented Programming, Congrats you had completed firt stage .
   
   Class  -> Class is a blueprint for creating objects that share a common structure and behavior. 
   Object -> An Object is an instance of a class that represents a specific entity in a program. 


   REAL LIFE EXAMPLE

   A "class" is like a blueprint for creating something. 
   
   Lets elaborate it with help of a house, the blueprint tells the construction workers how to build the house, what materials to use, where the rooms should be located, and so on. 
   
   The blueprint is a set of instructions that guides the construction process. 
   
   Similarly, in programming, a class is a set of instructions that defines the properties and behavior of an object.

   Once the construction workers build the house according to the blueprint, you have a physical object that you can live in. 
   
   This object is like an "instance" of the class. 
   
   It has the same structure and properties as the blueprint, but it's a unique, physical representation of the blueprint.

   In programming, an "object" is an instance of a class. 
   
   It's a unique representation of the properties and behavior described by the class. (Just like how you can build multiple houses using the same blueprint, you can create multiple objects using the same class.)

    But just as no two houses are exactly alike, no two objects created from a class are exactly alike either. You can customize the object's properties and behavior by modifying its data and methods. 
    
    For example, you can change the color of the walls, the size of the windows, or the layout of the rooms in the house. (Similarly, you can modify the properties and behavior of an object created from a class by changing its data and methods.)

    SUMMARY 
       
        A class is like a blueprint that provides a set of instructions for creating objects, and an object is an instance of that class with its own unique properties and behavior. 

        Classes and objects are used to model real-world concepts and entities, such as bank accounts, cars, or people. 
    
        They provide a way to organize and encapsulate related data and functions into reusable code modules, which can be instantiated multiple times to create individual objects with their own unique characteristics.

        In C++, classes are defined using the "class" keyword, followed by the name of the class, and a set of curly braces that enclose its members.
    
        Members can include data members (variables that store information), and member functions (functions that operate on the data members). 

*/

//  Here's an example of a basic class definition in Cpp  by considering the above house Scanario:

#include <iostream>
using namespace std;

// Define the House class
class House {
  // Declare private member variables for the class
  private:
    int numRooms;
    double squareFeet;
    string color;

  // Declare public member functions for the class
  public:
    // Declare a setter for the class
    void SetHouse(int rooms, double sqft, string paint) {
      // Initialize the private member variables with values passed to the member function
      numRooms = rooms;
      squareFeet = sqft;
      color = paint;
    }


    // Declare a member function to display information about the house
    void displayInfo() {
      cout << "This house has " << numRooms << " rooms, is " << squareFeet << " square feet, and is painted " << color << endl;
    }

    // Declare a member function to change the color of the house
    void setColor(string newColor) {
      color = newColor;
    }
};

// Define the main function
int main() {
  // Create an object of type House
  House* myHouse = new House;

  myHouse->SetHouse(1,245,"red");
  
  // Call the displayInfo() method on the myHouse object to print out its information
  myHouse->displayInfo();

  // Create another object of type House with different values
  House yourHouse;

  yourHouse.SetHouse(4,688,"grey");
  
  // Call the displayInfo() method on the yourHouse object to print out its information
  yourHouse.displayInfo();

  // Call the setColor() method on the yourHouse object to change its color to red
  yourHouse.setColor("red");
  
  // Call the displayInfo() method on the yourHouse object again to print out its updated information
  yourHouse.displayInfo();

  // Return 0 to indicate successful program execution
  return 0;
}


/*
    In this code, We have created 
        A class called House.
        
        Three private member variables: numRooms, squareFeet, and color. 
        
        Contain two member function Getter and Setter.
            Getter function are used to get values from user.
            Setter function are used for showing values to user.

        We have also defined two member functions: 
            displayInfo() which displays information about the house.
            setColor() which changes the color of the house.

    In the main() function, we have created two objects of type House, myHouse and yourHouse, by calling the Setter function to put values the member variables. 
    
    We have then called the displayInfo() method on each object to print out its information.

    Next, we have called the setColor() method on the yourHouse object to change its color to red. 
    We have then called the displayInfo() method on the yourHouse object again to print out its updated information.
*/

