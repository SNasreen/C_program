#include<stdio.h>
int main()
{
    int n=5;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;++j)
        {
            printf("* ");
        }

        printf("\n");
    }
    for(i=0;i<=n;i++)
    {
        for(j=i;j<n;++j)
        {
            printf("  ");
        }

        for(j=0;j<i;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for(i=0;i<=n;i++)
    {
        for(j=i;j<n;++j)
        {
            printf("  ");
        }
        for(j=0;j<i*2-1;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for(i=0;i<=n;i++)
    {
        for(j=i;j<n;++j)
        {
            printf(" ");
        }
        for(j=0;j<i*2;j++)
        {
            printf("*");
        }

        printf("\n");
    }

}
