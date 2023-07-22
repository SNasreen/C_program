#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int b,res,one=0,zero=0;
        scanf("%d",&b);
        while(a>0)
        {
            res=b%10;
            b=b/10;
            if(res==1)
            {
                one++;
            }
            else if(res==0)
            {
                zero++;
            }
        }

            if(one==1 || zero==1)
               {
                   printf("No");
               }
               else
               {
                   printf("Yes");
               }
    }

}
