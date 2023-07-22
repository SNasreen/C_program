#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL, *rear=NULL,*top, *temp, *newnode;
void enque();
void deque();
void peek();
void display();
void main()
{
    int choice;
    int n,i, count=0;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(top==NULL)
        {
            top=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    while(choice!=4)
    {
        printf("\n Enter a choice: \n");
        scanf("\n %d",&choice);
        switch(choice)
        {
            case 1:enque();
                    break;
            case 2:deque();
                    break;
            case 3:peek();
                    break;
            case 4:display();
                    break;
        }
    }
}
void enque()
{
    int n,i, count=0;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(top==NULL)
        {
            top=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void deque()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("The Stack is Empty");
    }
    else
    {
        printf("%d",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(front==NULL && rear==NULL)
    {
        printf("The stack is Empty");
    }
    else
    {
        printf("%d",front->data);
        front=front->next;
    }
}
void display()
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
