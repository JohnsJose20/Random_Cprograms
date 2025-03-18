#include <stdio.h>
int isPalindrome(int);
int main()
{
	int x,result;

	printf("Enter a number:");
	scanf("%d",&x);

	result=isPalindrome(x);

		if(result)
		{
			printf("%d is a palindrome\n",x);
		}
		else
		{
			printf("%d is not a palindrome\n",x);
		}
	return 0;
}
	int isPalindrome(int num)
	{
	int orginal=num,reversed=0;

		while(num!=0)
		{
		reversed = reversed*10+num%10;
		num=num/10;
		}
			if(orginal==reversed)
			{
			return 1;
			}
			else
			{
			return 0;
			}
	}
