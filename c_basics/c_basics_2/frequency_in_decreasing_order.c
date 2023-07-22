#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int n=strlen(a);
    char *b=(char *)malloc(sizeof(char)*100);
    int k=0,l=0,flag=0,max=0;
    for(int i=0;i<n;i++)
    {
        if(k==0)
        {
            b[k++]=a[i];
        }
        else
        {
            flag=0;
            for(int j=0;j<k;j++)
            {
                if(a[i]==b[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                b[k++]=a[i];
            }
        }
    }
    int *res=calloc(k,sizeof(int));
    int count=0,ind,c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                res[j]++;
            }
        }
    }
    while(count<k)
    {
        max=0;
        for(int j=0;j<k;j++)
        {
            if(res[j]>max)
            {
                max=res[j];
                ind=j;
                c=max;
            }
            else if(res[j]==max)
            {
                if(b[j]>b[ind])
                {
                    max=res[j];
                    ind=j;
                    c=max;
                }
            }

        }
        res[ind]=0;
        printf("%c %d\n",b[ind],c);
        count++;
    }
}
