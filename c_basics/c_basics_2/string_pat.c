#include<stdio.h>
#include<stdlib.h>
struct node
{
    char *data;
    struct node *next;
}*newnode,*top,*temp;
int i;
void main()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%s",&newnode->data);
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
    display();
}
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%s",temp->data);
        temp=temp->next;
    }
}


