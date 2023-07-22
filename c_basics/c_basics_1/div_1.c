#include<stdio.h>
void main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int arr1[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr1[i])
            {
                count++;
            }
    }
    printf("%d",count);
}

