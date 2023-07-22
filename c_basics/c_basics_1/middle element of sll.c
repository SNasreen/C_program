#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head, *temp, *newnode, *temp1;

int main()
{
    int n,i, count=0;
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
            temp->next=newnode;
            temp=newnode;
        }
    }
if (n%2==0)
{
    mid=(n/2)+1;
}
else
{
    mid=(n/2)+1;
}
    temp=head;
    int sum=0;
    for(i=1;i<=mid;i++)
    {
        if(i==mid)
        {
            printf("%d ",temp->data);
        }

          temp=temp->next;
        }
    }

