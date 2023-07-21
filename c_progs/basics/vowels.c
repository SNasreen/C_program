#include<stdio.h>
void main()
{
    char a[100];
    //scanf("%[^\n]%*c",a);
    gets(a);
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            a[i]=a[i]-32;
        }
            //printf("%c",strupr(a));
            /*else
            {
                printf("%c")
            }*/
    }
    printf("%s",a);

}
