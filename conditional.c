#include<stdio.h>
int main()
{
int a,b,c,largest;
printf("Enter the three numbers:");
scanf("\n%d,\n%d,\n%d",&a,&b,&c);
largest=(a>b)?((a>c)?a:c):(b>c)?b:c;
printf("\nThe largest number %d \n",largest);
return 0;
}
