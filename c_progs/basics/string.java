#include<stdio.h>
void main()
{
    char n[20];
    char m[20];
    gets(n);
    gets(m);
    int a=strlen(n);
    int b=strlen(m);
    int count=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(n[i]==m[i])
            {
                count++;
            }
        }
    }
    if(count==a || count==b)
    {
        printf("it is equal");
    }
    else
    {
        printf("Its is not");
    }
}
