// ptr-example2.c
#include <stdio.h>

int main()
{
	char *ptr_two;
	
	*ptr_two = "A constant string in C";
	printf("%s\n", *ptr_two);
}