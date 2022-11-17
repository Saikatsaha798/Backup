#include <stdio.h>

int fac(int a)
{
    int i,f=1;
    for (i=a; i>0; i--)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int a;

    printf("Enter the Number : ");
    scanf("%d", &a);

    printf("The factorial of %d : %d", a, fac(a));
    return 0;
}