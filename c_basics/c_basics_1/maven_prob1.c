#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
            /*if(i==0 && arr[i]<arr[i+1])
            {
                    printf("%d",arr[i+1]);
            }
            else if(arr[i-1]<=arr[i]<=arr[i+1])
            {
                printf("%d",arr[i+1]);
            }
            else
            {
                printf("%d",arr[i]);
            }*/
            if(i==0)
            {
                if(arr[i]>arr[i+1])
                {
                    printf("%d",arr[i]);
                }
            }
            else if(i==n-1 && arr[i-1]<arr[i] )
            {
                printf("%d",arr[i]);
            }
            else
            {
                if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
                {
                    printf("%d",arr[i]);
                }
            }

    }
}

