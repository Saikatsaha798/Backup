#include <stdio.h>

int gcd(int a, int b)
{
    int i, min, g;
    min = (a<b)? a: b;

    for(i=2; i<=min; i++)
    {
        if ((a%i==0) && (b%i==0))
        {
            g = i;
        }
    }

    return g;
}

int lcm(int a, int b)
{
    int g = gcd(a,b);
    return (a*b)/g;
}

int main()
{
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);

    printf("The GCD of %d and %d : %d\n", a, b, gcd(a,b));
    printf("The LCM of %d and %d : %d", a, b, lcm(a,b));

    return 0;
}