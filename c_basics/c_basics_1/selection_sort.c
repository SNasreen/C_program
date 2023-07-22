#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,temp,min;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        min=i;
        for(j=i+1;j<a;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
            if(i!=min)
            {
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
        printf("%d ",arr[i]);
    }
}
