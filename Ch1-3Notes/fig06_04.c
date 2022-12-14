// Fig. 6.4: fig06_04.c
// Initializing the elements of an array with an initializer list.
#include <stdio.h>

// function main begins program execution
int main(void)
{
   // use initializer list to initialize array n           
   int n[5] = {32, 27, 64, 18, 95};
   
   printf("%s%13s\n", "Element", "Value");
   
   // output contents of array in tabular format
   for (size_t i = 0; i < 5; ++i) {
	  // type size_t represents an unsigned integral type
      // This type is used for any variable that represents an array’s size or indices
      // size_t is defined in the header <stddef.h>, which is also included in <stdio.h>
      printf("%7u%13d\n", i, n[i]);
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
