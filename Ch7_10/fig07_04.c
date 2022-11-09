// Fig. 7.4: fig07_04.c
// Using the & and * pointer operators.
#include <stdio.h>

int main(void)
{
   int a = 7;
   int *aPtr = &a; // declare aPtr as a pointer and set aPtr to the address of a

   printf("The address of a is %p"
          "\nThe value of aPtr is %p", &a, aPtr);
   // The conversion specifier %p outputs the memory location as a hexadecimal integer
   // Notice that the address of a and the value of aPtr are identical in the output

   printf("\n\nThe value of a is %d"   
          "\nThe value of *aPtr is %d", a, *aPtr);
   // Using * in this manner is dereferencing a pointer. 

   printf("\n\nShowing that * and & are complements of "
          "each other\n&*aPtr = %p"   
          "\n*&aPtr = %p\n", &*aPtr, *&aPtr);
   // The & and * operators are complements of one another. When they’re both
   // applied consecutively to aPtr in either order, the same result is printed. 
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
