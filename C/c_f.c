#include<stdio.h>

int main(){
    float c,f;
    printf("Enter the Temperature in C :\n");
    scanf("%f", &c);

    f = (c*9/5)+32;

    printf("The Temperature in F :\n%f", f);
    return 0;
}