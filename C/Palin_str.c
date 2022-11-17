#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], pal[50];
    int n,i;

    printf("Enter the String : ");
    scanf("%s", str);

    n = strlen(str);

    for (i=0; i<n; i++)
    {
        pal[i] = str[n-i-1];
    }
    pal[i]='\0';

    if (!strcmp(str,pal))
    {
        printf("The string is Palindrome.");
    }
    else
    {
        printf("The string is not Palindrome.");
    }

    return 0;
}