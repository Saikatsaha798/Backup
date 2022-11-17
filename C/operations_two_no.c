#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter the 1st Number :\n");
    scanf("%f", &a);

    printf("Enter the 2nd Number :\n");
    scanf("%f", &b);

    printf("The sum (a+b) of Two Numbers :\n%f\n", a + b);

    printf("The Difference (a-b) of Two Numbers :\n%f\n", a - b);

    printf("The sum (a/b) of Two Numbers :\n%f\n", a / b);

    printf("The Product (a*b) of Two Numbers :\n%f\n", a * b);

    return 0;
}