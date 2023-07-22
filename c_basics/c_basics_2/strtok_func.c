#include<stdio.h>
void main()
{
    char a[100],*l;
    scanf("%[^\n]s",a);
    char *b=strtok(a," ");
    while(b!=NULL)
    {
        l=b;
        b=strtok(NULL," ");
    }
    printf("%s",l);
}
