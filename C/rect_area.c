#include<stdio.h>

int main(){
    int l = 1;
    int b = 2;
    printf("The area of hardcoded rect :\n%d\n", l*b);

    printf("Enter the length :\n");
    scanf("%d", &l);
    printf("Enter the breadth :\n");
    scanf("%d", &b);

    printf("The area of entered rect :\n%d", l*b);
    return 0;
    
}