#include <stdio.h>

struct job
{
    int no;
    int profit;
    int time;
};

int max(struct job *arr, int n)
{
    int i, max = 0;

    for (i = 0; i < n; i++)
    {
        max = (arr[i].time > max) ? arr[i].time : max;
    }

    return max;
}

int merge(struct job *arr, int l, int r)
{

    int i, j, k, mid, n_l = 0, n_r = 0, a, b, c = 0;

    struct job arr_l[(r - l) / 2 + 1], arr_r[(r - l) / 2 + 1];

    mid = l + (r - l) / 2;

    for (i = l; i <= mid; i++)
    {
        arr_l[n_l++] = arr[i];
    }

    for (i = mid + 1; i <= r; i++)
    {
        arr_r[n_r++] = arr[i];
    }

    k = l;
    i = 0;
    j = 0;

    while (i < n_l && j < n_r)
    {
        if (arr_l[i].profit > arr_r[j].profit)

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
}

int merge_sort(struct job *arr, int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2, i;

        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l, r);
    }
    return 0;
}

int job_scheduling(struct job *arr, int x_arr[], int n, int m)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        if (x_arr[arr[i].time - 1] == -1)
        {
            x_arr[arr[i].time - 1] = i;
        }

        else
        {
            for (j = arr[i].time - 2; j >= 0; j--)
            {
                if (x_arr[j] == -1)
                {
                    x_arr[j] = i;
                }
            }
        }
    }
}

int main()
{
    int n, i, ch, m, tot_pro = 0;

    printf("Enter the Number of Items : ");
    scanf("%d", &n);

    struct job arr[n];

    for (i = 0; i < n; i++)
    {
        printf("\n ITEM %d -\n", i + 1);
        arr[i].no = i + 1;
        printf("Enter the PROFIT : ");
        scanf("%d", &arr[i].profit);
        printf("Enter the DEADLINE : ");
        scanf("%d", &arr[i].time);
    }

    m = max(arr, n);
    int x_arr[m];

    for (i = 0; i < n; i++)
    {
        x_arr[i] = -1;
    }

    merge_sort(arr, 0, n - 1);

    job_scheduling(arr, x_arr, n, m);

    printf("\n");

    for (i = 0; i < m; i++)
    {
        if (i == m - 1)
        {
            printf("%d (Profit : %d) (DAY %d)", arr[x_arr[i]].no, arr[x_arr[i]].profit, i + 1);
            tot_pro += arr[x_arr[i]].profit;
        }
        else
        {
            printf("%d (Profit : %d) (DAY %d) -->", arr[x_arr[i]].no, arr[x_arr[i]].profit, i + 1);
            tot_pro += arr[x_arr[i]].profit;
        }
    }

    printf("\nTotal Profit VALUE : %d", tot_pro);

    return 0;
}