#include<stdio.h>
void main()
{
    int h;
    scanf("%d",&h);
    int arr[h],arr1[h];
    int count=0,i,j,temp;
    for(i=0;i<h;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<h;i++)
    {
        for(j=i+1;j<h;j++)
        {
            arr1[i]=count++;
        }
        if(arr1[i]>=arr1[j])
        {
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
        }
    }
    printf("%d\n",arr[0]*arr1[0]);
}
