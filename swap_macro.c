#include <stdio.h>
#define swap(a,b,temp) {temp=a;a=b;b=temp;}
int main()
{
int a,b,temp;

printf("Enter the first number : ");
scanf("%d",&a);

printf("Enter the second number : ");
scanf("%d",&b);

swap(a,b,temp);

printf("After swap\n");
printf("first number is : %d \n",a);
printf("second number :%d \n",b);

return 0;
}

