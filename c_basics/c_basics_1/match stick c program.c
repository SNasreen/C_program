#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int b,c,d,res,count=0,sum;
        scanf("%d %d",&b,&d);
        c=b+d;
        while(c>0)
        {
            res=c%10;
            c=c/10;
        if(res==0)
        {
            count=6;
        }
        else if(res==1)
        {
            count=2;
        }
        else if(res==2)
        {
            count=5;
        }
        else if(res==3)
        {
            count==5;
        }
        else if(res==4)
        {
            count==4;
        }
        else if(res==5)
        {
            count==5;
        }
        else if(res==6)
        {
            count=6;
        }
        else if(res==7)
        {
            count=3;
        }
        else if(res==8)
        {
            count=7;
        }
        else if(res==9)
        {
            count=8;
        }
        sum=sum+count;
    }
    printf("%d",sum);
    }
}
