#include <stdio.h>

int main()
{
    int arr[100],i,n,k,item;

    printf("Enter the no of elements in list : ");
    scanf("%d", &n);

    printf("Enter the elements with spaces : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the item and its position to enter : ");
    scanf("%d %d", &item, &k);

    for (i=n-1; i>=k; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[k] = item;
    n++;

    printf("The array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}