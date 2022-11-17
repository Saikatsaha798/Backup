#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("Enter the 1st Side:\n");
    scanf("%f", &a);

    printf("Enter the 2nd Side:\n");
    scanf("%f", &b);

    printf("Enter the 3rd Side:\n");
    scanf("%f", &c);

    s = (a + b + c) / 2.0;

    area = sqrt(abs(s * (s - a) * (s - b) * (s - c)));

    printf("The Area Of Triangle : %f", area);
    return 0;
}