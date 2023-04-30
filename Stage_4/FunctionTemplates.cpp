/*  BASIC OVERVIEW

    Function templates are a powerful feature in C++ that allow you to write generic code that can work with multiple types.
    Instead of writing separate functions for every type you want to work with, you can write a single function template that can be instantiated with different types.

    Syntax:

    template <typename T>

    return_type function_name(T parameter) {
        // function body
    }


    template is a keyword that is used to indicate that we are defining a template, and <typename T> is a template parameter that specifies the type we want to work with.
    You can also use the keyword class instead of typename, which has the same effect.
    The return_type is the return type of the function, and function_name is the name of the function.
    The T in the parameter list is the name of the template parameter, which can be used to specify the type of the function parameter and return type
*/

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 10;
    double d1 = 2.5, d2 = 3.7;

    cout << add(x, y) << endl;
    cout << add(d1, d2) << endl;

    return 0;
}

/*
                                        Template Specialization


    Sometimes, you may want to define a different version of the function template for a specific type.
    This is called template specialization, and it allows you to provide a specialized implementation of the template for a particular type.

    Syntax:

    template <>
    return_type function_name<specific_type>(specific_type parameter) {
        // specialized implementation
    }


*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void print(T t)
{
    cout << t << endl;
}

template <>
void print<string>(string s)
{
    cout << "String: " << s << endl;
}

int main()
{
    int x = 5;
    double d = 2.5;
    string s = "hello";

    print(x);
    print(d);
    print(s);

    return 0;
}

/*
    Variadic Templates
    Variadic templates allow you to define functions that can take a variable number of arguments.
    This can be useful when you want to write functions that can handle an arbitrary number of arguments of different types.


    Syntax:

    template <typename... Args>
    return_type function_name(Args... args) {
        // function body
    }

*/

#include <iostream>
using namespace std;

template <typename... Args>
void print(Args... args)
{
    (cout << ... << args) << endl;
}

int main()
{
    int x = 5;
    double d = 2.5;
    string s = "hello";

    print(x, d, s);

    return 0;
}

/*
    Recursive Templates
        Recursive templates allow you to define functions or classes that call themselves with a modified set of template arguments.
        This can be useful when you want to write functions or classes that operate on recursive data structures, such as trees or linked lists.
*/

#include <iostream>
using namespace std;

template <int n>
struct factorial
{
    static const int value = n * factorial<n - 1>::value;
};

template <>
struct factorial<0>
{
    static const int value = 1;
};

int main()
{
    cout << factorial<5>::value << endl;

    return 0;
}

/*
                                                    SFINAE
    Substitution Failure Is Not An Error (SFINAE) is a C++ rule that allows the compiler to discard invalid function template instantiations during overload resolution, rather than generating a compile-time error.
    SFINAE is often used in conjunction with type traits to write functions that only accept certain types.
    Let's take a look at an example of a function template that only accepts types that have a size() member function:
*/

#include <iostream>
#include <type_traits>
using namespace std;

template <typename T, typename = void>
struct has_size : false_type
{
};

template <typename T>
struct has_size<T, void_t<decltype(declval<T>().size())>> : true_type
{
};

template <typename T, typename = enable_if_t<has_size<T>::value>>
void print_size(T t)
{
    cout << "Size: " << t.size() << endl;
}

int main()
{
    vector<int> v = {1, 2, 3};
    print_size(v);

    int x = 5;
    // print_size(x); // this line will not compile

    return 0;