#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

}*head, *temp, *newnode;
struct node1
{
    int data;
    struct node1 *next;
}*head1, *temp1, *newnode1;
struct node2
{
    int data;
    struct node2 *next;
}*head2, *temp2, *newnode2;
int main()
{
    int a;
    printf("Enter the Size: \n");
    scanf("%d",&a);
    printf("Enter the Elements: \n");
    for(int i=0; i<a; i++)
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
    a;
    printf("Enter the Size: \n");
    scanf("%d",&a);
    printf("Enter the Elements: \n");
    for(int i=0;i<a;i++)
    {
        newnode1=(struct node1 *)malloc(sizeof(struct node1));
        scanf("%d",&newnode1->data);
        newnode1->next=NULL;
        if(head==NULL)
        {
            head=newnode1;
            temp1=newnode1;
        }
        else
        {
            temp1->next=newnode1;
            temp1=newnode1;
        }
    }
    temp=head;
    temp1=head1;
    for(int i=0;i<a;i++)
    {

        newnode2=(struct node2*)malloc(sizeof(struct node2));
        newnode2->data=temp1->data-temp->data;
        newnode2->next=NULL;
        if(head2==NULL)
        {
            head2=newnode2;
            temp2=newnode2;
        }
        else
        {
            temp2->next=newnode2;
            temp2=newnode2;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    temp2=head2;
    while(temp2!=NULL)
    {
        printf("%d",temp2->data);
        temp2=temp2->next;
    }
}
