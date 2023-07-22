#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int count=a;
    a=a+a-1;
    int b[a][a];

    int row_s=0,col_s=0,i,j,row_e=a-1,col_e=a-1;
    while((row_s<=row_e)&&(col_s<=col_e))
          {
            for(i=col_s;i<col_e;i++)
                {
                    b[row_s][i]=count;
                }
            row_s++;
            for(i=row_s;i<row_e;i++)
            {
                b[col_s][i]=count;
            }
            col_e--;
            if(row_s<row_e)
            {
                for(i=col_e;i>=col_s;i--)
                {
                    b[row_e][i]=count;
                }
                row_e--;
            }
            if(col_s<col_e)
            {
                for(i=row_e;i>=row_s;i--)
                {
                    b[col_e][i]=count;
                }
                col_s++;
            }

          }
          for(int i=0;i<a;i++)
          {
              for(int j=0;j<a;j++)
              {
                  printf("%d",b[i][j]);
              }
              printf("\n");
          }


}
