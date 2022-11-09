// ptr-example1-fixed.c

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr_one;

	ptr_one = (int *) malloc(sizeof(int));
	// void* malloc( size_t size )
	// It allocates a chunk of memory of size bytes

	if (ptr_one == 0)
	{
		printf("ERROR: Out of memory\n");
		return 1;
	}

	*ptr_one = 25;
	printf("%d\n", *ptr_one);

	free(ptr_one);
	// void free( void* ptr ) 
	// It accepts an address returned from malloc()
	// It releases that chunk of memory

	return 0;
}