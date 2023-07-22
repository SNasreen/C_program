#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    //7 0 4 2 5 0 6 4 0 5
    int x=0,ind=0,s=0,in=0,pos=0;
    int temp,count=0,max=0,res,smax=0,emax=0,fmax=0;
    int rem=0,count1=0;
    int result;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=x;i<a;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            in=i;
        }
    }

    for(int i=x;i<a;i++)
    {
        if(arr[i]>smax && i!=in)
        {
            smax=arr[i];
            pos=i+1;
        }
    }
    printf("%d\n",pos);
    for(int i=in+1;i<pos;i++)
    {
        res=arr[pos]-i;
        count=res+count;
    }

    for(int i=pos;i<a;i++)
    {
        if(arr[i]>emax)
        {
            emax=arr[i];
            ind=i;
        }
    }
    for(int i=pos;i<a;i++)
    {
        if(arr[i]>fmax && i!=ind)
        {
            emax=arr[i];
            s=i;
        }
    }
    for(int i=s;i<ind;i--)
    {
        rem=arr[s]-i;
        count1=rem+count1;
    }
    result=count+count1;
    printf("%d\n",count);
    printf("%d\n",count1);
    printf("%d",result);

}
