#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int value1)
{
	if(rear==MAX-1)
	{
		printf("queue full");
	}	
	else
	{
		if(front==-1)
		{
			front=0;
			}
			rear++;
			queue[rear]=value1;
			printf("\n %d added to queue\n",value1);
			
	}
}
	void dequeue()
	{
		if(front==-1 || front>rear)
		{
			printf("queue is empty");
		}
		else
		{
			printf("deleted %d",queue[front]);
			if(front==rear)
			{
			front=rear=-1;
			}
			else
			{
			front++;		
			}
		}
	}
	void display()
	{
		int i;
		if(front==-1)
		{
			printf("queue is empty");
		}
		else
		{
			printf("queue elements");
			for(i=front;i<=rear;i++)
			{
			 printf("\n %d \n",queue[i]);
			}
			printf("\n");
		}
	}
	void peek()
	{
		if(front==-1)
		{
			printf("queue is empty");
		}
		else
		{
		printf("front element=%d",queue[front]);
		}	
	}
	int main()
	{
		int choice,value;
		do
		{
			printf("\n queue operations \n 1.enqueue \n 2.dequeue \n 3.display \n 4.peek \n 5.exit\n");
			printf("\nenter your choice");
			scanf(" %d",&choice);
			switch(choice)
			{
				case 1:
					printf("enter value");
					scanf("%d",&value);
					enqueue(value);
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				case 4:
					peek();
					break;
				case 5:
					printf("exiting");
					break;
				default:
					printf("invalid choice");
			}
		}while(choice!=5);
		return 0;
	}

