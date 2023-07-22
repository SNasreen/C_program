#include<stdio.h>
void main()
{
    char a[5]={'T','I','M','R','L'};
    int n,sum;
    scanf("%d",&n);
    if(n>5)
    {
        sum=n-5;
        int rem=n/4;
        printf("%c",a[rem]);
        int in=n%4;
        printf("%c" "U",n-in-1);
    }
    else
    {
        printf("%c",a[n]);
    }
}
