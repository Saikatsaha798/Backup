#include <stdio.h>

int main()
{
    float f, c;

    printf("Enter the Temperature in F :\n");
    scanf("%f", &f);

    c = (((f - 32.0) * 5.0) / 9.0);

    printf("The Temperature in C :\n%f", c);

    return 0;
}