#include<stdio.h>
void main()
{
    int n=5;
    int a[n],b[n];
    int temp;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("The sorted array is:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("The Ranking position of numbers are: \n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(b[i]==a[j])
            {
                printf("%d ",j);
            }
        }
    }

}
