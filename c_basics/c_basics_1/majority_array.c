#include<stdio.h>
int main(void)
{
    int n,temp,i,j;
    printf("enter array size:\n");
    scanf("%d",&n);
    temp=n/2;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int res=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                res=res+1;
            }
        }
        if(res>temp)
        {
            printf("%d",arr[i]);
            break;
        }

    }

    return 0;
}
