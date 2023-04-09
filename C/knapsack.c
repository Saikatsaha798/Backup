#include <stdio.h>

struct item
{
    int no;
    int weight;
    int value;
    float value_weight;
};

int merge(struct item *arr, int l, int r, int ch)
{

    int i, j, k, mid, n_l = 0, n_r = 0, a, b, c = 0;

    struct item arr_l[(r - l) / 2 + 1], arr_r[(r - l) / 2 + 1];

    mid = l + (r - l) / 2;

    for (i = l; i <= mid; i++)
    {
        arr_l[n_l++] = arr[i];
    }

    for (i = mid + 1; i <= r; i++)
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

    while (i < n_l && j < n_r)
    {
        switch (ch)
        {
        case 1:
            a = arr_l[i].no;
            b = arr_r[j].no;
            c = a < b;
            break;

        case 2:
            a = arr_l[i].weight;
            b = arr_r[j].weight;
            c = a < b;
            break;

        case 3:
            a = arr_l[i].value;
            b = arr_r[j].value;
            c = a > b;
            break;

        case 4:
            a = arr_l[i].value_weight;
            b = arr_r[j].value_weight;
            c = a > b;
            break;

        default:
            printf("Wrong Choice !\n");
            return 0;
            break;
        }
        if (c)
        {
            arr[k++] = arr_l[i++];
        }

        else
        {
            arr[k++] = arr_r[j++];
        }
    }

    while (i < n_l)
    {
        arr[k++] = arr_l[i++];
    }

    while (j < n_r)
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

int merge_sort(struct item *arr, int l, int r, int ch)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2, i;

        // printf("The Elements : ");
        // for (i=l; i<=r; i++)
        // {
        //     printf("%d ", i);
        // }
        // printf("\n");

        merge_sort(arr, l, mid, ch);
        merge_sort(arr, mid + 1, r, ch);

        merge(arr, l, r, ch);
    }
    return 0;
}


int knapsack(struct item arr[], float x_arr[], int n, int size){
    int i, used_weight = 0;
    for (i=0; i<n; i++){
        if (used_weight + arr[i].weight <= size){
            x_arr[i] = 1.00;
            used_weight += arr[i].weight;
        }
        else {
            x_arr[i] = (float) (size - used_weight)/arr[i].weight;
            used_weight = size;
        }

        if (size == used_weight){
            return i+1;
        }

    }
}

int main()
{
    int n, i, ch, x, size, tot_val = 0;

    printf("Enter the Number of Items : ");
    scanf("%d", &n);

    struct item arr[n];
    float x_arr[n];

    for (i = 0; i < n; i++)
    {
        printf("\n ITEM %d -\n", i + 1);
        arr[i].no = i + 1;
        printf("Enter the WEIGHT : ");
        scanf("%d", &arr[i].weight);
        printf("Enter the VALUE : ");
        scanf("%d", &arr[i].value);
        arr[i].value_weight = (float) arr[i].value / arr[i].weight;
    }

    printf("\n Enter the Order : \n"
           "1. By ITEM NO (ascending)\n"
           "2. By WEIGHT (ascending)\n"
           "3. By VALUE (descending)\n"
           "4. By VALUE/WEIGHT (descending)\n"
           "Enter the Choice : ");
    scanf("%d", &ch);

    merge_sort(arr, 0, n - 1, ch);

    printf("Enter the KNAPSACK size : ");
    scanf("%d", &size);

    x = knapsack(arr, x_arr, n, size);

    printf("\n");

    for (i=0; i<x; i++){
        if (i == x-1){
            printf("%d (x%d = %.2f) (v%d = %.2f)", arr[i].no, i+1, x_arr[i], i+1, x_arr[i]*arr[i].value);
            tot_val += x_arr[i]*arr[i].value;
        }
        else{
            printf("%d (x%d = %.2f) (v%d = %.2f) --> ", arr[i].no, i+1, x_arr[i], i+1,  x_arr[i]*arr[i].value);
            tot_val += x_arr[i]*arr[i].value;
        }
    }

    printf("\nTotal Knapsack VALUE : %d", tot_val);

    // printf("\nThe Elements : \n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\t%d\t%d\t%f\n", arr[i].no, arr[i].weight, arr[i].value, arr[i].value_weight);
    // }

    return 0;
}