#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%d",a[i]);
            break;
        }
    }
}

