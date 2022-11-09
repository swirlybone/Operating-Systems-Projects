// Fig. 4.6: fig04_06.c
// Calculating compound interest
#include <stdio.h>
#include <math.h>  

int main(void)
{
   double principal = 1000.0; // starting principal
   double rate = .05; // annual interest rate

   // output table column heads
   // 1st column with length of 4 characters, 2nd column with length of 21 characters
   printf("%4s%21s\n", "Year", "Amount on deposit");

   // calculate amount on deposit for each of ten years
   for (unsigned int year = 1; year <= 10; ++year) {

      // calculate new amount for specified year
	  // pow(x, y) calculates the value of x raised to the y-th power.
	  // Function pow requires two double arguments, but variable year is an integer.
      // <math.h> includes information that tells the compiler to convert the value of year 
	  // to a double representation before calling the function.
      double amount = principal * pow(1.0 + rate, year);	  

      // output one table row
      printf("%4u%21.2f\n", year, amount);   
	  // The conversion specifier %21.2f is used to print the value of the variable amount.
	  // The 21 denotes the field width in which the value will be printed.
      // A field width of 21 specifies that the value printed will appear in 21 print positions.
      // The 2 specifies the precision (i.e., the number of decimal positions).
	  // If # of characters less than the field width, the value will be right justified by default
      // The "-" sign may be used to left justify integers (such as in %-6d)
   }// for
}// main



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