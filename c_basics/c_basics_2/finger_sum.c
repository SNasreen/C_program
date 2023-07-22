/* Luv u code
include<stdio.h>
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
}*/
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    char a[5]={'Thumb','Index','Middle','Ring','Little'};
    if(n>5)
    {
        printf("%s",a[n]);
    }
    else
    {
        int sum=n-5;
        int in=n/4;
        int rem=n%4;
        if(in%2!=0)
        {
            printf("%s",a[rem]);
        }
        else
        {
            printf("%s",n-a[rem]-1);
        }
    }
}

