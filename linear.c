#include<stdio.h>
int main()
{
	int arr[5],i,n,a;
	printf("\n enter limit");
	scanf("%d",&n);
	printf("\n enter number to search");
	scanf("%d",&a);
	printf("\n enter array elementss");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			printf("%d is found \n",a);
		}
		
	}
	
	
	return 0;
}
