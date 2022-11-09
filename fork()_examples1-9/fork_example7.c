// fork_example7.c
// use the library function write() other than printf()
#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include  <unistd.h>
#include  <sys/wait.h>

#define   MAX_COUNT  3
#define   BUF_SIZE   100

void  main(void)
{
     pid_t  pid;
     char   buf[BUF_SIZE];
	 
	 printf("\n[PID = %d] the parent PID \n", getpid());
     fork();
     wait(NULL);	 
     pid = getpid();
     for (int i = 1; i <= MAX_COUNT; i++) {
        sprintf(buf, "This line is from process with pid %d, value = %d\n", pid, i);
		write(1, buf, strlen(buf));   // call the un-buffered function write() 
     }	 
}