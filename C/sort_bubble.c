#include <stdio.h>

int main()
{
    int arr[100],n,i,j,t;

    printf("Enter the Number of Element in Array : ");
    scanf("%d", &n);

    printf("Enter the Elements : ");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    printf("The Array : ");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}