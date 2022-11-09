// fork_example8.c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 
#include <sys/types.h>
#include <sys/wait.h>

//for loops are bad for multiple process
//it just increases i by 1 and restarts and stops at 1.
int main () {
    for(int i=0; i<=1; i++) {
        pid_t returnVal = fork();
        if (returnVal == 0){
            printf("child process PID =%d, i = %d \n", getpid(), i);
        }
        else{
            wait(NULL);
			printf("parent process PID =%d, i = %d \n", getpid(), i);
        }
    }
    return 0;
}
// Questions:
// How many lines are printed in the output? 
// How many processes are running totally?
// How many the for-loop is executed?