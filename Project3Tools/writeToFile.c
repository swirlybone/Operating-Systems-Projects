// Write data to a file
#include <stdio.h>

int main(void)
{ 
   FILE *filePtr; // filePtr = output.txt file pointer   

   // fopen() opens the file or creates the file if it does not exist
   if ((filePtr = fopen("output.txt", "w")) == NULL) {
       puts("File could not be opened");
   } 
   else {  // File created or open successfully     
       fprintf(filePtr, "%s 's age is %d\n", "Smith", 20);
   } 
   fclose(filePtr); // fclose() closes the file
} 