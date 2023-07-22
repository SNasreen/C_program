#include<stdio.h>
void main()
{
    int n,m,r;
    scanf("%d %d %d",&n,&m,&r);
    int a[n],b[m];
    int in=0,out=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        in+=a[i];
    }
    for(int i=0;i<m;i++)
    {
        out+=b[i];
    }
    if(in==out)
    {
        int sum=in+out;
        printf("Balanced %d",sum);
    }
    else if(in>out)
    {
        int sum=(in-out)+r;
        printf("-%d",sum);
    }
    else
    {
        int sum=(out-in)+r;
        printf("%d",sum);
    }

}


long permutation(int n, int r)
{
    return factorial(n) / factorial(n-r);
}

long combination(int n, int r)
{
    return permutation(n, r) / factorial(r);
}

long factorial(int num)
{
    long long fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact
