#include <stdio.h>

// A normal function with an int parameter and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
 
int main()
{    
    void (*fun_ptr)(int); // declare fun_ptr is a pointer to a function 
						  // with an integer parameter
	fun_ptr = &fun;       // initialize the function pointer to &fun
 
    // Invoking fun() using the pointer fun_ptr
    (*fun_ptr)(10);

    return 0;
}
/* Question:
Why do we need an extra parentheses around function pointers like fun_ptr in line 11?
If we remove the parentheses, then the expression “void (*fun_ptr)(int)” 
becomes “void *fun_ptr(int)”






C operator precedence plays role here. operator () will take priority over operator *
*/