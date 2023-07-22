#include<stdio.h>
void main()
{
    char a[20],b;
    gets(a);
    int count=0;
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count>1)
            {
                break;
                b=a[i];
                printf("%c",b);

            }
        }
    }
}
