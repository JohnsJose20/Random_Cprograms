#include<stdio.h>
int main()
{
int roll_no,age;
float height;
char grade;
printf("\nEnter the roll no: ");
scanf("%d",&roll_no);
printf("\nEnter the age: ");
scanf("%d",&age);
printf("\nEnter height: ");
scanf("%f",&height);
printf("\nEnter grade: ");
scanf(" %c",&grade);
printf("\nThe roll no is %d",roll_no);
printf("\nThe age is %d years",age);
printf("\nHeight is %f cm",height);
printf("\nGrade is %c\n",grade);
return 0;
}
