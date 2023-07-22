#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    char arr[100];
    scanf("%s",arr);
    int len=strlen(arr);
    for(int i=a/2;i<a;i+=2)
    {
        for(int j=1;j<=a-i;j+=2)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=a;i>=1;i--)
    {

        for(int j=i;j<a;j++)
        {
            printf(" ");
        }
        if(i==a)
        {
            for(int j=1;j<=(a*2-len)/2;j++)
            {
                printf("*");
            }
            printf("%s",arr);
            for(int j=1;j<(a*2-len)/2;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=(i*2)-1;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

}
