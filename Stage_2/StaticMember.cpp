/*
    Static member is a member of a class that is shared by all instances of the class. 
    It is a member that is associated with the class itself, rather than with any particular object of the class. 
    Static members can be variables, functions, or data structures. 
    They are declared using the static keyword in the class definition.

    Static variables are often used to maintain state information that is shared among all instances of the class.
    They are initialized only once, at the start of the program, and can be accessed and modified by any member function of the class. 
    Static functions are used to provide utility functions that are not associated with any particular instance of the class.
*/

// class MyClass {
//     private:
//         static int myStaticVariable;
//     public:
//         static void myStaticFunction();
// };

/*
        Accessing Static Members

        Static members can be accessed using the scope resolution operator (::) with the class name, followed by the member name. For example, to access the myStaticVariable member of the MyClass class, you would use the following syntax
*/

// int x = MyClass::myStaticVariable;

/*
        Similarly for calling the myStaticFunction member function of the MyClass class, you would use the following syntax:
*/

// MyClass::myStaticFunction();


/*
    Advantages of Static Members:
        Static members can be used to maintain state information that is shared among all instances of the class.
        Static members can be accessed without the need for an instance of the class.
        Static members can be used to implement utility functions that are not associated with any particular instance of the class.

    Disadvantages of Static Members:
        Static members can increase the complexity of the code by introducing global state information.
        Static members can make it harder to write unit tests for the class, since the behavior of the class may depend on the state of the static members.
        Static members can introduce thread-safety issues, since they are shared among all instances of the class.

*/


#include <iostream>
using namespace std;

class MyClass {
    private:
        static int myStaticVariable;
    public:
        static void myStaticFunction() {
            cout << "This is a static function." << endl;
        }
        
        void setStaticVariable(int x) {
            myStaticVariable = x;
        }
        
        void printStaticVariable() {
            cout << "Static variable value: " << myStaticVariable << endl;
        }
};

int MyClass::myStaticVariable = 0;

int main() {
    MyClass obj1, obj2;
    
    MyClass::myStaticFunction(); // Calling static function
    
    obj1.setStaticVariable(10);
    obj2.setStaticVariable(20);
    
    obj1.printStaticVariable();
    obj2.printStaticVariable();
    
    return 0;
}

/*
    We have defined a class MyClass with a static member myStaticVariable and a static member function myStaticFunction. 
    We have also defined three member functions: setStaticVariable, printStaticVariable, and main.


    We create two instances of the MyClass class: obj1 and obj2.
    We then call the myStaticFunction static member function using the scope resolution operator. 
    Next, we set the value of the myStaticVariable member for both instances of the MyClass class using the setStaticVariable member function. 
    Finally, we print the value of the myStaticVariable member for both instances of the MyClass class using the printStaticVariable member function.
*/

// output
// This is a static function.
// Static variable value: 20
// Static variable value: 20


