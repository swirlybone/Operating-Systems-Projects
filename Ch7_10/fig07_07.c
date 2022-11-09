// Fig. 7.7: fig07_07.c
// Cube a variable using pass-by-reference with a pointer argument.

#include <stdio.h>

void cubeByReference(int *nPtr); // function prototype
// When passing an argument by reference, the parameter must be a pointer in the function definition
// to modify the value at that memory location

int main(void)
{
   int number = 5; // initialize number

   printf("The original value of number is %d", number);
 
   // pass address of number to cubeByReference
   // When calling a function by reference, the address of a variable is passed. 
   cubeByReference(&number);

   printf("\nThe new value of number is %d\n", number);
} 

// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)                              
{                                                              
   *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr 
   // The function dereferences the pointer and cubes the value to which nPtr points, 
   // then assigns the result back to *nPtr
}
                         



/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

