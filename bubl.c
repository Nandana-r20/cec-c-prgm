#include<stdio.h>
int main()
{
	int arr[5],i,n;
	int j,temp;
	printf("\n enter limit");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp= arr[j+1];
				arr[j+1]= arr[j];
				arr[j]= temp;
				break;
			}
			
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	
	return 0;
}
