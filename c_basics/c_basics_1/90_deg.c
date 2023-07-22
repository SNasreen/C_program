#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=a-1;j>=0;j--)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}

