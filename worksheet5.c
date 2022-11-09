//worksheet #5
//fix the problems in this program
//fig10_02_changed.c

#include <stdio.h>
#include <stdlib.h>
//card structure definition
struct card{
char *face; //define pointer face
char *suits; //define pointer suits
};

int main(void)
{
	//declare a pointer to struct card 
	struct card * cardPtr;
	
	printf("%s%s%s\n%s%s%s\n", (*cardPtr).face, " of ", (*cardPtr).suits);
}