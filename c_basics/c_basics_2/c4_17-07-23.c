#include<stdio.h>
#include<stdlib.h>

// Compare function used by qsort() to sort an array of chars
int compare (const void * a, const void * b)
{
    return (*(char *)a - *(char *)b);
}

// Function to match nuts and bolts
void matchPairs(char nuts[], char bolts[], int n)
{
    // Use quicksort to sort both nuts and bolts
    qsort(nuts, n, sizeof(char), compare);
    qsort(bolts, n, sizeof(char), compare);

    // Print out matched pairs
    printf("Matched pairs are:\n");
    for (int i = 0; i < n; i++)
        printf("%c %c\n", nuts[i], bolts[i]);
}

// Driver code
int main()
{
    int a;
    scanf("%d",&a);
    char nuts[a],bolts[a];
    scanf("%s %s",nuts,bolts);
    int n = sizeof(nuts) / sizeof(nuts[0]);
    matchPairs(nuts, bolts, n);
    return 0;
}

