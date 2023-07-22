#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
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
