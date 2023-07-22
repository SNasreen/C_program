#include<stdio.h>
void main()
{
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             if(a[i][j]==1)
	      {
            int cnt=0;
            if(j+1<c&&a[i][j+1]==1)
            {
                cnt++
            }
            if(j-1>=0&&a[i][j-1]==1)
            {
                cnt++;
            }
            if(i+1<r)
              {
                if(a[i+1][j]==1)
                {
                    cnt++;
                }
                if(j+1<c&&a[i+1][j+1]==1)
                {
                    cnt++;
                }
                if(j-1>=0&&a[i+1][j-1]==1)
                {
                    cnt++;
                }
                if(i-1>=0)
                {
                if(a[i-1][j]==1)
                  cnt++;
                if (j + 1 < c && a[i - 1][j + 1] == 1)
                  cnt++;
                if (j - 1 >= 0 && a[i - 1][j - 1] == 1)
                  cnt++;
              }

            if (cnt > fc)
              {		//if bride has most qualities..
                fc = cnt;
                fr = i;
                fc1 = j;
              }
            else if (cnt == fc)	//if bride has equal no of qualities compared to best bride..
              {
                if (Math.abs (fr - 1 + fc1 - 1) > Math.abs (i - 1 + j - 1))	//find if current bride has low distance
                  {
                fr = i;
                fc1 = j;

                  }
              }

	      }
	  }
      }

    System.out.println ((fr + 1) + ":" + (fc1 + 1) + ":" + fc);
  }
}

		  }
        }
    }
}
