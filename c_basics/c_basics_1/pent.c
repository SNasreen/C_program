#include<stdio.h>
#include<stdlib.h>
struct node
{
    int *data;
    struct node *next;
}*head,*temp,*new;
void create()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    a=
}
