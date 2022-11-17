#include <stdio.h>

int main()
{
    int arr[100],i,n;

    printf("Enter the no of elements in list : ");
    scanf("%d", &n);

    printf("Enter the elements with spaces : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The reversed array : ");
    for(i=n-1; i>-1; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}