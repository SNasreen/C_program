#include<stdio.h>
int main()
{
    int m=100;
    char a[m];
    scanf("%s",a);
    int n=strlen(a);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]>=32 && a[i]<=47) || (a[i]>=58 && a[i]<=64) || (a[i]>=91 && a[i]<=96) || (a[i]>=123 && a[i]<=126))
        {
            count++;
        }
    }
    printf("%d",count);
}
/*if(a[i]>='A' || a[i]<='Z')
        {
            continue;
        }
        else if(a[i]>='a' || a[i]<='z')
        {
            continue;
        }
        else if((a[i]>=0 || a[i]<=9))
        {
            continue;
        }
        else
        {
            count++;
        }*/
