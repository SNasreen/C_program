#include<stdio.h>
void main()
{
	char *username;
	char *password;

	printf("Enter the username: ");
	scanf("%s",username);
	printf("\nEnter the password: ");
	scanf("%s",password);
	{
	    if(strcmp(username, "user") == 0)
        {
		if(strcmp(password, "default") == 0)
		{
			printf("\nLogin sucess");
		}
		else
		{
			printf("\nLogin failed");
		}
	}
}
}
