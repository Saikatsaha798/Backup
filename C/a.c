#include <stdio.h>
#include <string.h>
// #include <stdlib.h>

int main(){
    char str[100];
    int a=1, b=2;

    sprintf(str, "%d+%d\0", a, b);
    printf("%s", str);
}