/*
    Friend Functions and Classes in C++.

    Friend Functions and Classes are an important feature of C++ programming language.
    A friend Function or Class is a function or class that is granted access to the private and protected members of another class.


    Friend Functions
    A friend function is a non-member function that is declared with the keyword "friend" in the class declaration. A friend function has access to the private and protected members of the class, even though it is not a member of the class itself.
*/
#include <bits/stdc++.h>

using namespace std;

class MyClass
{
private:
    int myPrivateVar;

public:
    MyClass(int x){
        myPrivateVar = x;
    }

    int getPrivateVar() { return myPrivateVar; } // public member function to access myPrivateVar
    friend void myFriendFunction(MyClass obj);
};

void myFriendFunction(MyClass obj)
{
    cout << "The value of myPrivateVar is: " << obj.getPrivateVar() << endl; // using public member function to access myPrivateVar
}

int main()
{
    MyClass myObj(42);
    myFriendFunction(myObj);
    return 0;
}




/*
    Friend Classes
        A friend class is a class that is granted access to the private and protected members of another class.
        To declare a class as a friend of another class, the keyword "friend" is used in the class declaration.
*/

class MyClass
{
private:
    int myPrivateVar;
    friend class MyFriendClass;
};

class MyFriendClass
{
public:
    void myFriendFunction(MyClass obj)
    {
        cout << "The value of myPrivateVar is: " << obj.myPrivateVar << endl;
    }
};

int main()
{
    MyClass myObj(42);
    MyFriendClass myFriend;
    myFriend.myFriendFunction(myObj);
    return 0;
}



/*
    A friend function or class is a way to grant access to private and protected members of a class to another function or class that is not a member of the class. 
    
    This allows the friend function or class to access and modify the private or protected members of the class that would otherwise be inaccessible.

    A friend function or class is declared inside the class that it wishes to befriend, using the friend keyword. 
    
    Once a function or class is declared as a friend, it can access the private and protected members of the class, as if they were its own members.

    USECASE -> One use case for friend functions or classes is when you want to provide external functionality to a class, without exposing the internals of the class to the rest of the program. This can help to keep your code organized and encapsulated.

    It's important to note that friend functions or classes should be used sparingly and with caution. Overuse of friend functions or classes can lead to decreased encapsulation and a less maintainable codebase.

    Friend functions or classes provide a way to grant access to private and protected members of a class to specific external functions or classes, while maintaining encapsulation and control over access to class internals.
*/

