#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>

pthread_t tid[3];      // number of new threads to be created
int counter = 0;	    // represents a newly created thread
int A[100];
int sharedArr[100];   // shared variable by all the threads
pthread_mutex_t lock; // declare an object of type pthread_mutex_t 
					    // use this variable to lock/unlock the mutex

// The following function will be invoked when a new thread is created
//int* Get_Fibonacci(int *n)
void* Get_Fibonacci(void *arg)
{
	int first = 0, second = 1, next, c;
  int rn;
  int fib;
  int i;
  int q;
  int t;
  int r;

  //printf("Enter the number of terms\n");
  //scanf("%d", &n);
  srand(time(0));
  r = rand() % (50000 - 1 + 1) + 0;

  printf("The first random number is  %d. ", r);

  for (c = 0; c < r; c++)
  {
    if (c <= 1)
	next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    
	A[i] = next;
	
  }
  
  rn = rand()%(10000 - 2 + 1) +0;
  
    for (i = 1; i < 100; ++i) {
		//rn = rand()%(2000 - 2 + 1) +0;
        if (A[0] < A[i] && A[0] < rn)
            A[0] = A[i];
    }
	fib = A[0];
	printf("The first Fibonocci number is %d. ", fib);
	sharedArr[100] = fib;
	
    printf("It is written to the shared array by the thread with ID = %d\n", tid[counter++]);	
    pthread_mutex_lock(&lock); // The mutex object referenced by lock will 
							     // be locked by calling pthread_mutex_lock()

    //sharedVar += 1;	// access the shared variable		
    //printf("The value of the shared variable is %d.\n", sharedArr[100]);
    sleep(5);
	sharedArr[100] = fib;
    pthread_mutex_unlock(&lock); // release the mutex object 
								   // referenced by lock
								   
}

int main(void){
	//Get_Fibonacci(int n){
		//int fib1 = 0, fib2 = 1, fib3, num, count = 0;
		//srand(909402609);
		//num = rand();
		//fib1 = 1;
		//fib2 = 
	//}
		//printf("Value of the shared variable = %d.\n", sharedArr[100]);
	
    if (pthread_mutex_init(&lock, NULL) != 0)// create the mutex before use
    {
        printf("Mutex initialization has failed\n");
        return 1;
    }

	int i = 0;
    while(i < 3)
    {
        int err = pthread_create(&(tid[i]), NULL, &Get_Fibonacci, NULL);
        if (err != 0)
            printf("cannot create thread :[%s]\n", strerror(err));
		pthread_join(tid[i], NULL);
		
        i++;
		puts("\n");
    }
	
    pthread_mutex_destroy(&lock); // destroy the mutex after use
	
    return 0;
}