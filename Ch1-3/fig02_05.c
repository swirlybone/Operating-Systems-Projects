// Fig. 2.5: fig02_05.c
// Addition of two integers input from keyboard 
#include <stdio.h>

// function main begins program execution 
int main( void )
{
   int integer1; // first number to be entered by user 
   int integer2; // second number to be entered by user

   printf( "Enter first integer\n" ); // prompt a message
   scanf( "%d", &integer1 ); // read an integer from the standard input (the keyboard)
		// %d conversion specifier indicates that the data is an integer (d stands for "decimal integer").
		// the ampersand (&) is called the address operator, followed by an variable.
		// When line 12 is executed, it waits for the user to enter a value for variable integer1. 
		// The user responds by typing an integer, then pressing the Enter key to continue execution.


   printf( "Enter second integer\n" ); // prompt
   scanf( "%d", &integer2 ); // read an integer from the standard input (the keyboard)

   int sum; // variable in which sum will be stored
   sum = integer1 + integer2; // assign total to sum

   printf( "The sum is %d\n", sum ); // %d will be replaced by the value of sum
} // end function main