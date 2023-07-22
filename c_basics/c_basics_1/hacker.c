#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    char n[a];
    scanf("%s",a);
    int m=9;
    int count=0;
    int res=0;
    for(int i=0;i<a;i++)
    {
        if(n[i]=='h' || n[i]=='a' || n[i]=='c' || n[i]=='k' || n[i]=='e' || n[i]=='a' || n[i]=='r' || n[i]=='t' || n[i]=='h')
        {
            count++;
            break;
        }
    }
    printf("%d",count);
    if(count==m)
    {
        res++;
    }
    printf("%d",res);
}
