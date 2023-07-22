#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int j,temp;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<a;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
}
