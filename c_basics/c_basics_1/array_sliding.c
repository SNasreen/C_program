#include<stdio.h>
void main()
{
    int n,in;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<=n-k;i++)
    {
        in=0;
        for(int j=0;j<i+k;j++)
        {
            if(arr[j]>in)
            {
                in=arr[j];
            }
        }
        printf("%d",in);

    }
}
