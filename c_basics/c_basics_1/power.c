#include<stdio.h>
#include<math.h>
void main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int res=1;
    for(int i=0;i<b;i++)
    {
        res=res*a;
    }
    printf("%d",res);
    printf("\n");
    int k;
    scanf("%d",&k);
    int n[k],rem,temp,sum=0;
    for(int i=0;i<k;i++)
    {
        rem=res%10;
        n[i]=rem;
        res=res/10;
    }
    for(int i=k;i>=0;i--)
    {
        sum=sum*10+n[i];
    }
    printf("%d",sum);
}
