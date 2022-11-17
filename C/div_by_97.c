#include<stdio.h>

int main(){
    int a;
    printf("Enter the Number :\n");
    scanf("%d", &a);
    if (a%97==0){
        printf("The entered number is divisible by 97 !");
    }

    else{
        printf("The entered number is not divisible by 97 !");
    }
}