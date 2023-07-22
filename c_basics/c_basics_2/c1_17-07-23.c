#include<stdio.h>
int main()
{
    int n=6;
    int arr[n];
    int sum,res,sum1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter k \n");
    int k;
    scanf("%d",&k);
    int i=k-1,j=i+1;
    if(arr[i]<arr[j])
    {
        sum+=arr[j]-arr[i];
    }
    i=j+1,j=i+1;
    if(arr[i]<arr[j])
    {
        sum1+=arr[j]-arr[i];
    }
    res=sum+sum1;
    printf("%d",res);
}
