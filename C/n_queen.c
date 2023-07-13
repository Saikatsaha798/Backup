#include <stdio.h>
#define n 4

int is_safe(int arr[n][n], int x, int y)
{

    int i, j;

    for (i = 0; i <= x; i++)
    {
        if (arr[i][y] == 1)
        {
            return 0;
        }
    }

    i = x;
    j = y;

    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] == 1)
        {
            return 0;
        }
        i--;
        j--;
    }

    i = x;
    j = y;

    while (i >= 0 && j < n)
    {
        if (arr[i][j] == 1)
        {
            return 0;
        }
        i--;
        j++;
    }

    return 1;
}

int n_queen(int arr[n][n], int x)
{
    int i;

    if (x >= n)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        if (is_safe(arr, x, i))
        {
            arr[x][i] = 1;

            if (n_queen(arr, x + 1))
            {
                return 1;
            }

            arr[x][i] = 0;
        }
    }

    return 0;
}

int main()
{
    int arr[n][n], i, j, k, not_pos = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    printf("Solution : \n\n");

    for (k = 0; k < n; k++)
    {
        if (is_safe(arr, 0, k))
        {
            arr[0][k] = 1;

            if (n_queen(arr, 1))
            {
                not_pos = 0;

                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        printf("%d  ", arr[i][j]);
                    }
                    printf("\n\n");
                }

                printf("----------\n\n");
            }

            else
            {
                arr[0][i] = 0;
            }

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }

    if (not_pos)
    {
        printf("Not Possible !\n");
    }

    return 0;
}