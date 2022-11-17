#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    int i;
    p = (float *) calloc(5, sizeof(float));
    // printf("%d", p);
    for (i = 0; i < 5; i++)
    {
        printf("Enter the %dth element :  ", i+1);
        scanf("%f", &p[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("The %dth element : %f\n",i+1, p[i]);
    }

    p = realloc(p, 10*sizeof(float));

    for (i = 5; i < 10; i++)
    {
        printf("Enter the %dth element :  ", i+1);
        scanf("%f", &p[i]);   
    }
    for (i = 0; i < 10; i++)
    {
        printf("The %dth element : %f\n",i+1, p[i]);
    }
    return 0;
}