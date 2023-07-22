#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int arr2[m];
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr2[j])
            {
                c[i]=arr2[j];
                break;
            }
            else
            {
                c[i]=arr2[j];
                c[i]=arr[i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \n",c[i]);
    }
    int a=sizeof(arr)/sizeof (arr[0]);
    printf("%d",a);
}
