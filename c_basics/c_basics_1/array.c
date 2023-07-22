#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int temp,res,sum=0;
    for(int i=a-1;i>=0;i--)
    {
        printf("%d",n[i]);
        sum=sum*10+n[i];
    }

    int c;
    scanf("%d",&c);
    int d=c+sum;
    printf("%d",d);

}
