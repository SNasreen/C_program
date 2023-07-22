#include <stdio.h>

int main()
{
    int i, j, n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    int flag;
    scanf("%d",&flag);
    if(flag==1)
    {
        for(i=0;i<m;i++)
        {
            for(j=n-1;j>=0;j--)
                printf("%d ",a[j][i]);
            printf("\n");
        }
    }
    else
    {
        for (i = m - 1; i >= 0; i--)
        {
            for (j = 0; j < n; j++)
                printf("%d ", a[j][i]);
            printf("\n");
        }
    }
    return 0;
}
