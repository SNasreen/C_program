#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head, *temp=NULL, *new, *tail;
int mid()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
    }
    return count;
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,i, count=0;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
            temp=new;
        }
    }
    mid();
    display();
}
