#include <stdio.h>

int main()
{
    int i,j,k;
    int ar[3][3][2] = {
        {{1,-1},{2,-2},{3,-3}},
        {{4,-4},{5,-5},{6,-6}},
        {{7,-7},{8,-8},{9,-9}}
    };


    printf("%d\n", sizeof(ar[0][0][0]));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%u : %d\n", &ar[i][j][k], ar[i][j][k]);
            }
        }
    }
    return 0;
}