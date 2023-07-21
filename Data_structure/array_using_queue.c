#include<stdio.h>
int queue[100],choice,n,top,max,i,front=-1,rear=-1;
void enque();
void deque();
void peek();
void display();
void main()
{
    while(choice!=4)
    {
        printf("\n Enter a choice: \n");
        scanf("\n %d",&choice);
        switch(choice)
        {
            case 1:enque();
                    break;
            case 2:deque();
                    break;
            case 3:peek();
                    break;
            case 4:display();
                    break;
        }
    }
}
void enque()
{
    printf("Enter the size: ");
    scanf("%d",&max);
    printf("Enter the Element: \n");
    int n;
    for(int i=0;i<max;i++)
    {

        if(rear=max-1)
        {
            scanf("%d",&queue[i]);
        }
        else if(front==-1 && rear==-1)
        {
            front=rear-0;
            scanf("%d",&n);
            queue[rear]=n;
        }
        else
        {
            rear++;
            scanf("%d",&n);
            queue[rear]=n;
        }
    }
}
void deque()
{
    if(front==-1 && rear==-1)
    {
        printf("The Stack is Empty");

    }
    else if(front==rear)
    {
        printf("%d",queue[rear]);
        front=rear=-1;
    }
    else
    {
        printf("%d",queue[front]);
        front++;
    }
}
void peek()
{
    printf("%d",queue[front]);
    front++;
}
void display()
{
    for(i=front;i<rear-1;i++)
    {
        printf("%d",queue[i]);
    }
}
