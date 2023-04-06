#include <stdio.h>
struct student
{
    char name[10];
    char roll_no[5];
    char branch[10];
    float fees;

};

void main()
{
   struct student s1 ={"shivam","30","cse",1000000};
   printf("\n%s\t%s\t%s\t%.2f",s1.name,s1.roll_no,s1.branch,s1.fees);
   
}