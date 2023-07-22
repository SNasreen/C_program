#include<stdio.h>
void main()
{
    int n=10;
    int a[20],sum=0,count=0;
    for(int i=n-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            sum+=i+j;
            count++;
        }
        n=i-1;
    }
    printf("%d",count);
}
