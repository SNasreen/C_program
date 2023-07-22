#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d\n",&a);
    scanf("%d",&b);
    int *ptr=&a;
    int *ptr1=&b;
    ptr=&a;
    ptr1=&b;
    printf("%d\n",&a);
    printf("%d\n",&b);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",&ptr);
    printf("%d\n",&ptr1);
    printf("%d\n",ptr);
    printf("%d",ptr1);

}
