/*
    What is Operator Overloading?
    
    Operator overloading is the process of redefining or extending the behavior of operators to work with user-defined types. 
    In C++, operators such as +, -, *, /, ==, <, >>, [], etc., can be overloaded to perform customized operations on objects of a class.
*/


/*
    Why Use Operator Overloading?

    Operator overloading provides several benefits:

    Expressive Code: Operator overloading allows classes to have intuitive and natural syntax, making code more readable and self-explanatory. For example, object1 + object2 instead of object1.add(object2).

    Consistency with Built-in Types: By overloading operators, user-defined types can behave similarly to built-in types, allowing seamless integration with existing code and reducing the learning curve.

    Code Reusability: Operator overloading allows developers to reuse existing operators for their own types. This promotes code reuse and reduces redundancy in function names.

*/


/*
    Overloadable Operators
    Not all operators can be overloaded in C++. Certain operators, such as . (member access), :: (scope resolution), ?: (ternary), sizeof (size-of), etc., cannot be overloaded. However, many other operators can be overloaded, including:

    Unary Operators: +, -, ++, --, !, ~, *, &
    Binary Operators: +, -, *, /, %, =, +=, -=, *=, /=, %=, ==, !=, <, >, <=, >=, <<, >>, &&, ||, &, |, ^, []
    Assignment Operators: =, +=, -=, *=, /=, %=
    Comparison Operators: ==, !=, <, >, <=, >=
    Increment and Decrement Operators: ++, --
    Function Call Operator: ()
*/


/* 
    Rules for Operator Overloading
    When overloading operators, certain rules need to be followed to ensure correct behavior and adherence to the language rules. These rules include:

    > Syntax for Operator Overloading
        Operator overloading is done by defining a function that specifies the desired behavior for the operator. 
        The function is named using the operator keyword followed by the operator symbol.

    Member Functions vs. Non-Member Functions
        Operators can be overloaded as member functions of a class or as non-member functions. Member functions have access to the object's private members, while non-member functions provide more flexibility and allow conversion of both operands.

    Overloading Unary Operators
        Unary operators, such as +, -, ++, --, !, ~, *, and &, can be overloaded as unary member functions or unary non-member functions.

    Overloading Binary Operators
        Binary operators, such as +, -, *, /, %, =, +=, -= etc., can be overloaded as binary member functions or binary non-member functions. The left-hand side operand is the calling object for member functions.

    Overloading Assignment Operators
    The assignment operator (=) can be overloaded as a binary member function or a binary non-member function. It is used to assign the value of one object to another.

    Overloading Comparison Operators
    Comparison operators (==, !=, <, >, <=, >=) can be overloaded as binary member functions or binary non-member functions. They are used to compare two objects and return a boolean result.
*/

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    Complex operator-(const Complex& other) const {
        Complex result;
        result.real = real - other.real;
        result.imag = imag - other.imag;
        return result;
    }

    Complex operator*(const Complex& other) const {
        Complex result;
        result.real = (real * other.real) - (imag * other.imag);
        result.imag = (real * other.imag) + (imag * other.real);
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imag << "i";
        return os;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex product = c1 * c2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
