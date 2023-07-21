#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*new,*head,*temp,*temp1;
void main()
{
    int n,s,count=n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
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
        }
        if(i==n-1)
        {
          temp->next=head;
        }
    }
    temp=head;
    temp1=head;
    printf("No.of skips:\n");
    scanf("%d",&s);
    while(count!=1)
    {
        for(int i=1;i<s;i++)
        {
            temp=temp->next;
            temp1=temp->next;
        }
        temp->next=temp1->next;
        temp=temp->next;
        temp1=temp->next;
        count--;
    }
    printf("%d",temp->data);
}
