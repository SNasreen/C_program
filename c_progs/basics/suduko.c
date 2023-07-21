#include<stdio.h>
int rowcheck(int a[9][9])
{

    for(int i=0;i<9;i++)
    {
        int r=0;
        int c[10]={0,0,0,0,0,0,0,0,0,0};
        for(int j=0;j<9;j++)
        {
            c[a[i][j]]++;
        }
        for(int k=1;k<=9;k++)
        {
            if(c[k]==1)
            {
                r++;
            }
        }
        if(r!=9)
        {
            return 0;
            break;
        }
    }
        return 1;
}
int columncheck(int a[9][9])
{

    for(int j=0;j<9;j++)
    {
        int l=0;
        int c[10]={0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<9;i++)
        {
            c[a[j][i]]++;
        }
        for(int k=1;k<=9;k++)
        {
            if(c[k]==1)
            {
                l++;
            }
        }
        if(l!=9)
        {
            return 0;
            break;
        }
    }
        return 1;
}
int cubecheck(int a[9][9])
{
    for(int i=0;i<9;i+3)
    {
        for(int j=0;j<9;j+3)
        {
            int r=0;
            int c[10]={0,0,0,0,0,0,0,0,0,0};
            for(int k=0;k<9;k++)
            {
                c[a[i][j]]++;
            }
            for(int l=1;l<=9;l++)
            {
                if(c[l]==1)
                {
                    r++;
                }
            }
            if(r!=9)
            {
                return 0;
                break;
            }

        }

    }
    return 1;
}
void main()
{
    int a[9][9]={1,2,3,4,5,6,7,8,9,
                 2,3,4,5,6,7,8,9,1,
                 3,4,5,6,7,8,9,1,2,
                 4,5,6,7,8,9,1,2,3,
                 5,6,7,8,9,1,2,3,4,
                 6,7,8,9,1,2,3,4,5,
                 7,8,9,1,2,3,4,5,6,
                 8,9,1,2,3,4,5,6,7,
                 9,1,2,3,4,5,6,7,8};
    int s=rowcheck(a);
    int o=columncheck(a);
    int q=cubecheck(a);
    if(s==1&&o==1&&q==1)
    {
        printf("valid");
    }
    else
    {
        printf("Invalid");
    }
}

