#include<stdio.h>
void main()
{
    char a[100];
    gets(a);
    char b[100];
    gets(b);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i]);
        {
            continue;
        }
        printf("%s",a);
    }

}
