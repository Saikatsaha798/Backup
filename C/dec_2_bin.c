#include <stdio.h>
#include <math.h>

int main()
{
    int b, d, p, w;
    p = 0;
    b = 5;
    printf("Enter the Number(Decimal)\n");
    scanf("%d", &d);

    w = d;

    if (w == 0)
    {
        b = 0;
    }

    while (w != 0)
    {
        if (b != 5)
        {
            if (w == 1)
            {
                b = pow(10, p) * (w % 2) + b;
                w = 0;
                break;
            }
            b = pow(10, p) * (w % 2) + b;
            w = (w - (w % 2)) / 2;
            p += 1;
        }

        else
        {
            if (w == 1)
            {
                b = 1;
                w = 0;
                break;
            }
            b = w % 2;
            w = (w - b) / 2;
            p += 1;
        }
    }

    printf("The Number(Binary) is %d", b);
    return 0;
}