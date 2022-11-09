#include <stdio.h>
// a function name represents the address of the function

void fun(int a)
{
    printf("Value of a is %d\n", a);
}
 
int main()
{ 
    void (*fun_ptr)(int);  
	fun_ptr = fun;     // & can be removed
 
    fun_ptr(10);       // * can also be removed
 
    return 0;
}