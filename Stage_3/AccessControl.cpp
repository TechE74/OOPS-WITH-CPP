/*
*  This program demonstrates the concepts of access control and inheritance in C++.
*  It defines a base class called 'Person' with private and protected member variables,
*  and two derived classes, 'Student' and 'Teacher', that inherit from the 'Person' class.
*
*  The 'Person' class defines private member variables for a person's name and age, and
*  protected member variables for their address and phone number. It also includes
*  public methods to get and set these member variables.
*
*  The 'Student' class inherits from 'Person' and adds a private member variable for
*  the student's grade level, and a public method to get and set this variable.
*
*  The 'Teacher' class also inherits from 'Person' and adds a private member variable for the teacher's subject area, and a public method to get and set this variable

*  Access control is demonstrated through the use of private and protected member variables.

*  In the 'Person' class, which cannot be accessed directly by instances of the derived classes.

*  Instead, the derived classes use public methods in the base class to access and modify these variables.

*  Inheritance is demonstrated by the fact that the 'Student' and 'Teacher' classes inherit the member variables and methods of the 'Person' class. This means that instances of the derived classes can also use the methods defined in the base class to get and set the 'Person' member variables.
*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

protected:
    string address;
    string phone;

public:
    // Constructors
    Person(string n, int a, string add, string ph) : name(n), age(a), address(add), phone(ph) {}
    Person() : name(""), age(0), address(""), phone("") {}

    // Getters and setters
    string getName() const { return name; }
    void setName(string n) { name = n; }

    int getAge() const { return age; }
    void setAge(int a) { age = a; }

    string getAddress() const { return address; }
    void setAddress(string add) { address = add; }

    string getPhone() const { return phone; }
    void setPhone(string ph) { phone = ph; }
};

class Student : public Person
{
private:
    int gradeLevel;

public:
    // Constructors
    Student(string n, int a, string add, string ph, int gl) : Person(n, a, add, ph), gradeLevel(gl) {}
    Student() : Person(), gradeLevel(0) {}
    // Getter and setter for grade level
    int
    getGradeLevel() const
    {
        return gradeLevel;
    }
    void setGradeLevel(int gl) { gradeLevel = gl; }
};

class Teacher : public Person
{
private:
    string subject;

public:
    // Constructors
    Teacher(string n, int a, string add, string ph, string sub) : Person(n, a, add, ph), subject(sub) {}
    Teacher() : Person(), subject("") {}

    // Getter and setter for subject

    string getSubject() const
    {
        return subject;
    }
    void setSubject(string sub) { subject = sub; }
};

int main()
{
    // Create a student object and set its member variables
    Student s("John Doe", 16, "123 Main St", "555-1234", 11);
    s.setName("Jane Doe");
    s.setPhone("555-5678");

    // Print the student's information
    cout << "Student name: " << s.getName() << endl;
    cout << "Student age: " << s.getAge() << endl;
    cout << "Student address: " << s.getAddress() << endl;
    cout << "Student phone: " << s.getPhone() << endl;
    cout << "Student grade level: " << s.getGradeLevel() << endl;

    // Create a teacher object and set its member variables
    Teacher t("Ms. Smith", 35, "456 Elm St", "555-4321", "English");
    t.setAddress("789 Oak St");

    // Print the teacher's information
    cout << "Teacher name: " << t.getName() << endl;
    cout << "Teacher age: " << t.getAge() << endl;
    cout << "Teacher address: " << t.getAddress() << endl;
};

