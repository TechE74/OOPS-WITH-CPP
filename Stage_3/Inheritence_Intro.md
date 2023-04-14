# Introduction to Inheritance in Object-Oriented Programming

< > Inheritance is a fundamental concept in object-oriented programming that allows a class to inherit properties and behavior from another class.

< >The capability of a class to derive properties and characteristics from another class is called Inheritance.

< > It allows a programmer to define a common interface and behavior for a set of related classes.

# Basic Concepts of Inheritance

< > Inheritance allows us to define a new class based on an existing class.

![image](https://user-images.githubusercontent.com/129526047/231940308-fdb3acb5-aab6-462e-96b1-b5d3ba6803ee.png)

< > The existing class is called the base class, and the new class is called the derived class.

< >  Base class can also add new properties and behavior of its own.


### For example, suppose we have a class called Geometry, which represents a generic geometric Geometry. We can define a subclass called Circle, which inherits from the Geometry class. The Circle class would have all the properties and behavior of the Geometry class, but it would also have its own properties and behavior specific to circles, such as a radius and a method to calculate the area of the circle.

![image](https://user-images.githubusercontent.com/129526047/231940880-c44a36f0-84c3-4bb7-963e-eb40c09e2444.png)




## Why and when to use inheritance?

< > Consider a group of Birds. You neeed to create classes for Sparrow ,Eagle ,Vulture etc. The methods colour(), layeggs(), Speed(), area() are common for all the classes. If we create these functionfor every class indivisually it is abiding the main law of inheritence (DRY concept) do not repeat yourself .

< > If you are willing to create indivisuall class methods by your own, then their must be chance of eroor and data redundancy.

< > Inheritence came into existence to avoid duplicacy and increase reusablity.


## INHERITENCE IMPLEMENTATION

### Derived Classes: 
    A Derived class is defined as the class derived from the base class.

### Syntax: 

class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}

class -> keyword to create class

derived_class_name -> child class name which inherits base/parent class.

access-specifier  — either of private, public or protected. If neither is specified, private is taken as default

base-class-name  — name of the base/parent class



## CASES

< > A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.

1. class Derived : private Base              //private derivation
        {                
            statements...
        }

2. class Derived : public Base              //public derivation
        {         
            statements...
        }

3. class Derived : protected Base              //protected derivation
        {        
            statements...
        }

4. class Derived :  Base                            //private derivation by default
        {     
            statements...
        }






< > When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.

< > On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.

#include<iostream>
using namespace std;
  
class Person
{
    int id;
    char name[100];
    
    public:
        void set_p()
        {
            cout<<"Enter the Id:";
            cin>>id;
            fflush(stdin);
            cout<<"Enter the Name:";
            cin.get(name,100);
        }
    
        void display_p()
        {
            cout<<endl<<id<<"\t"<<name<<"\t";
        }
};
  
class Student: private Person
{
    char course[50];
    int fee;
      
    public:
    void set_s()
        {
            set_p();
            cout<<"Enter the Course Name:";
            fflush(stdin);
            cin.getline(course,50);
            cout<<"Enter the Course Fee:";
            cin>>fee;
        }
          
        void display_s()
        {
            display_p();
            cout<<course<<"\t"<<fee<<endl;
        }
};
  
main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}






# Modes of Inheritance: There are 3 modes of inheritance.
    ![image](https://user-images.githubusercontent.com/129526047/231941003-e0880dd0-9124-4f21-9ec2-f5688ae68b9f.png)


## Public Mode: 
If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

## Protected Mode: 
If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.


## Private Mode: 
If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

class A {
public:
    int x;
  
protected:
    int y;
  
private:
    int z;
};
  
class B : public A {
    // x is public
    // y is protected
    // z is not accessible from B
};
  
class C : protected A {
    // x is protected
    // y is protected
    // z is not accessible from C
};
  
class D : private A // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};

### SUMMARY
  _____________________________________________________________________________________________
 |  Inheritance Mode	  |  Access Specifier of Base Class Members in Subclass when Derived as|
 |  Public Inheritance	  |  Public, Protected, and Private                                    |
 |  Protected Inheritance |	 Protected, and Private                                            |
 |  Private Inheritance	  |  Private                                                           |
 |________________________|____________________________________________________________________|


![image](https://user-images.githubusercontent.com/129526047/231941067-8a9b4417-ee71-4c38-bf80-c078d68050b5.png)



# Types Of Inheritance:-

![image](https://user-images.githubusercontent.com/129526047/231941156-4c03016c-76c3-4f5d-920b-07512195057f.png)


### Single Inheritance: 
< > In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

image.png

class Parent
{ 
... .. ... 
};

class Child: public Parent
{
... .. ...
};


### Multiple Inheritance: 
< > Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

image.png

class Parent1
{ 
... .. ... 
};

class Parent2
{
... .. ...
};

class Child: public Parent1, public Parent2
{
... ... ...
};



### Multilevel Inheritance: 
In Multilevel inheritance, a derived class is created from another derived class.

image.png


class Parent
{ 
... .. ... 
};
class Child:public Parent
{
... .. ...
};
class GrandChild: public Child
{
... ... ...
};



### Hierarchical Inheritance: 
In Heirarchial inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

image.png

class Ecosystem 
{  
    // body of the class A.  
}    
class Terestrial : public Ecosystem   
{  
    // body of class B.  
}  
class Marine : public Ecosystem
{  
    // body of class C.  
}   
class Arial : public Ecosystem 
{  
    // body of class D.  
}   




### Hybrid (Virtual) Inheritance: 
Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 

image.png


## AMBIGUIOUS CASE OF HYBRID
< > Ambiguity in hybrid inheritance can occur when two or more base classes of a derived class have the same method name and signature. In such a case, the derived class can't determine which version of the method to use, leading to ambiguity. 


## HOW TO HANDLE ???

< > There are 2 ways ...
 
  1 > Avoiding ambiguity using the scope resolution operator: 
        Using the scope resolution operator we can manually specify the path from which data member a will be accessed 

        eg -> obj.Class_name :: memeber_name = value; 

  2 > Avoiding ambiguity using the virtual base class:
        By declaring a function as virtual in the base class, it becomes eligible for dynamic dispatch. Dynamic dispatch allows the derived class object to determine the most appropriate version of a function to use based on the actual type of the object at runtime. This means that if a derived class has multiple base classes with a common member function, the correct version of the function can be called based on the type of the derived class object.

        eg -> 
        class Base {
            public:
            virtual void display() {
                cout << "Display from Base" << endl;
            }
        };

        class Derived1 : public Base {
            public:
            void display() {
                cout << "Display from Derived1" << endl;
            }
        };

        class Derived2 : public Base {
            public:
            void display() {
            cout << "Display from Derived2" << endl;
            }
        };

        class Derived3 : public Derived1, public Derived2 {
            public:
            // No display() function defined in Derived3 class
        };

        int main() {
            Derived3 d;
            d.display(); // Calls the display() function of Derived1
            return 0;
        }

#### In the above example, the Base class has a virtual function called display(). The Derived1 and Derived2 classes both inherit from Base and override the display() function with their own implementations. The Derived3 class then inherits from both Derived1 and Derived2.Since Derived3 does not define its own display() function, the compiler is unable to determine which version of the function to use. However, because the display() function is marked as virtual in the Base class, the correct version of the function can be determined at runtime. When d.display() is called in main(), the display() function of Derived1 is called because it is the first one in the inheritance hierarchy to override the virtual function.
