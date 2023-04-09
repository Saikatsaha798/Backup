#include <stdio.h>

int quick(int arr[], int l, int r){
    int m_l = l, m_r = r-1, i,j, temp, p;
    p = r;

    if (l<r){
            while(m_l<=m_r){

                if (arr[m_l] == arr[m_r]){
                    break;
                }

                while(arr[m_l]<arr[p]){
                    m_l++;
                }
                while(arr[m_r]>arr[p]){
                    m_r--;
                }

                // printf("%d %d\n", m_l-l, m_r-l);

                if (m_l<m_r){
                    temp = arr[m_l];
                    arr[m_l] = arr[m_r];
                    arr[m_r] = temp;
                }

                // printf("The Elements : ");
                // for (i=l; i<=r; i++){
                //     printf("%d ", arr[i]);
                // }
                // printf("\n");
            }
            
            
            temp = arr[p];
            arr[p] = arr[m_l];
            arr[m_l] = temp;

            // printf("%d %d\n", m_l-l, m_r-l);
            // printf("The Elements : ");
            //     for (i=l; i<=r; i++){
            //         printf("%d ", arr[i]);
            //     }
            //     printf("\n");
            
                
            quick(arr, l, m_l-1);
            quick(arr, m_l+1, r);
        }
}

int main(){
    int n, i;
    // int arr[5] = {48, 15, 31, 78, 10};
    printf("Enter the Number of Elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the list : ");
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The Elements : ");
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    quick(arr, 0, n-1);
    printf("\nThe Elements : ");
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}