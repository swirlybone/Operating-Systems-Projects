#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
   //char str[10];
   int c;
   int r;
   int i, n;
   time_t t;
   //typedef int bool;
   //#define true 1
   //#define false 0
   int checker;
   int choice;
   int looper;
   
   n = 1;
   checker = 0;
   srand((unsigned) time (&t));
   while(checker != 1){
	   for( i = 0; i < n ; i++){
	   r = rand() % (30 - 10) + 1;
	   if(r <= 10){
		   r = r + 10;
	   }
	   //printf("%d\n", r);
	   //printf("%d\n", rand() % (30 + 1 - 10) + 10);
	   //set range formula: rand()%(max_num + 1 - min_num) + min num
	   //alt rand()% (30 + 10 - 10));
	   //printf("%d\n", rand() % 50);
   }
   printf("Guess the number.\n");
   printf("Enter a value :");
   scanf("%d", &c);
   
   if(c == r){
	   printf("Excellent! You guessed the number correctly!");
	   printf("Would you like to try again?\n");
	   printf("1 to try again, 0 to quit.");
	   scanf("%d", &choice);
	   if(choice == 1){
	   checker = 0;
	   for( i = 0; i < n ; i++){
	   r = rand() % (30 - 10) + 1;
	   if(r <= 10){
		   r = r + 10;
	   }
	   }
	   printf("Guess the number.\n");
	   printf("Enter a value :");
	   scanf("%d", &c);
	   }
	   if(choice == 0){
		   checker == 1;
	   }
   }
   
   else if(c > r){
	   printf("Too high (wrong guess). Try again.\n");
	   looper = 0;
	   while(looper == 0){
		   printf(" Guess the number.\n");
		   printf("Enter a value :");
		   scanf("%d", &c);
		   if(c == r){
			   printf("Excellent! You guessed the number correctly!");
			   printf("Would you like to try again?\n");
			   printf("1 to try again, 0 to quit.\n");
			   scanf("%d", &choice);
			   looper = 1;
		   }
		   if(c > r){
			   printf("Too high (wrong guess). Try again.");
		   }
		   if(c < r){
			   printf("Too low (wrong guess). Try again.");
		   }
	   }
	   
   }
   else if(c < r){
	   printf("Too low (wrong guess). Try again.");
	   looper = 0;
	   while(looper == 0){
		     printf(" Guess the number.\n");
		   printf("Enter a value :");
		   scanf("%d", &c);
		   if(c == r){
			   printf("Excellent! You guessed the number correctly!\n");
			   printf(" Would you like to try again?\n");
			   printf(" 1 to try again, 0 to quit.\n");
			   scanf("%d", &choice);
			   looper = 1;
		   }
		   if(c > r){
			   printf("Too high (wrong guess). Try again.\n");
		   }
		   if(c < r){
			   printf("Too low (wrong guess). Try again.\n");
		   }
   }
   }
   //printf( "\nYou entered: %d ", c);
   return 0;
   }
}