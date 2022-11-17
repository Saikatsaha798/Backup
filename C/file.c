#include <stdio.h>

int main()
{
    FILE *f1;
    f1 = fopen("a.txt","w");
    fprintf(f1, "The value passed...");
    fclose(f1);

    f1 = fopen("a.txt", "r");

    char c = fgetc(f1);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(f1);
    }
    return 0;
}