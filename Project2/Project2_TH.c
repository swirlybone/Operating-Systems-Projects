#include <stdio.h>
#include <stdlib.h>

typedef struct HealthProfile{
	//char name[50];
	char fname[25]; //patient’s name (e.g, “John Smith”)
	char lname[25]; //patient’s name (e.g, “John Smith”)
	char ID[50]; //patient’s ID (e.g., 10001)
	char gender[1]; //gender (a letter ‘M’ or ‘F’)
	char month[3]; //month of birth (1~12)
	char day[3]; //day of birth (1~31)
	char year[5]; //year of birth (1900~2020)
} PROFILE;

void patientName (void);
void patientID (void);
void patientGender(void);
void patientBirth(void);

//void ID_func(char ID)
//void gender_func(char gender)
//void birth_func(char month, char day, char year)

void wrapper(void (*function)())
{
    function(); // execution of the function
}
//void name(char fname)
//{
	//PROFILE *ptr_one;
	//puts("Enter patient's name");
	//gets((*ptr_one).fname);
//}
void patientName(void){
	PROFILE *ptr_one;
	ptr_one = (PROFILE *) malloc (sizeof(PROFILE));
	puts("Enter patient's first name"); //puts & gets functions
	gets((*ptr_one).fname);
	puts("Enter patient's last name");
	gets((*ptr_one).lname);
	printf("Patient's name is %s %s\n", (*ptr_one).fname,(*ptr_one).lname);
}
void patientID(void){
	PROFILE *ptr_one;
	ptr_one = (PROFILE *) malloc (sizeof(PROFILE));
	puts("Enter patient's ID number"); //puts & gets functions
	gets((*ptr_one).ID);
	printf("Patient's ID is %s\n", (*ptr_one).ID);
}
void patientGender(void){
	PROFILE *ptr_one;
	ptr_one = (PROFILE *) malloc (sizeof(PROFILE));
	puts("Enter patient's gender"); //puts & gets functions
	gets((*ptr_one).gender);
	printf("Patient's gender is %s\n", (*ptr_one).gender);
}
void patientBirth(void){
	PROFILE *ptr_one;
	ptr_one = (PROFILE *) malloc (sizeof(PROFILE));
	puts("Enter patient's month of birth (e.9 1~12)"); //puts & gets functions
	gets((*ptr_one).month);
	puts("Enter patient's day of birth (e.g 1~31) ");
	gets((*ptr_one).day);
	puts("Enter patient's year of birth (e.g 2020)");
	gets((*ptr_one).year);
	printf("Patient's Date of Birth is %s/%s/%s\n",(*ptr_one).month,(*ptr_one).day, (*ptr_one).year);
}



int main(void){
	PROFILE *ptr_one;
	PROFILE *ptr_two;
	ptr_one = (PROFILE *) malloc (sizeof(PROFILE));
	
	//void (name)(char);
	//ptr_one = &name;
	
	//void patientName(char);
	wrapper(patientName);
	wrapper(patientID);
	wrapper(patientGender);
	wrapper(patientBirth);
	//puts("Enter patient's first name"); //puts & gets functions
	//gets((*ptr_one).fname);
	//puts("Enter patient's last name");
	//gets((*ptr_one).lname);
	//(*ptr_one).fname = 'John';
	//(*ptr_one).lname = 'Smith';
	//printf("Enter patient's ID");
	//scanf("%d", (*ptr_one).ID);
	//puts("Enter patient's ID number");
	//gets((*ptr_one).ID);
	//(*ptr_one).ID = 1045;
	//puts("Enter patient's ID");
	//gets((*ptr_one).ID);
	//puts("Enter patient's gender");
	//gets((*ptr_two).gender);
	//puts("Enter patient's Month of Birth (ex: 1~12)");
	//gets((*ptr_one).month);
	//puts("Enter patient's Day of Birth (ex: 1~31)");
	//gets((*ptr_one).day);
	//puts("Enter patient's Year of Birth (ex: 2019)");
	//gets((*ptr_one).year);
	//(*ptr_one).gender = 'M';
	//(*ptr_one).month =  12;
	//(*ptr_one).day = 25;
	//(*ptr_one).year = 1998;
	
	printf("Patient's name is %s %s\n", (*ptr_one).fname,(*ptr_one).lname);
	//printf("Name is: %s\n", (*ptr_one).fname);
	printf("Patient's ID is %s\n", (*ptr_one).ID);
	printf("Patient's gender is %s\n", (*ptr_one).gender);
	printf("Patient's Date of Birth is %s/%s/%s\n",(*ptr_one).month,(*ptr_one).day, (*ptr_one).year);
	//printf("Month of birth is: %d\n", (*ptr_one).month);
	//printf("Day of birth is: %d\n", (*ptr_one).day);
	//printf("Year of birth is: %d\n", (*ptr_one).year);
	
	//free(ptr_one);
	
	return 0;
}

