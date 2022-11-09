#include <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include  <unistd.h>
#include  <sys/wait.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	int pid, pid1, pid2;
	int num;
	int num2;
	
	pid = fork();
	pid_t returnVal = fork();
    if (returnVal == 0){ // the first child process
			pid_t returnVal2 = fork();
			if (returnVal2 == 0){
				printf("\nChild Process [1] PID=%d \n", getpid());
				//printf("\n root parent process PID=%d (the original process)\n", getpid());
				//soft = soft + 1;
				//printf("\n child process 1 returns %d ", soft);
				
			//prints the average of array
			int array[9] = {10, 20, 30, 40, 50, 60, 74, 89, 63};
			int sum, loop;
			float avg;
			sum = avg = 0;
			for(loop = 0; loop < 10; loop++) {
			sum = sum + array[loop];
			}
			avg = (float)sum / loop;
			printf("\nAverage of array values is %.2f\n", avg);   
			//prints the average of the array
   
   return 0;
			
				//pid_t process_id;
				//pid_t p_process_id;
				
				//process_id = getpid();
				//p_process_id = getppid();
				//printf("The process id: %d\n",process_id);
				//printf("The process id of parent function: %d\n",p_process_id);
				
			}
			else{
				wait(NULL);
				printf("\nChild Process [2] PID=%d \n", getpid());
				//hard = hard + 2;
				//printf("\n child process 2 returns ", hard);
				
				//time_t secondsFromEpoch = time(NULL);
				//srand(secondsFromEpoch);
				
				  FILE *filePtr; // filePtr = output.txt file pointer   

			   // fopen() opens the file or creates the file if it does not exist
			   if ((filePtr = fopen("output.txt", "w")) == NULL) {
				   puts("File could not be opened");
			   } 
			   else {  // File created or open successfully
				time_t t;
				int i, w;
				w = 10;
				srand((unsigned) time(&t));
				for( i = 0 ; i < w ; i++ ) {
					//printf("%d\n", 1000 + rand() % (2000 - 1000 + 1) + 0);
					fprintf(filePtr, "%d\n", 1000 + rand() % (2000 - 1000 + 1) + 0);
					}
			   } 
			   fclose(filePtr); // fclose() closes the file
				
				
				
			}
	
    }
    else{ // the root parent process
            wait(NULL);
			pid_t returnVal2 = fork();
			if (returnVal2 == 0){
				printf("\nChild Process [3] PID=%d \n", getpid());
				//sord = sord + 3;
				//printf("\n child process 3 returns ", sord);
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
				
						 int f = 0;
						 double favg = 0;
						 double fcounter = 0;
						 double fsum = 0;
						 
						 while(fscanf(filePtr, "%d", &f) != EOF)
						 {
							 fsum += f;
							 favg = fsum/99;

						 }
						 printf("\nAverage number from file is %.2f\n", favg);
						  
					  }
					  
					  fclose(filePtr); // fclose closes the file   
				   } 
			}
			else{
				wait(NULL);
				
				printf("\n[Root Parent] Process PID=%d (the original process)\n", getpid());
				
				//random number set up
				srand((unsigned)time(NULL));
				num = 200 + rand() % (2000 - 200 + 1) + 1; 

				printf("\nRandom Integer is: %d\n", num);
				
				int i;
				//printf("Enter a positive integer: ");
				//scanf("%d", &num);
				printf("\nFactors of %d are: \n", num);
				for (i = 2; i <= num; ++i) {
					if (num % i == 0) {
						printf("%d ", i);
					}
				}
			}
    }
    return 0;
}