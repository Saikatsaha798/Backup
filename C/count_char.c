#include <stdio.h>

int main()
{
    int length;

    char s[] = "Learning C Language";

    for (length = 0; s[length] != '\0'; length++);

    printf("The Number of Characters :\n%d", length);
}