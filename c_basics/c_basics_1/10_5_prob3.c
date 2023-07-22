#include<stdio.h>
int main()
{
    int a,k=1;
    scanf("%d",&a);
    int b=a*2+1;
    int arr[a][b];
    for(int j=0;j<b;j++)
    {
        if(j==a)
        {
            arr[0][j]=1;
        }
        else
        {
            arr[0][j]=0;
        }
    }
    for(int i=1;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(j!=0 && j!=b-1)
            {
               arr[i][j]=arr[i-1][j-1]+arr[i-1][j+1];

            }
            else{
                arr[i][j]=0;
            }
        }

    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i][j]!=0)
            {
                printf("%d ",arr[i][j]);
            }
            else
            {

                printf(" ");
            }
        }
        printf("\n");
    }
}
