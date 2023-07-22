#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int temp=arr[0],i,j;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
            if(temp>arr[i])
            {
                temp=arr[i];
            }

        }
        printf("%d",temp);
}
