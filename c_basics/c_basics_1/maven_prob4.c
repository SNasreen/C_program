#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                if(count>=1)
                {
                    printf("%d ",a[i]);
                }
            }
        }
    }
}
