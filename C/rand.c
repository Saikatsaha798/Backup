#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,z;
    srand(time(0));
    for (i=0; i<=1000; i++)
    {
        z = rand();
        printf("%d\n", z);
    }

    return 0;
}