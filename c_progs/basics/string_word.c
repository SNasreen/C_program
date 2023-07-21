#include<stdio.h>
#include<string.h>
 int main()
 {
   int i,count=0,len=0;
   char a[100];
   gets(a);
   int length=strlen(a);
   printf("%d",length);
   for(i=0;i<length;i++)
   {
    if(a[i]!=' ')
    {
      count++;
      break;
    }
   }
   printf("The last word is a %s with length %d",a[count],len);

 }
