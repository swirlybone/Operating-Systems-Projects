// Fig. 3.13: fig03_13.c
// Preincrementing and postincrementing 
#include <stdio.h>

// function main begins program execution 
int main( void )
{
   int c; // define variable 
   
   // demonstrate postincrement 
   c = 5; // assign 5 to c 
   printf( "%d\n", c ); // print 5 
   printf( "%d\n", c++ ); // print ???
   printf( "%d\n\n", c ); // print ???                                   
   
   // demonstrate preincrement 
   c = 5; // assign 5 to c 
   printf( "%d\n", c ); // print 5 
   printf( "%d\n", ++c ); // print ???
   printf( "%d\n", c ); // print ???                                    
} // end function main