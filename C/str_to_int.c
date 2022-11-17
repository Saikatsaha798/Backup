#include <stdio.h>
// #include <math.h>
#include <stdlib.h>
#include <string.h>

// 5,6,2,+,*,12,4,/,-

int main(){
    char str[10], st[10];
    int num = 0, i=0, j=0;

    printf("Enter Int : ");
    scanf(" %s", &str);

    while (str[i] != '\0'){
        // printf("%c\n", str[i]);
        if (str[i] != ','){
            st[j] = str[i];
            j++;
        }
        else{
            st[j] = '\0';
            printf("%d\n", atoi(st));
            j=0;
        }
        i++;
    }

    // printf("Number : %d", num);
}