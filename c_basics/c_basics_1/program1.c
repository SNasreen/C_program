#include<stdio.h>
void main()
{
    int a=6,i,j;
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(a<2)
    {
        return;
    }
    int max_prod,m_i,m_j;
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(max_prod<arr[i]*arr[j])
            {
                max_prod=arr[i]*arr[j];
                m_i=i,m_j=j;
            }
        }
    }
    printf("%d %d",arr[m_i],arr[m_j]);

}
