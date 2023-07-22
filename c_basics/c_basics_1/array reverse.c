#include<stdio.h>
int main()
{
    int a,i,temp,j;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<a;i++)
    {
        if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))//fr the middle elements
        {
            printf("%d",arr[i]);

        }
        else if(arr[0]>arr[1])//for frst element
        {
            printf("%d",arr[i]);
        }
        else if(arr[a-1]>arr[a-2])//for last element
        {
            printf("%d",arr[i]);
        }
    }
return 0;
}
