// Function Overloading in C++

/*
    Function overloading is the process of defining multiple functions with the same name but different parameter lists. The compiler differentiates between these functions based on the number, types, or order of the parameters. 
    This allows programmers to provide different implementations of a function for different scenarios without needing to use different names for each variant.
*/


// Why Use Function Overloading ?

/*
    Function overloading provides several benefits:

    Code Reusability: By using the same function name for related operations, we can reuse the function name and avoid the need to invent new names for similar operations.

    Readability and Intuitiveness: Function overloading improves code readability by using descriptive function names. It allows developers to write code that resembles natural language, making it easier to understand and maintain.

    Flexibility and Convenience: Function overloading provides flexibility by allowing different parameter combinations, which simplifies function calls and makes the code more convenient to use. 
*/


// Rules for Function Overloading

/*
    When overloading functions, certain rules need to be followed to ensure the compiler can resolve the correct function to execute based on the provided arguments. These rules include:

    Parameter Types
    Function overloading is based on the types of the function parameters. 
    Two functions can be overloaded if they have different parameter types, even if the parameter names are the same.
*/

void print(int num) {
    std::cout << "Printing an integer: " << num << std::endl;
}

void print(double num) {
    std::cout << "Printing a double: " << num << std::endl;
}


/*
    Number of Parameters
    Functions can be overloaded based on the number of parameters they accept. If two functions have the same name but a different number of parameters, they are considered overloaded.
*/

void print(int num) {
    std::cout << "Printing an integer: " << num << std::endl;
}

void print(int num1, int num2) {
    std::cout << "Printing two integers: " << num1 << " and " << num2 << std::endl;
}
