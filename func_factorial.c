#include <stdio.h>
int fac(int);
int main()
{
int x,result;

	printf("Enter the Number: ");
	scanf("%d",&x);

	result=fac(x);
	printf("The factorial is %d\n",result);

	return 0;
}
int fac(int a)
{	
	int fac=1,i;

	for(i=1;i<=a;i++)
	{
	fac=fac*i;
	}
	return fac;
}
