# include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);

    (((year%4 == 0) && (year%100 != 0)) || ((year%100 == 0) && (year%400 == 0)))? printf("The entered year is leap year (366 days).\n") : printf("The entered year is not a leap year (365 days).\n");
    return 0;
}