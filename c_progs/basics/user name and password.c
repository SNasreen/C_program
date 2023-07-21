#include<stdio.h>
void main()
{
    char *a;
    char *b;
    char u[4]="user";
    int p=0777;
    printf("enter username\n");
    scanf("%s",&a);
    printf("enter password\n");
    scanf("%d",&b);
    if(strcmp(a,"user"))
    {
        printf("Login success");
    }
    else
    {
        printf("Login Failed");
    }


}
