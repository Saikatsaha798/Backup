#include <stdio.h>
#include <string.h>
// #include <stdlib.h>


int main()
{
    char str[30] = "";
    int a=4;
    FILE *ptr;
    ptr = fopen("a.txt", "r");
    rewind(ptr);
    while (a--){
        fgets(str, 10000, ptr);
        printf("%s", str);
    }
}