// C++ Template Functions
/*
    What are Template Functions?
    
    Template functions are functions that can work with multiple data types. 
    They are defined using a template parameter that represents a generic type. 
    This allows the function to be instantiated with different types, enabling code reuse and flexibility.
    Template functions are similar to function overloading but provide a more generic and flexible approach to handle different data types.
*/




// Use of Template function
/*
    Why Use Template Functions?
    
    Template functions offer several benefits:

        > Code Reusability: Template functions eliminate the need to rewrite similar code for different data types. They provide a single implementation that can be used with multiple types.

        > Generality: Template functions enable the creation of generic algorithms that can work with different data structures, containers, or user-defined types.

        > Type Safety: Template functions perform compile-time type checking, ensuring type compatibility and preventing runtime type errors.
*/

// Syntax and Declaration of Template Functions

// Template Function Syntax
template <typename T>
ReturnType functionName(T parameter) {
    // Function body
}


// Template function to calculate the sum of two numbers

#include <iostream>
template <typename T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    float floatNum1 = 3.14;
    float floatNum2 = 2.71;


    int result1 = sum(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " = " << result1 << std::endl;


    float result2 = sum(floatNum1, floatNum2);
    std::cout << "Sum of " << floatNum1 << " and " << floatNum2 << " = " << result2 << std::endl;

    return 0;
}


