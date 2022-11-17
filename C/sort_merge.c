#include <stdio.h>

int merge(int *arr, int l, int r)
{
    
    int arr_l[(r-l)/2+1], arr_r[(r-l)/2+1], i, j, k, mid, n_l=0, n_r=0;

    mid = l + (r-l)/2;

    for(i=l; i<=mid; i++)
    {
        arr_l[n_l++] = arr[i];
    }
    
    for(i=mid+1; i<=r; i++)
    {
        arr_r[n_r++] = arr[i];
    }
    // printf("The Elements : ");
    // for (i=0; i<n_l; i++)
    // {
    //     printf("%d ", arr_l[i]);
    // }

    // printf("The Elements : ");
    // for (i=0; i<n_r; i++)
    // {
    //     printf("%d ", arr_r[i]);
    // }

    k = l;
    i = 0;
    j = 0;

    while (i<n_l && j<n_r)
    {
        if (arr_l[i]<arr_r[j])
        {
            arr[k++] = arr_l[i++];
        }

        else
        {
            arr[k++] = arr_r[j++];
        }
    }

    while(i<n_l)
    {
        arr[k++] = arr_l[i++];
    }

    while(j<n_r)
    {
        arr[k++] = arr_r[j++];
    }

    // printf("The Elements : ");
    // for (i=l; i<=r; i++)
    // {
    //     printf("%d ", i);
    // }
    // printf("\n");

}

int merge_sort(int *arr, int l, int r)
{
    if (l<r)
    {
        int mid = l + (r-l)/2, i;

        // printf("The Elements : ");
        // for (i=l; i<=r; i++)
        // {
        //     printf("%d ", i);
        // }
        // printf("\n");

        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, r);

        merge(arr, l , r);
    }
    return 0;
}


int main()
{
    int arr[100], n, i;

    printf("Enter the Number of Elements : ");
    scanf("%d", &n);

    printf("Enter the Elements : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, n-1);

    printf("The Elements : ");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}