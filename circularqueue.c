#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int x)
{
	
	if((rear+1)%MAX==front)
	{
		printf("queue full");
		return;
	}	
	else
	{
		if(front==-1)
		{
			front=0;
			}
			
	
			rear=(rear+1)%MAX;
			queue[rear]=x;
			printf("\n %d added to queue\n",x);
			
	}
}
	void dequeue()
	{
		if(front==-1)
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
			front=(front+1)%MAX;		
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
		i=front;
		printf("queue elements\n");
			while(1)
		{
			printf("%d \n", queue[i]);
			if(i == rear)
			{
				break;
			}
			i = (i + 1) % MAX;
			}
			printf("\n");
		}
	}
	void search()
	{
	int a,i,found=0;
	
		if(front==-1)
		{
			printf("queue is empty");
		}
		printf("enter ele to search");
		scanf("%d",&a);
		i = front;
	
	do
	{
		if(queue[i]==a)
		{
			printf("%d found at %d position\n",a,i);
			found = 1;
			break;
		}
		i = (i + 1) % MAX;
		}while(i!=(rear+1)%MAX);
		if(found == 0)
	{
		printf("not found");
	}
	
	}
	int main()
	{
		int choice,val;
		do
		{
			printf("\n queue operations \n 1.enqueue \n 2.dequeue \n 3.display \n 4.search \n 5.exit\n");
			printf("\nenter your choice\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("enter to insert");
					scanf("%d",&val);
					enqueue(val);
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				case 4:
					search();
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

