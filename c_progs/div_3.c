#include<stdio.h>
void main()
{
    char a[100];
    gets(a);
    char b[100];
    gets(b);
    char n[10][30];
    int i=0,j=0,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=' ')
        {
            n[i][j]='\0';
            k++;
            j=0;
        }
        else
        {
            n[i][j]=a[i];
            j++;
        }
    }
    n[k][j]='\0';
    for(i=0;i<k+1;i++)
    {
        if(strcmp(n[i],b)==0)
        {
            n[i][j]='\0';
        }
    }
    j=0;
    for(i=0;i<k+1;i++)
    {
        if(n[i][j]=='\0')
        {
            continue;
        }
        else
        {
            printf("%s",n[i]);
        }
    }

}
