#include<stdio.h>
void main()
{
    int n,m,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int max=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        printf("%d ",max);
    }
}
