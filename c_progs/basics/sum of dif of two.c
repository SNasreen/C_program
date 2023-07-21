#include<stdio.h>
void main()
{
    int a,b,i,count=0,count1=0,res;
    scanf("%d \n %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i%a==0)
        {
            count=count+i;

        }
        else
        {
            count1=count1+i;

        }
    }
    res=count1-count;
    printf("\n%d",res);
}
