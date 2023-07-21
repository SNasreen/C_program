#include<stdio.h>
void main()
{
    int add=25;
    int *art=&add;
    printf("%d\n",add);
    printf("%d\n",*art);
    printf("%d\n",art);
    printf("%d\n",&art);
    printf("%d",&add);

}
