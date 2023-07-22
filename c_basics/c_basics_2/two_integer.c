#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int m=100;
    int b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter tar");
    int tar,sum,flag=0;
    scanf("%d",&tar);

    for(int i=0;i<n-1;i++)
   {
        for(int j=i+1;j<n;j++)
        {
           if(a[i]+a[j]==tar)
           {
               flag=1;
               break;
           }
        }
    }

    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
