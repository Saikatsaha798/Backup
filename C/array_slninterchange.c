#include <stdio.h>

int main()
{
    int arr[100],i,n,max,maxi,min,mini;

    printf("Enter the no of elements in list : ");
    scanf("%d", &n);

    printf("Enter the elements with spaces : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    maxi = 0;
    min = arr[0];
    mini = 0;

    for(i=1; i<n; i++)
    {
        maxi = (max<arr[i])? i : maxi;
        max = arr[maxi];
        mini = (min>arr[i])? i : mini;
        min = arr[mini];
    }
    arr[maxi] = min;
    arr[mini] = max;

    printf("Smallest element : %d\n", min);
    printf("Largest element : %d\n", max);
    
    printf("The array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}