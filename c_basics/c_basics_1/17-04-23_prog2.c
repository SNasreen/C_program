#include<stdio.h>
int main()
{
    char a[100],b[100];
    char temp;
    scanf("%s",a);
    scanf("%s",b);
    int count,l,flag=0;
    l=strlen(a);

    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=i+1;a[j]!='\0';j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            count=0;
            for(int k=0;a[k]!='\0';k++)
            {
                if(a[k]==b[k])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count==l)
            {
                printf("true");
                flag=1;
                break;
            }
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        printf("false");
    }
}
