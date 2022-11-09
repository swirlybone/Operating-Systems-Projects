// Fig. 7.6: fig07_06.c
// Cube a variable using pass-by-value.
#include <stdio.h>

int cubeByValue(int n); // prototype

int main(void)
{
   int number = 5; // initialize number
   
   printf("The original value of number is %d", number);
   
   // pass number by value to the function cubeByValue
   int cube = cubeByValue(number);
   // In the function call, a copy of the variable number is made and 
   // only this copy of the variable number is used during the function execution
   // the original version of the variable number is intact

   printf("\nThe new value of number is %d\n", number);
   printf("\nThe cube of number is %d\n", cube);
} 

// calculate and return cube of integer argument                 
int cubeByValue(int n)                                            
{                                                                   
   return n * n * n; // cube local variable n and return result
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