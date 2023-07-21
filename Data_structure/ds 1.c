#include<stdio.h>
void main()
{
    int a[9]={6,0,8,2,3,0,4,0,1};
    int i,j,temp,b;
    for(i=0;i<9;i++)
    {
        for(j=0;j<i;j++)
        {
        if (a[j]==0)
        {
            a[j]=temp;
            temp=b[j];
            b[j]=temp;
            printf("",temp);
        }
        }
    }
}
