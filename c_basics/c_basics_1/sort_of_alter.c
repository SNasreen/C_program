#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,i,j,temp;
 scanf("%d",&a);
 int arr[a];
  for(i=0;i<a;i++)
  {
   scanf("%d",&arr[i]);
  }
  for(i=0;i<a;i++)
  {
   for(j=0;j<a;j++)
   {
     if(arr[i]<arr[j])
    {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
    }
   }
  }
  temp=a-1;
  j=0;
  printf("The resultant Output is:\n");
  for(i=0;i<a;i++)
  {
   if(i%2!=0)
    {
    printf("%d ",arr[j] );
    ++j;
    }
    else
    {
    printf("%d ",arr[temp] );
     --temp;
   }
  }

 return 0;
}
