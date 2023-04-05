#include<stdio.h>
/*
 Structure is a USER DEFINED DATA TYPE (UDT).
 Structure is a collection of corelated members.

// Structure Declaration 
Syntax:
       struct identifier{
         data_type member1_name,
         data_type member2_name,
         
         
         data_type membern_name     
       
   };
*/
  
#define SIZE 5
//Structure declration 
// User Define Data type declaration 
struct student{
	char roll_no[10];
	char name[20];
	float fees;
	
};
void  format();
/* Define a variable of structure 
 data_type varName; 
 int a; 
 struct student s1; 
*/
void main()
{
	// Define a structure varialbe
	// How to assign values 
	struct student s[SIZE];   // array of structure 
	int i; 
	
	// Take values from user 
	for (i=0;i<SIZE; i++)
	{
		printf("\n Enter student %d roll number =",i+1);
		scanf("%s",&s[i].roll_no);
		printf("\n Enter student %d name = ",i+1);
		scanf("%s",&s[i].name);
		printf("\n Enter student %d fees = ",i+1);
		scanf("%f",&s[i].fees);
	}
	// Display or print the structure member values
	// array of struture 
	// struct student s[10] 
	//printf("%d",sizeof(s1));
		// Take values from user 
  format();

	for (i=0;i<SIZE; i++)
	{
		printf("\n%s\t\t%s\t%.2f",s[i].roll_no,s[i].name,s[i].fees);
	}
	printf("\n*******************************************\n");	

}
void format()
{
	printf("\n*******************************************\n");	
	printf("\nRoll Number\t\tName\tFees");
	printf("\n*******************************************\n");	
}