/*
    In C++, functions can be defined as "inline" functions using the "inline" keyword. 
    An inline function is a function that is expanded in line when it is called, rather than executing a call to the function. 
    This can improve performance by reducing the overhead of function calls. 
    However, using inline functions for large or complex functions can actually decrease the program's performance because the code size will increase and the program may use more memory.

    NOTE ->(It is not a command it is a reuest to compiler , this means its upto compiler to fetch the reuest or just ignore it.)



    Advantages of Inline Functions:
        The main advantage of using inline functions is to improve the program's performance by reducing the overhead of function calls.
        Inline functions can help to reduce the code size and memory usage of a program.
        Inline functions can improve the program's readability by making it easier to follow the flow of the code.
        Inline functions can be used to create small utility functions that can be easily reused throughout a program.

    
    
    Disadvantages of inline function:
        It can increase the code size and memory usage of a program if they are used excessively.
        Inline functions can make the program's compilation time longer, especially if they are used frequently or are large.
    Inline functions can make the program's debugging process more difficult because the function code is included in multiple places in the program.



    When to use??
    Inline functions should be used only for small and frequently used functions, such as mathematical calculations or accessor functions for class data members. 
    

    When not to use??
    Inline functions should not be used for large or complex functions, such as those that contain loops, conditional statements, or multiple return statements.
*/

#include<bits/stdc++.h>

using namespace std;


inline int add(int x, int y) {
    return x + y;
}

int main() {

    int a = 10, b = 20;
    cout << "The sum is: " << add(a, b) << endl;
    return 0;
} 