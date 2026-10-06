#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int item){
	if(top== MAX-1)
	{
		printf("overflow");
		return;
	}
	stack[++top]=item;
	printf("\n %d pushed to stack \n",item);
}
void pop()
{
	if(top==-1)
	{	
		printf("underflow");
		return;
	}
	printf("\n %d ;poped from stack \n",
	stack[top--]);
}
void peek()
{
	if(top==-1)
	{	
		printf("stack is empty");
		return;
		}
		printf("\n top element is %d \n",stack[top]);
}
void display()
{
	if(top==-1)
	{	
		printf("stack is empty");
		return;
		}
		for(int i=top;i>=0;i--)
		{
			printf("\n %d \n",stack[i]);
		}
}
int main()
{
	int choice,value;
	while(1){
	printf("\n stack operations menu");
	printf("\n 1.push");
	printf("\n 2.pop");
	printf("\n 3.peek");
	printf("\n 4.display");
	printf("\n 5.exit");
	printf("\n");
	printf("\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n enter value push");
			scanf("%d",&value);
			push(value);
			break;
		
		case 2:
			pop();
			break;
			
		case 3:
			peek();
			break;
			
		case 4:
			display();
			break;
			
		case 5:
			printf("\n exiting");
			return 0;
			
		default:
			printf("\ninvalid choice\n");
	}
	}
}
