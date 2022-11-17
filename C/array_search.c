#include <stdio.h>

int main()
{
    int arr[100],i,n,item,count=0,locations[100];

    printf("Enter the no of elements in list : ");
    scanf("%d", &n);

    printf("Enter the elements with spaces : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the item to search : ");
    scanf("%d", &item);

    for(i=0; i<n; i++)
    {
        if (arr[i]==item)
        {
            locations[count++] = i;
        }
    }

    if (count!=0)
    {
        printf("The item was found %d times in : ", count);
        for(i=0; i<count; i++)
        {
            printf("%d ", locations[i]);
        }
    }
    else
    {
        printf("The item was not found.");
    }

    return 0;
}