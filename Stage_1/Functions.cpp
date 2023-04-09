/*
    LETS UNDERSTAND THE CONCEPT OF FUNCTIONS IN CPP ().

    functions <- A function is a set of statements that take inputs, do some specific computation, and produce output.

    FUNCTION SYNTAX
    
    return_type function_name(parameter_type parameter_name , parameter_type2 parameter_name2){
        STATEMENTS...;
    };


    Why Do We Need Functions?
    
    # Functions help us in reducing code redundancy.
    # It prevent us from writing the same code, again and again, by simply create a function and call it everywhere.
    # It result in easy maintainance in future sucha that we only have to update in a single function . 
    # Function gives modularity and break down program complexity into modules for easy understanding. 


    TYPES OF FUNCTION

    1> USER DEFINE FUNCTION ( Defined blocks of code specially customized to satisfy the condition in which the user is facing issues).

    2> LIBRARY FUNCTION (“builtin Functions“) ( Part of a compiler package consists of functionwhich can directly be accesed without defining them .

    WAYS OF PASSING PARAMETER TO FUNCTION

    Two most popular ways to pass parameters:

    Pass by Value: 
    In this parameter passing method, values of actual parameters are copied to the function’s formal parameters. So any changes made inside functions are not reflected in the actual parameters of the caller. 
 
    Pass by Reference: 
    Both actual and formal parameters refer to the same locations, so any changes made inside the function are actually reflected in the actual parameters of the caller.
*/

#include<bits/stdc++.h>

using namespace std;

//RECURSIVE means reoccur, a recursive function is a function that call itlself until base condition gets fulfilled
 
// recursive function to find factorial of number.
int fact(int n)
{
if (n < = 1) // base case
    return 1;
else    
    return n*fact(n-1);    // imputed case
}


//Simple max function that return greater of two inputs
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(){
    int a =6;
    int b =8;

    cout<<"Max is "<<max(a,b)<<endl;

    cout<< "Factorial of 9 :"<<fact(9)<<endl;

    
}