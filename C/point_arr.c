#include <stdio.h>

int main()
{
    int s[10] = {0,1,2,10,4,5,6,7,8,9};

    int *ptr = &s[0];

    printf("%d", *ptr+3);
    return 0;
}