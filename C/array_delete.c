#include <stdio.h>

int main()
{
    int arr[100],i,n,k;

    printf("Enter the no of elements in list : ");
    scanf("%d", &n);

    printf("Enter the elements with spaces : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of item to delete : ");
    scanf("%d", &k);

    for (i=k; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    printf("The array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}