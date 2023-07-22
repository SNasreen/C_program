#include<stdio.h>
void main()
{
    int n,arr[n],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[1]=arr[2]=0;
    for(i=2;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
