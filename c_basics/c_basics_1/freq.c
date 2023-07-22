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
    for(i=0;i<a;i++)
    {
        int count=1;
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
        if(count>a/2)
           {
               printf("%d",arr[i]);
           }
    }
}
