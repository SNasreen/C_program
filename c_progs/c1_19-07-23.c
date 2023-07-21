#include<stdio.h>
int fact(n)
{
    int rem=1;
    while(n!=0)
    {
        rem*=n;
        n--;
    }
    return rem;
}
int main()
{
    int n;
    scanf("%d",&n);
    int rem1=0,count=0;
    int facto=fact(n);
    while(facto>0)
    {
        rem1=facto%10;
        if(rem1==0)
        {
            count++;
        }
        facto=facto/10;
    }
    printf("%d",count);
}
