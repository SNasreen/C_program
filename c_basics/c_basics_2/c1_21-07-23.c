#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int arr[a];
    int flag=0;
    while(n!=0)
    {
        scanf("%d",&a);
        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
    }
    printf("Enter num_1");
    int l;
    scanf("%d",&l);
    printf("Enter num_2");
    int m;
    scanf("%d",&m);
    while(n!=0)
    {
        int i=0,j=1;
        int sum=arr[i]+arr[j];
        if(sum%l==m)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
            break;
        }
        i+2;
        j+2;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }


}
