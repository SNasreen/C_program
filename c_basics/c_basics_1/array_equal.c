#include<stdio.h>
int main()
{
    int n,m,temp,temp1,i,j;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i]<b[j])
            {
                temp1=b[i];
                b[i]=b[j];
                b[j]=temp1;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    int res=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            res++;
        }
    }
    if(res==n)
    {
        printf("equal");
    }
    else
        {
            printf("not equal");
        }
}
