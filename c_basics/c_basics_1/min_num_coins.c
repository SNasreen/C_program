#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int amount, coinCount = 0;
   printf("Enter the amount: ");
   scanf("%d", &amount);

   for (int i = n - 1; i >= 0; i--)
    {
      if(amount >= arr[i])
      {
         amount -= arr[i];
         coinCount++;
      }
   }

   printf("%d", coinCount);

   return 0;
}
