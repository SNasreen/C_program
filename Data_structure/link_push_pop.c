#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*top, *temp, *newnode;
void push();
void pop();
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
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:peek();
                    break;
            case 4:display();
                    break;
        }
    }
}
void push()
{
    printf("Enter the data:");
    scanf("%d \n",&newnode->data);
    newnode->next=top;
    top=newnode;
    printf("%d\n",newnode->data);
}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("The Stack is Empty \n");
    }
    else
    {
        printf("%d",temp->data);
        top=top->next;
        free(temp);
    }
}
void peek()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    if(top==NULL)
    {
        printf("The Stack is Empty \n");
    }
    else
    {
        printf("%d",top->data);
        top=top->next;
        free(temp);
    }
}
void display()
{
    temp=top;
    if(temp!=NULL)
    {
        printf("%d",top->data);
        temp=temp->next;
    }
    else
    {
        printf("The stack is empty");
    }
}
