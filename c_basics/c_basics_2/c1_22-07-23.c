#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=0;
                a[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
        }
    }
    }
    return 0;

}
