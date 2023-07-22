#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
}*head,*temp,*newnode;
void main()
{
    int a;
    printf("Enter the size: \n");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf(" %c",&newnode->data);
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
    temp=head;
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
}
