#include<stdio.h>
int compare(char a[],char b[]);
void main()
{
    int str[50];
    int str1[50];
    int count=0;
    scanf("%s",str);
    scanf("%s",str1);
    int n=strlen(str);
    int m=strlen(str1);
    compare(str,str1);
}
int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' &&b[i]!='\0')
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
           printf("%d",flag);
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}
