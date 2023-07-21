#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    char data;
    struct node*next;
}*head,*temp,*newnode;
void create()
{
    int a;
    printf("Enter the size: \n");
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
}
void display()
{
    temp=head;
    while(temp=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
}
 main()
{
    void create();
    void display();
}
