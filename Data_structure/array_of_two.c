#include<stdio.h>
int main()
{
    int n1,n2,i,j,temp;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int arr1[n1];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n2];
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int t=n1;
    for(i=0;i<n1+n2;i++)
        {
            arr1[t]=arr2[i];
            t++;

        }
    for(i=0;i<n1+n2;i++)
    {
        for(j=0;j<n1+n2;j++)
        {
            if(arr1[i]<arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(i=0;i<n1+n2;i++)
    {
        for(j=i+1;j<n1+n2;j++)
        {
            if(arr1[i]==arr1[j])
            {
                arr1[j]=0;
            }
        }
    }
    for(i=0;i<n1+n2;i++)
    {
        if(arr1[i]!=0)
        {
            printf("%d ",arr1[i]);
        }
    }
return 0;
}
