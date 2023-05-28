/* BASIC INTRO

    Exception Class

    > In C++, the exception class provides a standard way to handle and propagate exceptional conditions or errors that occur during program execution. 
    > It allows you to detect and respond to exceptional situations, providing a mechanism for control flow to transfer from the point of error to a suitable error-handling block. 
*/

/*
    > The exception class is defined in the <exception> header and is part of the C++ Standard Library. 
    > It serves as a base class for various types of exceptions that can be thrown or caught in a program. 
    > The exception class provides a standardized interface for exceptions, including the ability to store and retrieve exception information.
*/

/*
    Exception Handling in C++

    > Exception handling involves three main components: 
        ! Throwing an exception.
            > To raise an exception and indicate that an error or exceptional condition has occurred, you can use the throw keyword followed by an instance of the exception class or its derived class.
            > throw MyException("Something went wrong");
        ! Catching an exception.
            > To catch an exception and handle it, you use a try block followed by one or more catch blocks. 
            > The catch block is responsible for handling the thrown exception if its type matches the specified exception type.
                    try {
                        // Code that may throw exceptions
                    } catch (MyException& ex) {
                        // Exception handling code for MyException
                    } catch (AnotherException& ex) {
                        // Exception handling code for AnotherException
                    } catch (...) {
                        // Exception handling code for any other exception
                    }
        ! Handling the exception.
            > Inside the catch block, you can write code to handle the exception appropriately.
            > This may include logging the error, displaying a message to the user, performing cleanup tasks, or taking any other necessary action.
    
    The exception class is used to represent and handle exceptions in this process.
*/