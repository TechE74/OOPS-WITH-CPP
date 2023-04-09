// THIS PROGRAM IS USED FOR UNDERSTANDING THE CONCEPT OF CONTROL FLOW STATEMENT


/*
    looping statements are used for prevent multiple line printing or ilterating a particular opertaion for multiple times ..

    it can be done by various ways, cpp provide multiple ilterating syntax for operation (for, while, do while); 

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    // USING FOR LOOP
                /*
                SYNTAX                 
                for (intializer, condition, increment/decrement){
                    statements;
                    conditions(break);
                }
                */
    for(int i=0;i<n;i++){
        cout<<"Hello , My Friend"<<endl;
    }


    //While loop


    /*
    Syntax 

    while(condition){
        statement;
        increment/decrement; 
    }
    */

    int n=10;
    while(n>=0){
        cout<<"Print Statement"<<endl;
        n--;
    }


    /*
    syntax


    do{
        statement ;
        increment/decrement;

    }while(condition) 
    */

    n=10;
    do{
        cout<<"Print New Statement."<<endl;
        n--;
    }while(n)


    /*
        we have some ilterating handling function to control the flow of statement (break, continue)

        BREAK -> it will aloow the user to break the ilterating statemnton a given condition 
        CONTINUE -> it will alow user to skip on a particular operation.  
    */

}