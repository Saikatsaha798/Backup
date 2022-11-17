#include <stdio.h>

int main()
{
    int a[5] = {1,3,4,5,2};
    int i, j, t;

    for (j=0; j<5; j++)
    {
        for (i=0; i<4; i++)
        {
            if (a[i]>a[i+1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }

    for (i=0; i<5; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}