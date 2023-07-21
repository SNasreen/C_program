#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int b[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int row_s=0,col_s=0,i,j,row_e=a-1,col_e=a-1;
    while((row_s<=row_e)&&(col_s<=col_e))
          {
            for(i=col_s;i<col_e;i++)
                {
                    printf("%d",b[row_s][i]);
                }
            row_s++;
            for(i=row_s;i<row_e;i++)
            {
                printf("%d",b[col_s][i]);
            }
            col_e--;
            if(row_s<row_e)
            {
                for(i=col_e;i>=col_s;i--)
                {
                    printf("%d",b[row_e][i]);
                }
                row_e--;
            }
            if(col_s<col_e)
            {
                for(i=row_e;i>=row_s;i--)
                {
                    printf("%d",b[col_e][i]);
                }
                col_s++;
            }

          }


}
