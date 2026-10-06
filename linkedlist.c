#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};
struct node *head=NULL;
void insfirst()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("no space\n");
		return;
	}
	printf("\nenetr val\n");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
	newnode->link=head;
	head=newnode;
	}
	printf("\n%d inserted\n",newnode->data);
}
void inslast()
{
	struct node*newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("no space");
		return;
	}
	printf("enetr val");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->link!=NULL)
		{
		temp=temp->link;
		}
		temp->link=newnode;
	}
	printf("\n%d inserted\n",newnode->data);
}

void insloc()
{
	struct node*temp,*newnode;
	int pos,i;
	printf("\nposition to insert\n");
	scanf("%d",&pos);
	if (pos<1){
		printf("\ninvalid position\n");
		return;
		
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\nno space\n");
		return;
			
	}
	printf("\nenter valure to insert\n");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	if(pos==1)
	{
		newnode->link=head;
		head=newnode;
		printf("\nelement insert at %d position element %d \n",pos,newnode->data);
	return;
	}
	temp=head;
	for(i=1;i<pos-1;i++){
		if(temp==NULL){
			break;		
		}	
		temp=temp->link;
	}
	if(temp==NULL){
		printf("\n not possible \n");
		free(newnode);
		return;	
	}
	newnode->link=temp->link;
	temp->link=newnode;
	printf("\ninserted %d pos %d ele\n",pos,newnode->data);
}

void delfirst()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("empty");
		return;
	}
	temp=head;
	head=head->link;
	printf(" \n %d deleted\n",temp->data);
	free(temp);
}
void dellast()
{
	struct node*temp,*prev;
	if(head==NULL)
	{
		printf("empty");
		return;
	}
	temp=head;
	prev=NULL;
	 if(temp->link==NULL)
	 {
	 	printf("\n deleted element %d \n",temp->data);
	 	free(temp);
	 	head=NULL;
	 	return;
	 }
	 while(temp->link!=NULL)
	 {
	 	prev=temp;
	 	temp=temp->link;
	 	
	 }
	 printf("\n deleted element %d\n",temp->data);
	 prev->link=NULL;
	 free(temp);
}
void delloc()
{
	
    struct node *temp, *prev;
    int location, i;

    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }

   
    printf("\nEnter the location to delete: ");
    scanf("%d", &location);

    temp = head;
    prev = NULL;

    
    if (location == 1) {
        head = temp->link;
        printf("\nDeleted %d\n", temp->data);
        free(temp);
        return;
    }

    
    for (i = 1; temp != NULL && i < location; i++) {
        prev = temp;
        temp = temp->link;
    }

   
    if (temp == NULL) {
        printf("\nLocation out of bounds / Position does not exist\n");
        return;
    }

    
    prev->link = temp->link;
    printf("\nDeleted %d\n", temp->data);
    free(temp);


}
void display()
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("\nempty\n");
		return;
	}
	printf("\n linked list----\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
		
		
	}
	
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n --singily linked list--");
		printf("\n 1. insert front");
		printf("\n 2. insert last");
		printf("\n 3. insert loc");
		printf("\n 4. delete front");
		printf("\n 5. delete last");
		printf("\n 6. delete pos");
		printf("\n 7. display");
		printf("\n 8. exit");
		printf("\n enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insfirst(); break;
			case 2: inslast(); break;
			case 3: insloc(); break;
			case 4: delfirst(); break;
			case 5: dellast(); break;
			case 6: delloc(); break;
			case 7: display(); break;
			case 8: exit(0); break;
			default: printf("invalid");
		}
		
	}
	return 0;
}
