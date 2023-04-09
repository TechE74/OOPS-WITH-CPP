/*
    LETS UNDERSTAND THE CONCEPT OF POINTERS.

    Pointers are a symbolic representation of addresses. 
    They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. 
    
    SYNTAX :  datatype *var_name


    WHY WE USE POINTER ?

    A pointer has various applications like: 
    To pass arguments by reference: Passing by reference serves two purposes
    For accessing array elements: Compiler internally uses pointers to access array elements.
    To return multiple values: For example in returning square and the square root of numbers.
    Dynamic memory allocation: We can use pointers to dynamically allocate memory. The advantage of dynamically allocated memory is, that it is not deleted until we explicitly delete it.
    To implement data structures.
    To do system-level programming where memory addresses are useful.


    FEATURE ->  it saves memory space, they are used to allocate memory dynamically, it is used for file handling, etc. Pointers store the address of variables or a memory location.

    When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. There are 3 ways to pass C++ arguments to a function: 
    1> call-by-value   
    2> call-by-reference with a pointer argument
    3> call-by-reference with a reference argument
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    

    int num1 =4; // Initialize a integer varaible

    int *ptr ; // Create a pointer capable of hilding integer (reference variable)

    // Note ->  int doesn't refer to pointer type in above case. 
    // (int *ptr) means that you initiaized a pointer capable of holding address of integer type variable 

    ptr=&num1 // ptr is holding the address of num1 

    // you can check it by below way
    cout<<"Value at memory location is "<<*(ptr) 


    int ** ptr2 = &ptr; // here it is holding the address of variable in which address of num1 is stored (double referncing )..

}

/*
    TYPES OF POINTERS IN CPP ARE 

    1> Integer Pointers 
            These are the pointers that point to the integer values.
            Syntax ->   int* pointer_name;

    2> Array Pointer 
            The array name is the pointer to its first element. They are also known as Pointer to Arrays
            Syntax ->   data_type * pointer_name = &array_name;

    3> Structure Pointer
            The pointer pointing to the structure type so called Structure Pointer or Pointer to Structure.
            Syntax ->   struct struct_name *pointer_name;

    4> Function Pointers
            It point to the functions. They are different from simple pointer as instead of pointing to the data, they point to the code.
            Syntax ->  int (*pointer_name)(int, int);

    5> Double Pointers
            It points to the first pointer where adrres of value is stored..
            Syntax -> datatype ** pointer_name;

    6> Null Pointer
            A pointer which have no location to point. best way to intialize a pointer
            Syntax->  data_type * pointer_name =NULL;

    7> Void Pointer
            A pointer with capablity of holding any variable type and can be explicitly typecast as per need 
            NOTE -> it cann't be de referneced.
            Syntax -> void * pointer_name;

    8> Wild Pointers
            A pointer pointing to any location.
            It may result in data loss if not properly used.
            Syntax -> int * ptr;

    9> Const Pointer
            A pointer pointing to constant of specific type.
            Syntax -> const data_type * pointer_name;



            SOME MORE POINTERS ARE 

                Far pointer: Pointer (32-bit)capable of accessing memory outside the current segment.

                Dangling pointer: A pointer pointing to location that has been deleted (or freed).
                
                Huge pointer: A huge pointer is 32-bit long containing segment address and offset address.
                
                Complex pointer: Pointers with multiple levels of indirection.
                
                Near pointer: Pointer  used to store 16-bit addresses within the current segment .
                
                Normalized pointer: A 32-bit pointer, which has as much of its value in the segment register as possible.
                
                File Pointer: The pointer pointing to file data type , allow user to perform actions on file usng pointer.

*/