// Use of an array of function pointers

#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}

void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}

void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}
 
int main()
{
    // fun_ptr_arr is an array of function pointers
	// every function in the array should take two integer parameters
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int choice, a = 15, b = 10;
 
    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
            "for multiply\n");
    scanf("%d", &choice);
 
    if (choice > 2) return 0;
 
    (*fun_ptr_arr[choice])(a, b);
 
    return 0;
}