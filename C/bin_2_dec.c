#include <stdio.h>
#include <math.h>

int main()
{
    int b, d, p, w;
    p = 0;

    printf("Enter the Number (Binary) :\n");
    scanf("%d", &b);

    d = 5;
    w = b;

    if (b == 0)
    {
        d = 0;
    }

    while (w != 0)
    {
        if (d != 5)
        {
            d = ((w % 10) * (pow(2, p))) + d;
            w = (w - (w % 10)) / 10;
            p += 1;
        }

        else
        {
            d = (w % 10) * (pow(2, p));
            w = (w - (w % 10)) / 10;
            p += 1;
        }
    }

    printf("The Decimal Number : %d", d);
    return 0;
}