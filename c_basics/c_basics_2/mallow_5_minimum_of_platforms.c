#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],d[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&d[i]);
    }
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            if(a[i]<d[i] && d[i]>a[j])
        {
            count++;
        }
    }
    printf("%d",count);

}
