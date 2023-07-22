#include<stdio.h>
void main()
{
    int i,j,temp,r,res=0;
    char a[10]="String";
    char b[10];
    scanf("%c",b);
    for(i=a[0];i<a[10];i++)
    {
        for(j=i;j<10;j++)
        temp=i;
        {
            while(i--)
            {
                r=r%10;
                i=i/10;
                res=res*r;
            }
            printf("%c",res);
        }
    }
}
