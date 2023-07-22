#include<stdio.h>
#define maxsize 10
int arr[maxsize],a;
int create()
{
        printf("Enter the size: \n");
        scanf("%d",&a);
        printf("Enter the array: \n");
        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
    return 0;
}
void insert()
{
    printf("To insert an element\n");
    create();
    int ele,res;
    printf("Enter the element \n");
    scanf("%d",&ele);
    printf("Enter the position \n");
    int pos;
    scanf("%d",&pos);
    printf("The inserted array is\n");
    for(int i=a-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    for(int i=0;i<a+1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void display()
{
    printf("To display \n");
    create();
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int search()
{
    printf("To search\n");
    create();
    printf("Enter search element:\n");
    int element,count=0;
    scanf("%d",&element);
    for(int i=0;i<a;i++)
    {
        if(arr[i]==element)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    printf("\n");
}
void dele()
{
    printf("To delete \n");
    create();
    int ele;
    printf("Enter element:\n");
    scanf("%d",&ele);
    printf("The array is:\n");
    int pos;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==ele)
        {
            pos=i;
        }
    }
    for(int i=pos;i<a;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<a-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{
    printf(" 1. Create an Array \n 2. Insert an array \n 3. Display an array \n 4. Delete an element \n 5. Search an element \n 6. Exit \n 7.Invalid choice \n \n ");
    int choice;
    while(choice!=6)
    {
        printf("Enter a choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
                    break;
            case 2: insert();
                    break;
            case 3: display();
                    break;
            case 4: dele();
                    break;
            case 5: search();
                    break;
            case 6:printf("Exit");
                    break;
            default:
                    printf("Invalid choice: \n");
                    break;

        }
    }

}
