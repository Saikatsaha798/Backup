#include <stdio.h>
#include <math.h>

int main()
{
    int r, h;
    printf("Enter the radius :\n");
    scanf("%d", &r);

    printf("The area of the circle :\n%f\n", 3.14 * pow(r, 2));

    printf("Enter the height :\n");
    scanf("%d", &h);

    printf("The volume of the cylinder :\n%f", 3.14 * pow(r, 2) * h);
    return 0;
}