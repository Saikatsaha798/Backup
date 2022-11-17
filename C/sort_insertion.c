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
    for (i=1; i<n; i++)
    {
        t = arr[i];
        j = i-1;
        while(arr[j]>t && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = t;
    }

    printf("The Array : ");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}