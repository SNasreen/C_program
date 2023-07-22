#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int flag=0;
    while(a!=0)
    {
        printf("Enter size");
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==i)
            {
                printf("%d \n",arr[i]);
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
    break;
    }
    if(flag==1)
    {
        printf("Correct");
    }
    else
    {
        printf("Incorrect");
    }
}
