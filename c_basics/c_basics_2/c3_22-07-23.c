#include<stdio.h>
int find(int arr[],int len)
{
    int ans[len+1];
    for(int i=0;i<len+1;i++)
    {
        ans[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        if(arr[i]>0 && arr[i]<=len)
        {
            ans[arr[i]]=1;
        }
    }
    for(int i=1;i<=len;i++)
    {
        if(!ans[i])
        {
            return i;
        }
    }
    len+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int len;
        scanf("%d",&len);
        int arr[len];
        for(int i=0;i<len;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("%d",find(arr,len));

    }
}
