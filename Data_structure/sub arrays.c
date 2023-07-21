#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(i=0;i<=1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<t-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=3;i<t-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=4;i<t;i++)
    {
        printf("%d ",a[i]);
    }

}
