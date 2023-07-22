#include<stdio.h>
void main()
{
    int n,l,k;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        l=0;
        k=i;
        while(l!=i+1)
        {
            if(k!=0)
            {
                printf("%d ",k);
                k--;
            }
            else if(k==0)
            {
                printf("%d ",l);
                l++;
            }
        }
        printf("\n");
    }
}
