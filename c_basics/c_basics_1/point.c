#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int *b,*c;
    b=&a;
    c=b;
    printf("%d %d",*b,*c);
}
