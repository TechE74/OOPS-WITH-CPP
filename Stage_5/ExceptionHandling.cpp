// handling Exception

/*
    What are Exceptions?
        
        > Exceptions are abnormal conditions or errors that occur during the execution of a program. 
        > They can be caused by various factors such as invalid input, resource unavailability, or unexpected behavior.
        > Exception handling provides a mechanism to catch and handle these exceptions, allowing the program to gracefully recover from errors and continue execution.
*/


// Use of Exception Handling

/*
    Exception handling offers several benefits:

        > Error Management: Exception handling enables the separation of error management code from the main program logic, making the code more readable and maintainable.
        > Graceful Recovery: Exceptions allow for a controlled and graceful recovery from errors. They provide an opportunity to handle errors and take appropriate actions without abruptly terminating the program.
        > Error Reporting: Exception handling provides a mechanism to report detailed error information, including error messages, stack traces, and diagnostic data. This aids in debugging and troubleshooting.
*/

// Basic Exception Handling
/*
    > try-catch Block
        The try-catch block is used to handle exceptions in C++. 
        The code that may throw an exception is enclosed within the try block, and the corresponding exception handling code is written in the catch block.

        try {
            // Code that may throw an exception
        } catch (ExceptionType & ex) {
            // Exception handling code for ExceptionType1
        }

*/

/*
    > Throwing Exceptions
        
        Exceptions can be thrown using the throw keyword. The throw statement is used to explicitly throw an exception object or value. 

        eg >  throw ExceptionType(arguments);
*/


/*
    Handling Multiple Exceptions
    
    Multiple types of exceptions can be caught and handled using separate catch blocks. 
    The catch blocks are evaluated in order, and the first matching block is executed.  

    try {
        // Code that may throw exceptions
    } catch (ExceptionType1& ex) {
        // Exception handling code for ExceptionType1
    } catch (ExceptionType2& ex) {
        // Exception handling code for ExceptionType2
    } catch (...) {
        // Generic exception handling code
    }

*/


/*
    Exception Classes and Hierarchy

        > Creating Custom Exception Classes
        Custom exception classes can be created by deriving from the base class std::exception or its derived classes. 
        Custom exception classes provide specific information about the type of exception and can carry additional data relevant to the error.
*/


// Devide by zero Exception

#include <iostream>

int main() {
    int numerator, denominator, result;

    // Get user input for numerator and denominator
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    try {
        // Divide numerator by denominator
        if (denominator == 0) {
            // Throw an exception if denominator is zero
            throw "Divide by zero exception";
        }

        result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const char* exception) {
        // Catch the exception and handle it
        std::cout << "Exception occurred: " << exception << std::endl;
    }

    return 0;
}

/*
    Best Practices and Error Handling Strategies
    
    > Proper Use of Exceptions
        ! Use exceptions for exceptional conditions, not for regular flow control.
        ! Throw appropriate exception types that convey meaningful information about the error.
        ! Handle exceptions at the appropriate level in the program hierarchy.

    > Exception Swallowing and Rethrowing
        ! Avoid swallowing exceptions without proper handling or logging.
        ! Rethrow exceptions when they cannot be handled at the current level, allowing them to propagate to a higher level for proper handling.

    > Error Handling Strategies
        ! Use a combination of exception handling and error return codes for different scenarios.
        ! Follow consistent error handling patterns throughout the codebase.
        ! Consider logging and reporting mechanisms to capture and analyze errors.
*/


//   Advanced Exception Handling

/*
    > throw Keyword

        ! The throw keyword can be used outside the catch block to rethrow an exception, allowing it to propagate up the call stack for further handling.
*/

#include <iostream>

void thirdFunction() {
    std::cout << "Inside thirdFunction" << std::endl;
    throw "Exception in thirdFunction";
}

void secondFunction() {
    std::cout << "Inside secondFunction" << std::endl;
    thirdFunction();
}

void firstFunction() {
    std::cout << "Inside firstFunction" << std::endl;
    try {
        secondFunction();
    } catch (const char* exception) {
        std::cout << "Caught exception in firstFunction: " << exception << std::endl;
        throw; // Propagate the exception to the calling function
    }
}

int main() {
    try {
        std::cout << "Inside main" << std::endl;
        firstFunction();
    } catch (const char* exception) {
        std::cout << "Caught exception in main: " << exception << std::endl;
    }

    return 0;
}

/* CODE SUMMARY

    In this code, we have multiple functions (firstFunction, secondFunction, and thirdFunction) that are called sequentially. The thirdFunction throws an exception, which is then propagated up the call stack to be caught and handled in the main function.

    Inside main, we call firstFunction, which in turn calls secondFunction, and secondFunction calls thirdFunction. When the exception is thrown in thirdFunction, it is caught in the catch block inside firstFunction.

    Instead of handling the exception there, we use the throw keyword without any argument, which rethrows the same exception to the calling function (main). This allows the exception to propagate further up the call stack.

    Finally, in the catch block in main, we catch the propagated exception and print an error message.
*/




/*
    > catch Blocks Order
        !The order of catch blocks is important. More specific exception types should be caught before more general ones to ensure proper handling and avoid unintentional catch blocks.
*/

#include <iostream>

void processNumber(int number) {
    try {
        if (number == 0) {
            throw "Exception: Number is zero";
        } else if (number < 0) {
            throw "Exception: Number is negative";
        }

        std::cout << "Number is valid: " << number << std::endl;
    } catch (const char* exception) {
        std::cout << "Caught exception: " << exception << std::endl;
        throw; // Propagate the exception to the calling function
    }
}

int main() {
    try {
        processNumber(-5);
    } catch (const char* exception) {
        std::cout << "Caught exception in main: " << exception << std::endl;
    }

    return 0;
}

/*CODE SUMMARY

    In this code, we have a function processNumber that takes an integer as an argument. Inside the function, we use a try block to check if the number is valid or not.

    If the number is zero, we throw an exception indicating that the number is zero. If the number is negative, we throw an exception indicating that the number is negative.

    The catch blocks in the function are ordered from specific to general. The first catch block catches the exception for a zero number, and the second catch block catches the exception for a negative number.

    In the catch block, we print the caught exception and then rethrow the exception using the throw keyword. This propagates the exception to the calling function (main).

    In main, we call processNumber with a negative number. The exception is caught in the catch block in processNumber, and then rethrown. It is caught again in the catch block in main, where we print the caught exception.
*/
