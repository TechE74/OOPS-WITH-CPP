// Memory Allocation in Cpp

/*
 * In C++, memory is allocated dynamically using special operators: new.
 * Allocated memory can be free using operator delete.
 * Dynamic memory allocation allows a program to request memory as needed at runtime.
 * It is useful when user don't know the required amount of memory that will be used by a segment of code.
 */

#include <iostream>

using namespace std;

int main() {
    
    // Allocating memory for a single integer
    int* p = new int;
    
    // Storing a value in the allocated memory
    *p = 42;
    
    // Printing the value
    cout << *p << endl;
    
    // Deallocating the memory
    delete p;
    
    // Allocating memory for an array of integers
    int* arr = new int[5];
    
    // Storing values in the allocated memory
    for (int i = 1; i <= 5; i++) {
        arr[i] = i * 10;
    }
    
    // Printing the values
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Deallocating the memory
    delete[] arr;
    
    return 0;
}

/* Output:
 * 42
 * 10 20 30 40 50
 */