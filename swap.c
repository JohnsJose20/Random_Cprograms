#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the two values: ");
scanf("%d,%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n %d \n",a);
printf("%d \n",b);
return 0;
}
