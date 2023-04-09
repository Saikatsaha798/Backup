#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stud{
    int roll;
    char name[50];
    int marks;
};

int merge(struct stud *arr, int l, int r, int ch)
{
    
    int i, j, k, mid, n_l=0, n_r=0, a,b,c;

    struct stud arr_l[(r-l)/2+1], arr_r[(r-l)/2+1];

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
        switch (ch)
        {
        case 1:
            a = arr_l[i].roll;
            b = arr_r[j].roll;
            c = a<b;
            break;
        
        case 2:
            a = arr_l[i].marks;
            b = arr_r[j].marks;
            c = a>b;
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

int merge_sort(struct stud *arr, int l, int r, int ch)
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

        merge_sort(arr, l, mid, ch);
        merge_sort(arr, mid+1, r, ch);

        merge(arr, l , r, ch);
    }
    return 0;
}


int main()
{
    int n, i, ch;

    printf("Enter the Number of Elements : ");
    scanf("%d", &n);

    struct stud arr[n];

    for (i=0; i<n; i++)
    {
        printf("\n STUDENT %d -\n", i+1);
        printf("Enter the ROLL for student %d : ", i+1);
        scanf("%d", &arr[i].roll);
        printf("Enter the NAME for student %d : ", i+1);
        scanf("%s", arr[i].name);
        // gets(arr[i].name);
        printf("Enter the MARKS for student %d : ", i+1);
        scanf("%d", &arr[i].marks);
    }

    printf("\n Enter the Order : \n"
    "1. By ROll (ascending)\n"
    "2. By MARKS (descending)\n"
    "Enter the Choice : ");
    scanf("%d" , &ch);

    merge_sort(arr, 0, n-1, ch);

    printf("\nThe Elements : \n");
    for (i=0; i<n; i++)
    {
        printf("%d  %s %d\n", arr[i].roll, arr[i].name, arr[i].marks);
    }

    return 0;
}