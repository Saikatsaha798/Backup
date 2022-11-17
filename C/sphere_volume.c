#include <stdio.h>

int main()
{
    float r;
    printf("Enter the Radius :\n");
    scanf("%f", &r);
    printf("The Volume of Sphere : %f", (4.0 / 3.0) * 3.14 * (r * r * r));
    return 0;
}