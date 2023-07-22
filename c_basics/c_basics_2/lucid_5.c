#include<stdio.h>
void main()
{
    char a[100],b;
    scanf("%c",&b);
    scanf("%s",a);
    int n=strlen(a);
    int count=0,i=0;
    while(i<=n)
    {
        if(a[i]==b)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
}
