#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int val) 
{
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n == NULL) 
    {
        printf("Overflow\n");
        return;
    }
    n->data = val;
    n->next = top;
    top = n;
    printf("Pushed %d\n", val);
}

int pop() {
    if (top == NULL) {
        printf("Underflow\n");
        return -1;
    }
    struct Node* t = top;
    int val = t->data;
    top = top->next;
    free(t);
    printf("Popped %d\n", val);
    return val;
}

int search(int ele) {
    struct Node* curr = top;
    int pos = 1;
    while (curr != NULL) {
        if (curr->data == ele) {
            printf("Found %d at pos %d\n", ele, pos);
            return 1;
        }
        curr = curr->next;
        pos++;
    }
    printf("%d not found\n", ele);
    return 0;
}
void peek()
{
struct Node* temp =top;
if(top==NULL)
{
 printf("stck underflow");
 return;
}
printf("top element %d \n",temp->data);
}
void display() {
    if (top == NULL) {
        printf("Empty\n");
        return;
    }
    struct Node* curr = top;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, val;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. peek \n4. Search\n5. dislay\n6. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("\nEnter val to seacrh ");
                scanf("%d", &val);
                search(val);
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

