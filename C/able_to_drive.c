#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age : \n");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You can't drive because you are too young to drive and can't get a driver's license! \n");
    }

    else if (age >= 18 && age <= 90)
    {
        printf("You can drive! \n");
    }

    else if (age > 90)
    {
        printf("You can't drive because you are too old to drive! ");
    }
    return 0;
}