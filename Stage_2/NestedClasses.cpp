/*
    Nested class is a class that is declared inside another class.
    This means that the nested class is a member of the outer class, and can access the members of the outer class just like any other member function or data member.

    REASON TO USE

    1> Group related classes together: By declaring a class as nested inside another class, you are indicating that the nested class is related to the outer class in some way. This can make your code more organized and easier to understand.

    2> Improve encapsulation: By making a class nested, you can control its visibility and access within the outer class. This can help to enforce encapsulation and prevent unintended access to the class's members from outside the outer class.

    3> Access to private members: Nested classes can access the private members of the outer class, which can be useful if you need to share data or functionality between the two classes.

    4> Information hiding: By declaring a nested class as private or protected, you can hide it from the rest of the program. This can be useful if you want to encapsulate some functionality or data that is only used internally by the outer class.

    5> Code readability: Nested classes can help to make your code more readable by grouping related functionality together in a logical way.
*/

// eg- >if you have a Person class, you might want to create a nested Address class that holds information about the person's address. This makes it easy to access the person's address information from within the Person class, and keeps the related classes together in one place.

#include <iostream>

using namespace std;

class Person
{
public:
    Person(string name, int age, string street, string city, string state)
    {
        this->name = name;
        this->age = age;
        this->address.street = street;
        this->address.city = city;
        this->address.state = state;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << endl;
        cout << "  Street: " << address.street << endl;
        cout << "  City: " << address.city << endl;
        cout << "  State: " << address.state << endl;
    }

private:
    string name;
    int age;

    class Address
    {
    public:
        string street;
        string city;
        string state;
    } address;
};

int main()
{
    Person myPerson("John Doe", 30, "123 Main St", "Anytown", "CA");
    myPerson.printInfo();
    return 0;
}

/*
    The Person class has a nested Address class that holds information about the person's street, city, and state. 
    
    When a new Person object is created, the constructor initializes both the name and age member variables, as well as the nested Address object.

    The printInfo method is a member function of the Person class that prints out the person's name, age, and address information.

    Since the Address class is nested inside the Person class, we can access its member variables directly using the (.) operator.

    In the main function, we create a new Person object and pass in the necessary information. We then call the printInfo method on the myPerson object to print out its information.
*/