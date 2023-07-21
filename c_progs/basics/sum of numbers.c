#include<stdio.h>
void main()
{
    int n,m,a,i,j,r,res=0;
    scanf("%d \n %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=i;j<m;j++)
        {
            if(j%n==0)
            {
                while(j--)
                {
                    r=j%10;
                    res=res+r;
                    j=j/10;

                }
            }
        }
    }

}
