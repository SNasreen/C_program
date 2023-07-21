#include<stdio.h>
void main()
{
    char a[100];
    scanf("%s",a);
    printf("%s",a);
    int temp,count=0;
    int len=strlen(a);
    printf("%d",len);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count<1)
            {
                printf("%s",a[j]);
            }
        }
    }
    printf("%s",a);
}
