#include<stdio.h>

int main(){
    int p,r,t;

    printf("Enter the Principle :\n");
    scanf("%d", &p);

    printf("Enter the Rate of Interest (%) :\n");
    scanf("%d", &r);

    printf("Enter the Time Period :\n");
    scanf("%d", &t);

    printf("The Simple Interest Calculated :\n%d", p*r*t/100);
    return 0;
}