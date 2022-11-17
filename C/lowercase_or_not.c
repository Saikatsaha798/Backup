# include <stdio.h>

int main()
{
    char a;

    printf("Enter the Character :\n");
    scanf("%c", &a);

    if (((int)a >= 97) && ((int) a <= 122))
    {
        printf("Yes, it is in lowercase !\n");
    }

    else
    {
        printf("No, it isn't in lowercase !\n");
    }
    return 0;
}