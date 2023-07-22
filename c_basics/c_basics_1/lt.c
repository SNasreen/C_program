#include<stdio.h>
void main()
{
    int b=25;
    int *LT=&b;
    printf("%d\n",b);
    printf("%d\n",&b);
    printf("%d\n",&LT);
    printf("%d\n",LT);
    printf("%d",*LT);
}
