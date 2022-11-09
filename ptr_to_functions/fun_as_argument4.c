// A C program shows how to pass function pointers as parameter
#include <stdio.h>
 
// Two simple functions
void function1() { printf("function1 called\n"); }
void function2() { printf("function2 called\n"); }
 
// A function that receives a simple function as parameter and calls the function
void wrapper(void (*function)())
{
    function(); // execution of the function
}
 
int main()
{
    wrapper(function1);
    wrapper(function2);
    return 0;
}