#include<stdio.h>
void main()
{
    int a,sum=0,sum1=0,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a-1;i++)
    {
        scanf("%d",&arr[i]);
        sum1=sum1+arr[i];
    }
    sum=a*(a+1)/2;
    printf("%d ",sum-sum1);
}
