#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void ChildProcess(int);
void ParentProcess(int);

int main() 
{
	int retValue = fork();
	wait(NULL);
	
    if (retValue ==0) // child process because return value is zero
        ChildProcess(retValue); 
    else              // parent process because return value is positive
        ParentProcess(retValue);
}

void ChildProcess(int i){
	printf("child pid = %d  \n", getpid());
	printf("print parent pid = %d in child process\n", getppid());
}

void ParentProcess(int i){
	printf("parent pid = %d  \n", getpid());	
	printf("print child pid = %d in parent process \n", i);	
}
