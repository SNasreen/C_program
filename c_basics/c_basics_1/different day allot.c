#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int m,n,rem=0,res=0,rem1=0,res1=0;
        scanf("%d %d",&m,&n);
        {
            rem=m%5;
            res=m/5;
            if(rem!=0)
            {
                res++;
            }
            rem1=n%5;
            res1=n/5;
            if(rem1!=0)
            {
                res1++;
            }
        }
        int result=res-res1;
        printf("%d",result);

    }
}
