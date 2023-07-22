#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
}*new,*head,*temp,*temp1;
int count=0,equal=0;
void create()
{
    head=NULL;
    int n;
    scanf("%d",&n);
   while(n--)
   {
       new=(struct node*)malloc(sizeof(struct node));
       scanf(" %c",&new->data);
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
   }
}
int check()
{
    count=0;equal=0;
    temp=head;
    char a;
    while(temp->next!=NULL)
    {
        count++;
        if(temp->data==temp->next->data)
        {
            equal++;
        }
        temp=temp->next;
    }
    temp=head;
    temp1=temp->next;
    if(equal!=count)
    {
        while(temp1!=NULL)
        {
            if(temp->data==temp1->data)
            {
                a=temp1->data;
                temp1->data=temp1->next->data;
                temp1->next->data=a;

            }
            else
            {

                temp=temp->next;
                temp1=temp1->next;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }

}
void display(int f)
{
    if(f==1)
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%c",temp->data);
            temp=temp->next;
        }
    }
   else
   {
       printf("-1");
   }
}
int main()
{
        create();
       int f=check();
       display(f);

}
