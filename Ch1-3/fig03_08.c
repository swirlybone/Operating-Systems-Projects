// Fig. 3.8: fig03_08.c
// Class average program with while loop and sentinel-controlled iteration
// Learn how to format floating-point numbers
#include <stdio.h>

// function main begins program execution
int main( void )
{
   unsigned int counter; // number of grades entered
   int grade; // grade value
   int total; // sum of grades

   float average; // number with decimal point for average
   
   // initialization phase
   total = 0; // initialize total
   counter = 0; // initialize loop counter
   
   // processing phase
   // get first grade from user
   printf( "%s", "Enter grade, -1 to end: " ); // prompt for input
   scanf( "%d", &grade ); // read grade from user
   
   // loop while sentinel value not yet read from user
   while ( grade != -1 ) {
      total = total + grade; // add grade to total
      counter = counter + 1; // increment counter
      
      // get next grade from user
      printf( "%s", "Enter grade, -1 to end: " ); // prompt for input
      scanf("%d", &grade); // read next grade                  
   } // end while

   // termination phase
   // if user entered at least one grade
   if ( counter != 0 ) {
      // calculate average of all grades entered
      average = ( float ) total / counter; // avoid truncation

      // "%.2f" means 2 digits of precision (display 2 digits to the right of the decimal point)
	  // the f in "%.2f" specifies that a floating-point value will be printed
      printf( "Class average is %.2f\n", average );
   } // end if   
   else { // if no grades were entered, output message
      puts( "No grades were entered" );
   } // end else
} // end function main
