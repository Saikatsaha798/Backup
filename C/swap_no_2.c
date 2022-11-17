#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the 1st Number (a) \n");
    scanf("%d", &a);9+
    printf("Enter the 2nd Number (b) \n");
    scanf("%d", &b);

    a = a + b;
    b = a - b; // b = a + b - b = a
    a = a - b; // a = a + b - a = b

    printf("The Value of 1st Number (a) : %d\n", a);
    printf("The Value of 2nd Number (b) : %d", b);
    return 0;
}