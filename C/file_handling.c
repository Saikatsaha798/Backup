#include <stdio.h>
#include <string.h>

int create_file(char txt[])
{
    FILE *ptr;
    char path[100];
    printf("Enter the file to CREATE : ");
    scanf(" %s", &path);
    strcpy(txt, path);
    ptr = fopen(txt, "w");
    fclose(ptr);
    printf("File created !\n");
    return 0;
}

int add_data_file(char txt[])
{
    int c;
    char ch, str[100];
    strcpy(str, txt);

    if (str[0] != '\0')
    {
        printf("Do you want to use current file (%s) ? (y/n) : ", str);
        scanf(" %c", &ch);

        if (ch != 'y')
        {
            strcpy(str, "");
            printf("File path reset !\n");
        }
    }

    if (str[0] == '\0')
    {
        printf("Enter existing file to use : ");
        scanf(" %s", &str);
        strcpy(txt, str);
        printf("File added to path !\n");
    }

    printf("Which datatype to add?\n"
    "1. Integer\n"
    "2. Float\n"
    "3. String\n"
    "Enter Choice : ");

    scanf("%d", &c);

    FILE *ptr;
    ptr = fopen(str, "a");

    switch (c)
    {
    case 1:
        int dataInt;

        printf("Enter integer : ");
        scanf("%d", &dataInt);

        fprintf(ptr, "%d", dataInt);
        break;

    case 2:
        float dataFlt;

        printf("Enter decimal number : ");
        scanf("%f", &dataFlt);

        fprintf(ptr, "%f", dataFlt);
        break;

    case 3:
        char dataStr[1000];

        fflush(stdin);
        printf("Enter text : ");
        gets(dataStr);

        fprintf(ptr, "%s", dataStr);
        break;

    default:
        printf("Wrong Choice !\n");
        break;
    }

    fclose(ptr);
    return 0;
}

int main()
{
    // FILE *ptr;
    // int a = 71;
    // ptr = fopen("file_created.txt", "w");
    // fprintf(ptr, "%d", a);
    // fclose(ptr);

    char txt[100] = "";

    create_file(txt);
    add_data_file(txt);

    return 0;
}