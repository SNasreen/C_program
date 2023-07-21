#include<stdio.h>
void main()
{
    char a[100];
    gets(a);
    char b=a[0];
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i+1]!='\0')
        {
            a[i]=a[i+1];
        }
        else if(a[i+1]=='\0')
        {
            a[i]=b;
        }
    }
    for(int i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}
