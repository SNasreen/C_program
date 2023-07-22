#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         int sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        int time=sum/k;
        int ttime=sum-a[n-1];
        for(i=0;i<n;i++)
        {
            if(a[i]==a[n-1])
        {
             printf("%d",time);
             break;
        }
        else if(a[n-1]>ttime)
        {
            printf("%d",a[n-1]);
        }
        else
            printf("%d",ttime);
            break;
        }
    }
    return 0;
}
