#include <stdio.h>

int fac(int a)
{
    if (a<=1)
    {
        return 1;
    }

    else
    {
        return a*fac(a-1);
    }
}

int main()
{
    int a;

    printf("Enter the Number : ");
    scanf("%d", &a);

    printf("The factorial of %d : %d", a, fac(a));
    return 0;
}