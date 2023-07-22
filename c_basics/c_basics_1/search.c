#include<stdio.h>
void main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b;
    int count=0;
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
            if(arr[i]==b)
            {
                count=1;
            }
    }
    if(count==1)
    {
        printf("found");
    }
    else{
        printf("Not found");
    }
}
