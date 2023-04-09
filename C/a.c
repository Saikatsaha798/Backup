#include <stdio.h>

int main(){
    char s[] = "PAYPALISHIRING";
    int n = 2,i,j;
    switch(n){
        case 1:
            printf("%s", s);
            break;
        case 2:
            for (i=0; i<2; i++){
                for (j=i; j<14; j+=2){
                    printf("%c", s[j]);
                }
                printf("\n");
            }
            break;
        default:
            for (i=0; i<n; i++){
                
            }

    }
}