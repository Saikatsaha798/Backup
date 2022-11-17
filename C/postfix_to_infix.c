#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100], st[100], exp_infix[100], number[100], buffer[100];
    int stack[100], num, i=0, j=0, k=0, tos = -1;
    exp_infix[0] = '\0';

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
            if (exp_infix[0] == '\0'){
                sprintf(exp_infix, "(%d+%d)\0", stack[tos-1], stack[tos]);
                tos-=2;
            }
            else{
                sprintf(number, "%d\0", stack[tos]);
                strcpy(buffer, exp_infix);
                strcpy(exp_infix, "(\0");
                strcat(exp_infix, buffer);
                strcat(exp_infix, "+");
                strcat(exp_infix, number);
                strcat(exp_infix, ")");     
                tos--;
            }
            break;

        case '-':
            if (exp_infix[0] == '\0'){
                sprintf(exp_infix, "(%d-%d)\0", stack[tos-1], stack[tos]);
                tos-=2;
            }
            else{
                sprintf(number, "%d\0", stack[tos]);
                strcpy(buffer, exp_infix);
                strcpy(exp_infix, "(\0");
                strcat(exp_infix, buffer);
                strcat(exp_infix, "-");
                strcat(exp_infix, number);
                strcat(exp_infix, ")");     
                tos--;
            }
            break;

        case '/':
            if (exp_infix[0] == '\0'){
                sprintf(exp_infix, "(%d/%d)\0", stack[tos-1], stack[tos]);
                tos-=2;
            }
            else{
                sprintf(number, "%d\0", stack[tos]);
                strcpy(buffer, exp_infix);
                strcpy(exp_infix, "(\0");
                strcat(exp_infix, buffer);
                strcat(exp_infix, "/");
                strcat(exp_infix, number);
                strcat(exp_infix, ")");     
                tos--;
            }
            break;

        case '*':
            if (exp_infix[0] == '\0'){
                sprintf(exp_infix, "(%d*%d)\0", stack[tos-1], stack[tos]);
                tos-=2;
            }
            else{
                sprintf(number, "%d\0", stack[tos]);
                strcpy(buffer, exp_infix);
                strcpy(exp_infix, "(\0");   
                strcat(exp_infix, buffer);
                strcat(exp_infix, "*");
                strcat(exp_infix, number);
                strcat(exp_infix, ")");     
                tos--;
            }
            break;
        
        default:
            st[j] = str[i];
            j++;
            break;
        }

        // printf("%d\t%s\t", tos, exp_infix);         // DEBUGGER
        // for(k=0; k<=tos; k++){
        //     printf("%d\t", stack[k]);
        // }
        // printf("\n");

        i++;
    }

    printf("Infix Form : %s", exp_infix);
    return 0;

}