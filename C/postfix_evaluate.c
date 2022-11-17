#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100], st[100];
    int stack[100], num, i=0, j=0, k=0, tos = -1;

    printf("Enter the POSTFIX expression : ");
    scanf(" %s", &str);

    while (str[i] != '\0'){
        switch (str[i])
        {
        case ',':
            if (j>0){
                st[j] = '\0';
                stack[++tos] = atoi(st);
                j=0;
            }
            break;

        case '+':
            stack[--tos] = stack[tos-1] + stack[tos];
            break;

        case '-':
            stack[--tos] = stack[tos-1] - stack[tos];
            break;

        case '/':
            stack[--tos] = stack[tos-1] / stack[tos];
            break;

        case '*':
            stack[--tos] = stack[tos-1] * stack[tos];
            break;
        
        default:
            st[j] = str[i];
            j++;
            break;
        }

        // printf("%c\t%d\t%s\t", str[i], tos, st);         // DEBUGGER
        // for(k=0; k<=tos; k++){
        //     printf("%d\t", stack[k]);
        // }
        // printf("\n");

        i++;
    }

    printf("Answer : %d", stack[tos]);

}