#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int count=0;
    while(a--)
    {
        char a[100];
        scanf("%s",a);
        int len=strlen(a);
        printf("%d\n",len);
        if(len==5)
        {
            count++;
        }
    }
    printf("%d",count);
}

