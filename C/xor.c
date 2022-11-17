#include <stdio.h>

int main()
{
    int i=1,j=1;
    for (j; j<=100; j++)
    {

        for (i; i<=100; i++)
        {
            printf("%d\t%d\t%d\t%d\n", i, j, i^j, i&j);
        }
        printf("\n\n");
    }
    return 0;
}