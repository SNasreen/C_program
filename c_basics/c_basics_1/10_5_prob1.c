#include<stdio.h>
int recur(int n)
{
    int rem=0,count=1,sum=0;
    while(n--)
    {
        int m=n;
        while(m)
        {
            rem=m%10;
            if(rem==1)
            {
                count++;
            }
            m=m/10;
        }

    }
    return count;
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",recur(n));
}
