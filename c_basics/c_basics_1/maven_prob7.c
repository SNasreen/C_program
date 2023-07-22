#include<stdio.h>
void main()
{
    char a[100];
    scanf("%[^\n]%*c",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
           {
               printf("%c",a[i]);
           }
    }

}
