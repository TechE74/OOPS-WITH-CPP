/*
    Class templates are similar to function templates, but instead of defining a function with a variable number of parameters, we define a class with one or more template parameters.
    The template parameters can be used to define types, constants, or other templates that are used in the class definition.

*/

/*
    Suntax :

    template <typename T>
    class class_name
    {
        // class definition
    };

*/

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> data;

public:
    void push(T value)
    {
        data.push_back(value);
    }

    T pop()
    {
        T value = data.back();
        data.pop_back();
        return value;
    }

    bool empty() const
    {
        return data.empty();
    }
};

int main()
{
    Stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    while (!s1.empty())
    {
        cout << s1.pop() << " ";
    }
    cout << endl;

    Stack<string> s2;
    s2.push("hello");
    s2.push("world");

    while (!s2.empty())
    {
        cout << s2.pop() << " ";
    }
    cout << endl;

    return 0;
}

/*
    We have defined a class template called Stack that defines a generic stack data structure.
    We have used a vector to store the data and provided three member functions: push, pop, and empty.
    We have instantiated two different instances of the Stack class: one for int values and one for string values.
*/

/*      PARTIAL SPECIALIZATION


    Partial Specialization
        Partial specialization allows you to define a specialized version of a class template for a specific subset of template arguments.
        This can be useful when you want to provide a different implementation for certain types.
*/

#include <iostream>
using namespace std;

template <typename T>
class MyClass
{
public:
    void print(T value)
    {
        cout << "Value: " << value << endl;
    }
};

template <typename T>
class MyClass<T *>
{
public:
    void print(T *value)
    {
        cout << "Pointer Value: " << *value << endl;
    }
};

int main()
{
    int x = 5;
    MyClass<int> c1;
    c1.print(x);

    int *ptr = &x;
    MyClass<int *> c2;
    c2.print(ptr);

    return 0;
}

/*      Template Specialization


        Template specialization allows you to provide a specialized implementation for a specific template argument.
        This can be useful when you want to provide a different implementation for a specific type or value

*/

#include <iostream>
using namespace std;

template <typename T, int size>
class Array
{
private:
    T data[size];

public:
    T &operator[](int index)
    {
        return data[index];
    }
};

int main()
{
    Array<int, 5> arr1;
    for (int i = 0; i < 5; i++)
    {
        arr1[i] = i;
    }

    Array<string, 3> arr2;
    arr2[0] = "hello";
    arr2[1] = "world";
    arr2[2] = "!";

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
        In this example, we have defined a class template called Array that takes two template parameters: a type parameter T and a non-type parameter size. 
        
        We have used the non-type parameter to define the size of the internal array.

    We have instantiated two different instances of the Array class: one for int values with a size of 5, and one for string values with a size of 3.
    
    */

