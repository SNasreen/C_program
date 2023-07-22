#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int len;
        scanf("%d",&len);
        int arr[len];
        int temp;
        for(int i=0;i<len;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0;i<len;i++)
        {
            printf("%d ",arr[i]);
        }

    }
}
