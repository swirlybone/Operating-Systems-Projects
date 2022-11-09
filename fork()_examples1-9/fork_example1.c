#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
 
    // make two process which run same
    // program after this instruction
    fork();	
	wait(NULL); // wait for the child process to finish
 
    pid_t pid = getpid(); // returns PID for the current running process
    printf("\nHello World. PID = %d ", pid);
	return 0;	
}
// Question:
// How many "Hello World" printed?
// Which one is the parent PID? Which one is the child PID?