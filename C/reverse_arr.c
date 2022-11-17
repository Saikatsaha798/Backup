#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int l[n], m[n];

    for (i = 1; i <= n; i++)
    {
        printf("Enter the element %d : ", i);
        scanf("%d", &j);

        l[i-1] = j;
    }

    for (i = 0; i < n; i++)
    {
        m[i] = l[n-1-i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d , ", m[i]);
    }
    return 0;
}