#include<stdio.h>
int main()
{
int number;
printf("Enter an integer:");
scanf("\n%d",&number);
(number%2==0)?printf("\n %d is even",number): printf("\n %d is odd \n",number);
return 0;
}
