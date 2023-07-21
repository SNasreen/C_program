#include<stdio.h>
int gcd(int n,int m)
{
    if(m==0)
    {
        return n;
    }
    else
    {
        return gcd(n,n%m);
    }
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",gcd(n,m));
}
