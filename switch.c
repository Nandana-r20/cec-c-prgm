#include<stdio.h>
int main()
{
	int ch;
	printf("enter choice");
	scanf("%d",&ch);

	if(ch>=90)
			{
			printf("A+ \n");
			}
			
		else if(ch>=80)
				{	
		
				printf("A \n");
				}
				
		else if(ch>=70)
				{	
				
				printf("B \n");
				}
				
		else if(ch>=60)
				{	
				printf("c \n");
				}
				
		else if(ch>=50)
				{	
				printf("D \n");
				}
				
		else 
				{	
				
				printf("FAIL \n");
				}
		
		
	return 0;
}
