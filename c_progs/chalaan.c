#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int c_2000,c_500,c_100,c_10,c_5,c_1;
    c_2000=n/2000;
    n=n%2000;
    printf("Number of 2000 %d\n",c_2000);
    c_500=n/500;
    n=n%500;
    printf("Number of 500 %d\n",c_500);
    c_100=n/100;
    n=n%100;
    printf("Number of 100 %d\n",c_100);
    c_10=n/10;
    n=n%10;
    printf("Number of 10 %d\n",c_10);
    c_5=n/5;
    n=n%5;
    printf("Number of 5 %d\n",c_5);
    c_1=n/1;
    n=n%1;
    printf("Number of 1 %d\n",c_1);
}
