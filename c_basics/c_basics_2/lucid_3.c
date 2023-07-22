#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    int d=0,i=0,rem;
    scanf("%lld", &n);
    while (n!= 0)
    {
        rem=n%10;
        n/= 10;
        d+=rem*pow(2,i);
        ++i;
    }
    printf("Decimal Number \n %d", d);
    return 0;
}
