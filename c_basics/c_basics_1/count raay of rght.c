#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int n[a];
    int i;
    printf("Enter the numbers:\n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        int count=0;
        for(int j=i+1;j<a;j++)
        {
            if(n[i]>n[j])
            {
                count++;
            }
        }
        printf("%d ",count);
    }


}
