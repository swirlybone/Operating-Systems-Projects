#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#define MAX_SIZE 100

void * print_string_in_reverse_order(void * str)
{
	//project4:
	//this function accepts a string as an argument
	//it prints the string in reverse order
	
	char Str[100], RevStr[100];
	int i, j, len;
	printf("\nEnter a string to be reversed:\n");
	gets(Str);
  	
	j = 0;
	len = strlen(Str);
 
	for (i = len - 1; i >= 0; i--)
	{
	RevStr[j++] = Str[i];
	}
	RevStr[i] = '\0';
 
	printf("\nThe string after reversing = %s\n", RevStr);
	
	pthread_exit(NULL);
}

void * print_string_in_lower_case(void *str)
{
	//prints in lower case letters
	char string[100];
	printf("Enter a string to convert to a lower case:\n");
	gets(string);
		
	printf("The string in lower case: %s\n", strlwr(string));
		
	
	
	pthread_exit(NULL); // exit the thread
}

int main(int argc, char *argv[])
{
	/* The main program creates a new thread and then exits. */
	pthread_t threadID, threadID2;
	int status, i = 10;	
	
	printf("In function main(). Creating a new thread\n");
	// create a new thread in the calling process
	status = pthread_create(&threadID, NULL, print_string_in_reverse_order, (void *)&i);
	// a function name represents the address of the function
	printf("ID of the first thread is %d\n", threadID);
		
	if (status != 0) {
		printf("Oops. pthread create returned error code %d\n", status);
		exit(-1);
	} 
	printf("\n");
	
	
	status = pthread_create(&threadID2, NULL, print_string_in_lower_case, (void *)&i);
	// a function name represents the address of the function
	printf("ID of the second thread is %d\n", threadID2);
		
	if (status != 0) {
		printf("Oops. pthread create returned error code %d\n", status);
		exit(-1);
	} else{
		char string[100];
		gets(string);
	}
	printf("\n");
	
	exit(0);
}