#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
 
    // make two processes which run the same code
    fork();
	wait(NULL); // suspends execution of the current running process 
				// until one of its children terminates
	
	fork();
	wait(NULL);
	
	pid_t pid = getpid(); // returns PID for the current running process
    printf("\nHello World. PID = %d ", pid);
	return 0;	
}
// Questions:
// How many "Hello World" printed?
// How many different pids printed?
// How many times lines 16-17 get executed?
