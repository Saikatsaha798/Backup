#include <stdio.h>

int fun(int * a){
    printf("%d %d", a, *a);
}

int main() {
    int * a=9;
    fun(a);
}