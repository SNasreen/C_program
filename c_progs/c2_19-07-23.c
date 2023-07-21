#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=2;
    int arr[n],temp,arr1[m],sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        arr1[0]=arr[0];
        arr1[1]=arr[1];
    }
    for(int i=0;i<m;i++)
    {
        sum+=arr1[i];
    }
    printf("%d",sum);
}
