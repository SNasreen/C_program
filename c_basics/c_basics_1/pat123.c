#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a];
    for(int i=0;i<a;i++)
    {
        int j=0;
        printf("0",arr[j][i]);
    }
    printf("\n");
    for(int i=0;i<a;i++)
    {
        int j=0;
        printf("0",arr[i][j]);
    }
    printf("\n");
    for(int i=0;i<a;i++)
    {
        int j=6;
        printf("0",arr[i][j]);
    }
    printf("\n");

}
