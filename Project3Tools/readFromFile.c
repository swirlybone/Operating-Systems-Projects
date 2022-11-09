// Read from a file
#include <stdio.h>

int main(void)
{ 
   FILE *filePtr; // filePtr = input.txt file pointer
				   // In C, a file is represented and accessed by a file pointer
				   // FILE is a structure defined in <stdio.h>

   // fopen opens file; exits program if file doesn't exixt or cannot be opened
   if ((filePtr = fopen("input.txt", "r")) == NULL) {
      puts("File could not be opened");
   } 
   else { // file opened successfully
	  int number;   // store the integer read from the input.txt

      // while not end of file
      while (!feof(filePtr)) {// The function int feof(FILE *stream) tests the 
							   // end-of-file indicator for the given data stream
         fscanf(filePtr, "%d", &number);
		 printf("%d\n", number);
      }
	  
      fclose(filePtr); // fclose closes the file   
   } 
}