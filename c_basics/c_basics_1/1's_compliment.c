#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m],i,j;
    int arr1[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        int res=0;
        for(j=0;j<n;j++)
        {
         if(arr[i][j]==1)
         {
            res++;
         }
         arr1[i]=res;
        }
    }
    int in=0;
    int t=arr1[0];
    for(i=0;i<n;i++)
    {
        if(arr1[i]>t)
        {
            t=arr1[i];
            in=i;
        }
    }
     printf("%d",in);
return 0;

}
