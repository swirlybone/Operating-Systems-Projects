// A thread synchronization example for two threads
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>

pthread_t tid[2];      // number of new threads to be created
int counter = 0;	    // represents a newly created thread
int sharedVar = 100;   // shared variable by all the threads
pthread_mutex_t lock; // declare an object of type pthread_mutex_t 
					    // use this variable to lock/unlock the mutex

// The following function will be invoked when a new thread is created
void* doSomeThing(void *arg)
{
    printf("A new thread with ID = %d is about to enter its CR\n", tid[counter++]);	
    pthread_mutex_lock(&lock); // The mutex object referenced by lock will 
							     // be locked by calling pthread_mutex_lock()

    sharedVar += 50;	// access the shared variable	
    printf("Value of the shared variable = %d.\n", sharedVar);
    sleep(5);

    pthread_mutex_unlock(&lock); // release the mutex object 
								   // referenced by lock
}

int main(void)
{
	printf("Value of the shared variable = %d.\n", sharedVar);
	
    if (pthread_mutex_init(&lock, NULL) != 0)// create the mutex before use
    {
        printf("mutex initialization failed\n");
        return 1;
    }

	int i = 0;
    while(i < 2)
    {
        int err = pthread_create(&(tid[i]), NULL, &doSomeThing, NULL);
        if (err != 0)
            printf("cannot create thread :[%s]\n", strerror(err));
		pthread_join(tid[i], NULL);
		
        i++;
		puts("\n");
    }
	
    pthread_mutex_destroy(&lock); // destroy the mutex after use
	
    return 0;
}
// library functions needed for this example
// https://linux.die.net/man/3/pthread_mutex_init
// https://linux.die.net/man/3/pthread_mutex_lock
// http://man7.org/linux/man-pages/man3/pthread_join.3.html
