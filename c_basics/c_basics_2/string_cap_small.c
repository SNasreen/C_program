#include<stdio.h>
void main()
{
    char a[100];
    scanf("%[^\n]%*c",a);
    int len=strlen(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i+1]==' ' || a[i+1]=='\0' ||a[i-1]==' ')
        {
            printf("%c",a[i]-32);
        }
        else if(i==0)
        {
            printf("%c",a[i]-32);
        }
        oelse
        {
            printf("%c",a[i]);
        }
    }
}
