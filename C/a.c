#include <stdio.h>
#include <string.h>
// #include <stdlib.h>

int sts(char str[]){
    strcpy(str, "aaa");
}

int main(){
    char str[30] = "tts";
    sts(str);
    printf("%s", str);
    
}