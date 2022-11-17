#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, t, area;

    printf("Enter the 1st Number :\n");
    scanf("%f", &a);

    printf("Enter the 2nd Number :\n");
    scanf("%f", &b);

    printf("Enter the Angle Between Sides (Multiple of Pi) :\n");
    scanf("%f", &t);

    area = a * b * abs(sin(t * M_PI));

    printf("The Area of the Parallelogram :\n%.2f", area);

    return 0;
}