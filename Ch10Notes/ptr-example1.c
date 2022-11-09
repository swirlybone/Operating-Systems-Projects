// ptr-example1.c
#include <stdio.h>

int main()
{
	int *ptr_one;
	*ptr_one = 100;
	printf("The number is %d.\n", *ptr_one);
}