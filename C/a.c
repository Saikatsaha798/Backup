#include <stdio.h>

int main(){
    int arr[5] = {1,3,5,7,9};

    int i, j;

    for (i=0; i<5; i++){

        for (j=i; j<5; j++){
            printf("%d ", arr[j]);
        }

        for (j=0; j<i+; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");

    }
}