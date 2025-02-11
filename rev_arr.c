#include <stdio.h>
int main()
{
	int i,n;
		printf("Enter the size of the array:");
		scanf("%d",&n); 
	int arr[n];
		printf("Enter the elements in your array: ");
		
			for(i=0;i<n;i++)
			{
			scanf("%d",&arr[i]);
			}
			printf("Enter the elements are: \n");
			for(i=n-1;i>=0;i--)
			{
			printf("%d\n",arr[i]);
			}
return 0;
}
