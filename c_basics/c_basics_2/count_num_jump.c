#include<stdio.h>
void jump(n)
{
    int count;
    while(n!=0)
    {
        if(n%2==0)
        {
            int sum=n/2;
            count++;
            n=sum;
        }
        else
        {
            int num=n-1;
            count++;
            n=num;
        }
    }
    printf("%d",count);

}
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    jump(n);
}
