#include<stdio.h>
int main()
{
    char symbol[]={'I','V','X','L','C','D','M'};
    int val[]={1,5,10,50,100,500,1000};
    int x,k=0,flag=0;
    scanf("%d",&x);
    char res[100];
    int size=sizeof(val)/sizeof(val[0]);
    if(x==4 || x==9 || x==40 || x==90 || x==400 || x==900)
    {
        for(int i=size-1;i>=0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(val[i]-val[j]==x)
                {
                    res[k++]=symbol[j];
                    res[k++]=symbol[i];
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
    else
    {


        for(int i=size-1;i>=0;i--)
        {
            if(x>=val[i])
            {
                res[k++]=symbol[i];
                x=x-val[i];
            }
            if(x==0)
            {
                break;
            }
        }
    }
    res[k]='\0';
    printf("%s",res);


}
