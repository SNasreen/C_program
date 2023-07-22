#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp;
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
    }
    int k;
    scanf("%d",&k);
    printf("%d",arr[k]);
}
