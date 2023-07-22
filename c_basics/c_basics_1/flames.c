#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int len1,len2,total,i,j,r,s,g,h;
char boy[22],girl[22],a[11]={' ','f','l','a','m','e','s'},b[11];
printf("The player1=");
scanf("%s",boy);
printf("The player2=");
scanf("%s",girl);
len1=strlen(boy);
len2=strlen(girl);
total=len1+len2;
for(i=0;i<len1;i++)
{
   for(j=0;j<len2;j++)
   {
       if(boy[i]==girl[j])
        {
            boy[i]=girl[j]=' ';
            total=total-2;
            break;

        }
   }
}
for(r=6;r>1;r--)
 {

    s=total%r;

    if(s==0)
      {
       s=r;
       i=1;
      }
    else
      {
       a[s]='/o';
       i=s+1;
      }
    j=1;
    while(1)
    {
       if(i==s)
      {
       break;
       }
       b[j]=a[i];
       if(i==r)
       {
           i=0;
       }
       i++;
       j++;
    }
for(i=1;i<=r-1;i++)
    {

      a[i]=b[i];

    }

 }
switch(a[1])
{
    case 'f':
    printf("Friend");
    break;
    case 'l':
    printf("Love");
    break;
    case 'a':
    printf("Affection");
    break;
    case 'm':
    printf("Marriage");
    break;
    case 'e':
    printf("Enemy");
    break;
    case 's':
    printf("Sister");
    break;
}

}
