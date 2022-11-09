// Fig. 10.2: fig10_02.c
// Structure member operator and 
// structure pointer operator
#include <stdio.h>

// card structure definition
// globally defined, can be used by any functions in this program          
struct card {                           
   char *face;  // define pointer face   
   char *suits; // define pointer suits   
}; 

int 

int main(void)
{ 
   struct card aCard; // define a variable of struct card   

   // initialize the variable
   aCard.face = "Ace";   
   aCard.suits = "Spades";

   struct card *cardPtr = &aCard; // define a pointer to struct card   
								   // assign address of aCard to cardPtr

   printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suits,
      cardPtr->face, " of ", cardPtr->suits,                           
      (*cardPtr).face, " of ", (*cardPtr).suits);  
   // the structure member operator (.), also called the dot operator
   // the structure pointer operator (->), also called the arrow operator	  
}