v#include <stdio.h>
#include <stdlib.h>    // where exit() is defined
#include <sys/types.h> // where type pid_t is defined
#include <unistd.h>    // where system call fork() is defined
#include <sys/wait.h>

int main() 
{
	int retValue = fork(); // return two values if the call is successful
						   // 0 is returned to the child process
						   // a positive value is returned to the parent process
	
    if (retValue ==0){ 	// code executed by the child process 
						// because return value is zero
		pid_t pid = getpid();
        printf("\nHello from Child! child pid = %d  \n", pid); 
		printf("\nHello from Child! returnValue = %d  \n", retValue);
	}
    else if (retValue > 0){ // code executed by the parent process 
							// because return value is positive
		wait(NULL);  // let the child process finish first
		pid_t pid = getpid();
        printf("\nHello from Parent! parent pid = %d  \n", pid);	
		printf("\nHello from Parent! returnValue = %d  \n", retValue);	
	}
	else {
		printf("System call fork() failed.\n");
		exit(1);
	}
}
// Question: 
// How to let the parent or child process perform certain specific task?