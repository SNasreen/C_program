#include<stdio.h>
void main()
{
    int a,temp,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        temp=i*i*i;
        printf("%d ",temp);
    }
}
