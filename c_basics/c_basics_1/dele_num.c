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
    printf("To delete \n");
    int ele;
    printf("Enter element:\n");
    scanf("%d",&ele);
    printf("The array is:\n");
    int pos,i,j;
    for(i=0;i<a;i++)
    {
        if(arr[i]==ele)
        {
            pos=i;
        }
    }
    for(i=pos;i<a;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<a-1;i++)
    {
        printf("%d \n",arr[i]);
    }

}

