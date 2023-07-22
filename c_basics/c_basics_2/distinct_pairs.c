#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int sum=0,k=0;
    if(n%2==0)
    {
        while(sum<n-1)
        {
            if(sum==0)
            {
                printf("%d ",k);
                sum++;
            }
            else
            {
                printf("%d %d ",0-k,k);
                sum=sum+2;
            }
            k++;
            printf("%d ",n);
        }
    }
    else
    {
        k=1;
        while(sum<n-1)
        {
            printf("%d %d ",0-k,k);
            sum=sum+2;
        }
        k++;
    }
}
