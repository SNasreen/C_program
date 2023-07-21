#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head, *temp, *newnode, *temp1;

int main()
{
    int n,i,s,count=0;
    int mid;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
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
            newnode->next=head;
            temp->next=newnode;
        }
    }
    while(temp1->next)
    for(i=0;i<s;i++)
    {
        temp=temp->next;
        temp1=temp->next;
    }
    else
    {
        temp= temp1;
        temp= temp1->next;
    }
    temp->next = NULL;
    }
    temp=head;
    int sum=0;
    while(temp!=NULL)
    {
          printf("%d ",temp->data);
          temp->next=head;
        }
    }
