#include<stdio.h>
int recurse(int arr[],int i,int j,int n,int flag)
{
    int temp;
    if(i<n-1)
    {
        if(flag)
        {
            j=i+1;
        }
        if(j<n)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            recurse(arr,i,j+1,n,0);
        }
        recurse(arr,i+1,0,n,1);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        recurse(arr,0,0,n,1);
        for(int i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
    }
}
