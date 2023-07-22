#include<stdio.h>
void main()
{
    char str[10];
    scanf("%s",str);
    int n=strlen(str);
    int upr=0,lwr=0,num=0,sym=0,count=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            upr=1;
            count1++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            lwr=1;
            count2++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            num=1;
            count++;
        }
        else
        {
            sym=1;
        }
    }
    if((count1==1&&count2>=2&&count>=2)&&sym==1)
        {
            printf("password strong");
        }
        else
        {
            printf("password weak");
        }

}
