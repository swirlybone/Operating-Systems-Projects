// Solution to Weeksheet #6
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>  // system call fork() defined in this header file
#include <sys/wait.h>

void ChildProcess(int);
void ParentProcess(int);

int main() 
{
	int retValue = fork();
	wait(NULL);
	
    if (retValue ==0) // child process because return value is zero
        ChildProcess(retValue); 
    else      // parent process because return value is positive
        ParentProcess(retValue);
}

void ChildProcess(int i){
	pid_t pid = getpid();
	printf("child pid = %d  \n", pid);
	
	//if(pid < 7) return;
	for(int i=7; i<= pid; i=i+7)
		printf("%d ", i);
	printf("\nEnd of child process\n\n");
}

void ParentProcess(int i){	
	pid_t pid = getpid();
	printf("parent pid = %d  \n", pid);	
	
	for(int j=2; j<= pid; j=j+2)
		printf("%d ", j);
	printf("\nEnd of parent process\n");
}
