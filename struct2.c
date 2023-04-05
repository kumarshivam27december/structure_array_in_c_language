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
  
struct student{
	char roll_no[10];
	char name[20];
	float fees;
};
/* Define a variable of structure 
 data_type varName; 
 int a; 
 struct student s1; 
*/
void main()
{
	// Define a structure varialbe
	// How to assign values 
	struct student s1 = { "111","Pramod",100000};
	// Display or print the structure member values
	// array of struture 
	// struct student s[10] 
	//printf("%d",sizeof(s1));
	printf("\n%s\t%s\t%.2f",s1.roll_no,s1.name,s1.fees);
}