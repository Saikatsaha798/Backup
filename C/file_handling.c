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

    FILE *ptr;
    ptr = fopen(str, "a");

    char dataStr[10000];

    fflush(stdin);
    printf("Enter data to enter:\n->\t");
    gets(dataStr);

    fprintf(ptr, "%s\n", dataStr);

    fclose(ptr);
    return 0;
}

int read_data_file(char txt[])
{
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

    FILE *ptr;
    ptr = fopen(str, "r");

    char dataStr[10000], charac;
    rewind(ptr);

    printf("Data fetched :\n->");

    while (getc(ptr) != EOF)
    {

        fseek(ptr, -1, SEEK_CUR);
        fgets(dataStr, 10000, ptr);
        printf("\t%s", dataStr);
    }
    printf("\n");
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

    char txt[100] = "", run = 'y';
    int c;

    while (run == 'y')
    {
        printf("\nMENU :\n"
               "1. Create file\n"
               "2. Add data to file\n"
               "3. Read data from file\n"
               "4. Exit\n"
               "Enter choice : ");

        fflush(stdin);
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            create_file(txt);
            break;

        case 2:
            add_data_file(txt);
            break;

        case 3:
            read_data_file(txt);
            break;

        case 4:
            run = 'n';
            printf("Thanks for using !\n");
            break;

        default:
            printf("Wrong Choice !\n");
            break;
        }
    }
    return 0;
}