#include <stdio.h>
void e_s(char a[],char al[],int n[])
{
    int i=0,j=0;
    while(a[i]!='\0')
    {
        int count=1;
        while(a[i]==a[i+1])
        {
            count++;
            i++;
        }
        al[j]=a[i];
        n[j]=count;
        i++;
        j++;
    }
    al[j]='\0';
    n[j]='\0';
}

int main()
{
    char a[100],al[100];
    int n[100];
    scanf("%s",a);
    e_s(a,al,n);
    for(int i=0;al[i]!='\0';i++)
    {
        printf("%c%d \n", al[i], n[i]);
    }
    return 0;
}
