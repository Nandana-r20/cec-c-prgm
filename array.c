#include<stdio.h>
int main()
{
	int arr[5],i,n,s=0;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		s=s+arr[i];
	}
	printf("sum=%d",s);
	printf("\n");
	
	return 0;
}
