#include<stdio.h>
void main()
{
    int a,i,j=0;
    scanf("%d",&a);
    printf("Enter the array: \n");
    int arr[a],arr2[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
            arr2[j]=arr[i];
            j++;
        }
    }
}
