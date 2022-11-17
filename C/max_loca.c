#include <stdio.h>

int main()
{   
    int arr[10], i, max, maxi;

    printf("Enter the Elements : ");
    for (i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i=0; i<10; i++)
    { 
        max = (max<arr[i])? arr[i]: max;
        if (max == arr[i])
        {
            maxi = i;
        }
    }

    printf("The Greatest among them : %d\n", max);
    printf("The location(index) it is at : %d", maxi);

    return 0;
}