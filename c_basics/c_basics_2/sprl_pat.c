#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a];
    int r_min=1,r_max=a,c_min=1,c_max=a,count=1;
    while((r_min<=r_max)||(c_min<=c_max))
    {
        for(int i=c_min;i<=c_max;i++)
        {
            arr[r_min][i]=count++;
        }
        for(int i=r_min+1;i<=r_max;i++)
        {
            arr[i][c_max]=count++;
        }
        for(int i=c_max-1;i>=c_min;i--)
        {
            arr[r_max][i]=count++;
        }
        for(int i=r_max-1;i>=r_min+1;i--)
        {
            arr[i][c_min]=count++;
        }
        r_min++,r_max--,c_min++,c_max--;

    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}
