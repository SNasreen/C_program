#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,m;
    scanf("%d",&a);
    while(a--)
    {

        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);
        int pow=1;
        for(int i=0;i<n;i++)
        {
            pow*=2;
        }

        if((m)%pow!=0 && m<n)

        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");

        }


    }
}
