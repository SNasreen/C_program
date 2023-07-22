#include<stdio.h>
void main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
    scanf("%d",&b);
    int f[a][b];
    printf("The matrix:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d\n",&f[i][j]);
        }
    }
    int s[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    int res[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            res[i][j]=0;
            for(k=0;k<b;k++)
            {
                res[i][j]+=f[i][k]*s[k][j];
            }
        }
    }
    printf("The resultant matrix is:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
return 0;
}
