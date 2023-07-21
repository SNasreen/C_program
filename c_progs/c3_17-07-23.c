#include<stdio.h>
int main()
{
    char a[100],t[100];
    scanf("%s \n %s",a,t);
    int n=strlen(a);
    int m=strlen(t);
    int flag=0;
    if(n==m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==t[i])
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                }
            }
        }
    }
    else
    {
        flag=1;
    }
    if(flag==0)
    {
        printf("0");
    }
    else if(flag==1)
    {
        printf("1");
    }
}
