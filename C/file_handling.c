#include <stdio.h>
#include <string.h>

int create_file(char txt[])
{
    FILE *ptr;
    char path[100];
    printf("Enter the File to CREATE : ");
    scanf("%s", &path);
    strcpy(txt, path);
    ptr = fopen(txt, "w");
    fclose(ptr);
    return 0;
}

// int add_data_file(char str[], int dt)

int main()
{
    // FILE *ptr;
    // int a = 71;
    // ptr = fopen("file_created.txt", "w");
    // fprintf(ptr, "%d", a);
    // fclose(ptr);

    char txt[100];
    create_file(txt);
    printf("1\t%s", txt);

    return 0;
}