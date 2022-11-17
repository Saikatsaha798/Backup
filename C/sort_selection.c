#include <stdio.h>

int main()
{
    int arr[100],n,i,j,m,t;

    printf("Enter the No of Elements in Array : ");
    scanf("%d", &n);

    printf("Enter the Array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        m = i;
        for(j=m+1; j<n; j++)
        {
            if (arr[j]<arr[m])
            {
                m = j;
            }
        }
        
        t = arr[i];
        arr[i] = arr[m];
        arr[m] = t;

    }

    printf("The Array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}