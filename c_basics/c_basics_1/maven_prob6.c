#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    gets(a);
    int length=strlen(a);
    printf("%d\n",length);
    char n[10];
    scanf("%c",&n);
    int j=0,l;
    for(int i=0;i<length;i++)
    {
        if(a[i]==n[j])
        {
            l=i;
        }
    }
    printf("%d",l);
}
