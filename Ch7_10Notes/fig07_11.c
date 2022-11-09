// Fig. 7.11: fig07_11.c
// Printing a string one character at a time using
// a non-constant pointer to constant data.

#include <stdio.h>

void printCharacters(const char *sPtr);
// declares parameter sPtr to be of type const char *

int main(void)
{
   // initialize char array
   char string[] = "print characters of a string"; 

   puts("The string is:");
   printCharacters(string);
   puts("");
} 

// sPtr cannot be used to modify the character to which it points
void printCharacters(const char *sPtr)
{
   // loop through entire string                            
   for (; *sPtr != '\0'; ++sPtr) { // no initialization   
      // The function uses a for statement to output each character in the string 
	  // until the null character is encountered
	  // After each character is printed, pointer sPtr is incremented to point to
	  // the next character in the string.
      printf("%c", *sPtr);   
	  // cannot assign new value to *sPtr
   }                                              
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
