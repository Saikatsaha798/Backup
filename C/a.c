#include <stdio.h>
#include <string.h>
// #include <stdlib.h>

int main()
{
    char str[30];
    FILE *ptr;
    gets(str);
    ptr = fopen("a.txt", "w");
    fprintf(ptr, "%s", str);
    fclose(ptr);
}