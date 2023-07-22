#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    count=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<count;j++)
        {
            printf("* ");
        }
        for(int j=0;j<n-count;j++)
        {
            printf(" ");
        }
        for(int j=0;j<n-count;j++)
        {
            printf(" ");
        }
        for(int j=0;j<count;j++)
        {
            printf("* ");
        }
        count--;
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
