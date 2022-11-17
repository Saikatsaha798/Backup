#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the 1st Number (a) \n");
    scanf("%d", &a);9+
    printf("Enter the 2nd Number (b) \n");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("The Value of 1st Number (a) : %d\n", a);
    printf("The Value of 2nd Number (b) : %d", b);

}