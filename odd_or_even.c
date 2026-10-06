#include<stdio.h>
int main()
{
	int arr[5],i,n;
	printf("\n enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("even numbers \n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d \n",arr[i]);
		}
		
	}
	printf("\n odd numbers \n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d \n",arr[i]);
		}
		
	}
	
	return 0;
}
