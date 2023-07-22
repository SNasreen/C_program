#include<stdio.h>
int main()
{
    char arr[100],target[100];
    scanf("%s",arr);
    int n,i,j,l,k=0,count=0,flag=0;
    scanf("%d",&n);
    char str[n][100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(int m=0;m<n;m++)
    {
        strcpy(target,str[m]);
        k=0;
        for(int i=0;arr[i]!='\0';i++)
        {
            if(arr[i]==target[k])
            {
                j=i;
                while(target[k+1]!='\0')
                {

                    k++;
                    j++;
                    if(arr[j]!=target[k])
                    {
                       flag=0;
                       break;
                    }
                    else
                    {
                        flag=1;
                    }
                }
                if(flag==1)
                {
                    count++;

                    for(l=i;l<=i+strlen(target)-1;l++)
                    {
                        arr[l]='@';

                    }
                    break;

                }
            }
        }


    }
    if(count==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}
