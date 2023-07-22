#include<stdio.h>
int main()
{
    int i,temp,first_num,scnd_num,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    first_num=a[0];
    scnd_num=a[1];
    if(scnd_num>first_num && scnd_num<first_num)
    {
        temp=scnd_num;
        scnd_num=first_num;
        first_num=temp;
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>first_num)
        {
            scnd_num=first_num;
            first_num=a[i];
        }
        else if(a[i]>scnd_num)
        {
            scnd_num=a[i];
        }
    }
    printf("\n");
    printf("%d %d",scnd_num,first_num);
return 0;
}
