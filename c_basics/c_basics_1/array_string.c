#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char arr[50];
        scanf("%s",arr);
        char temp;
        int len=strlen(arr);
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(i==i+1)
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                if(i==arr[j])
                {
                    printf("-1");
                }
            }
                printf("%s",arr[i]);
        }
    }
}
