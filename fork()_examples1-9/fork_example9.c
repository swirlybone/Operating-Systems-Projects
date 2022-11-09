// fork()_example9.c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 
#include <sys/types.h>
#include <sys/wait.h>
//follow this examples for project 3
//four functions needed for project 3
int main ()
{
    pid_t returnVal = fork();
    if (returnVal == 0){ // the first child process
			pid_t returnVal2 = fork();
			if (returnVal2 == 0){
				printf("\n 1st child process PID=%d \n", getpid());
			}
			else{
				wait(NULL);
				printf("\n 2nd child process PID=%d \n", getpid());
			}
    }
    else{ // the root parent process
            wait(NULL);
			pid_t returnVal2 = fork();
			if (returnVal2 == 0){
				printf("\n 3rd child process PID=%d \n", getpid());
			}
			else{
				wait(NULL);
				printf("\n root parent process PID=%d (the original process)\n", getpid());
			}
    }

    return 0;
}