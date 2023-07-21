#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int len;
    scanf("%[^\n]s", s);
    len = strlen(s);
    int i, count = 0;
    for(i = len - 1; i >= 0; i--)
    {
        if(s[i] == ' ')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    printf("Length of last word is %d\n",count);

    return 0;
}
