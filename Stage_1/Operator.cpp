// THIS PROGRAM IS FOR ILLUSTRATING THE CONCEPT OF OPERATORS AND EXPRESSION

#include<bits/stdc++.h>

using namespace std;

int main(){
    //  Operators are symbols that represent operations to be performed on one or more operands.

    // Arithmetic Operators: Arithmetic operators are used to perform basic mathematical operations such as addition, subtraction, multiplication, and division. The following are the arithmetic operators in C:

    //  Binary operator                                                         Unary operator

    // + (addition)                                                               ++x(pre increment)
    // – (subtraction)                                                            x++(post increment)      
    // * (multiplication)                                                         --x(pre decrement)  
    // / (division)                                                               x--(post decrement)      
    // % (modulo – remainder after division)  

    int a=4, b=6;

    cout<<"Outputs for binary operators are :"<<endl;
    cout<<"Addition is :"<<a+b<<endl;
    cout<<"Subtraction is :"<<a-b<<endl;
    cout<<"Product is :"<<a*b<<endl;
    cout<<"Devision is :"<<a/b<<endl;
    cout<<"Remainder is :"<<a%b<<endl;


    int x=1; // variable initialize with value 1

    cout<<"Value of x++ : "<<x++<<endl;  // 1
    cout<<"Value of ++x : "<<++x<<endl;  // 3
    cout<<"Value of x-- : "<<x--<<endl;  // 3 
    cout<<"Value of --x : "<<--x<<endl;  // 1

    //Logical Operator

    // && (AND) -> return true if both condition satisfy
    // || (OR)  -> return true if any one condition is satisfy
    // !  (NOT) -> return true if false

    int n1=4,n2=4;

    cout<< (n1>2 && n2>2)<<endl; // true(1) both satisfy
    cout<< (n1>3 || n2>7)<<endl; // true(1) one satisfy
    cout<< !(n1==4)<<endl;      // false(0)  


    //bitwise operator

    // &(AND) 
    // |(OR) 
    // >>(RIGHT SHIFT)
    // <<(LEFT SHIFT)
    // `(COMPLEMENT)
    // ^(XOR)

    a = 10, b = 4;   // a = 10(00001010), b = 9(00001001)
    cout << (a ^ b);   //  00010010
    cout <<(~a);       // 11110101


    // ASSIGNMENT OPERATOR
    
    // = (assign value)
    // += (work as a=a+b) 
    // -= (work as a=a-b)
    // *= (work as a=a*b)
    // %= (work as a=a%b)
    // /= (work as a=a/b)


    // Ternary operator

    cin>>x;

    x%2!=0 ? cout<<"odd":cout<<"even";
}