#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int m=n+n-1;
    int a[m][m];
    int u=0;
    int row_start=0,row_end=m-1,col_start=0,col_end=m-1;
    while(row_start<=row_end&&col_start<=col_end)
    {
        for(int i=col_start;i<=col_end;i++)
        {
            a[row_start][i]=u;
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        {
            a[i][col_end]=u;
        }
        col_end--;
        for(int i=col_end;i>=col_start;i--)
        {
            a[row_end][i]=u;
        }
        row_end--;
        for(int i=row_end;i>=row_start;i--)
        {
            a[i][col_start]=u;
        }
        col_start++;
        u++;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
