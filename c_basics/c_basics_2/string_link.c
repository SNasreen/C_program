#include<stdio.h>
#include<stdlib.h>
struct node
{
    char *str;

    struct node *next;
}*new,*head,*temp;
int i;
void create(char *w)
{
    new=(struct node*)malloc(sizeof(struct node));
    new->str=w;
    printf("%s ",w);
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        temp=new;
    }
    else
    {
        new->next=temp;
        temp=new;
        head=new;
    }

}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%s ",temp->str);
        temp=temp->next;
    }
}

int main()
{
    char *words,*w;
    char str[50];
    scanf("%s",str);
    char str1[50];
    scanf("%s",str1);
    display();

}
