#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head, *temp=NULL, *new, *tail;
void front_insert()
{
    new=(struct node*)malloc(sizeof (struct node));
    scanf("%d",&new->data);
    new->next=head;
    head=new;
}
void back_insert()
{
    temp=head;
    tail=head;
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&data);
    new->data=data;
    new->next=
}
void middle()
{
    data=50;
    pos=2;
    temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    new=malloc(sizeof(struct node));
    new->data=data;
    new->next=next;
    new->next=temp->next;
    temp->next=new;
}
void main()
{
    while(choice!=3)
    {
        printf("\n Enter a choice: \n");
        scanf("\n %d",&choice);
        switch(choice)
        {
            case 1:front_insert();
                    break;
            case 2:pop();
                    break;
            case 3:peek();
                    break;
            case 4:display();
                    break;
        }
    }
}
