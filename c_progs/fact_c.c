#include<stdio.h>
int permutation(int n, int r)
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
}
void main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    factorial(n);
    permutation(n,r);
    printf(combination(n,r));
}
