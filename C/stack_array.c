#include <stdio.h>

int push(int stack[], int tos){
    int num;
    printf("Enter the Element : ");
    scanf("%d", &num);
    if (tos<99){
        stack[++tos] = num;
        printf("Pushed\n");
    }
    else{
        printf("OverFlow\n");
    }
    return tos;
}

int pop(int stack[], int tos){
    int num;
    if (tos>-1){
        tos--;
        printf("Poped\n");
    }
    else{
        printf("UnderFlow\n");
    }
    return tos;
}

int print(int stack[], int tos){
    int i;
    if (tos == -1){
        printf("UnderFlow");
    }
    else{
        printf("Stack : ");
        for (i=0; i<=tos; i++){
            printf("%d ", stack[i]);
        }
    }
    printf("\n");
    return 0;
}

int main(){
    int stack[100], tos = -1, maxsize = 99, ch = 0;
    char c = 'y';

    while (c=='y'){
        printf("MENU --\n1. Push\n2. Pop\n3. Print\n4. Exit\n");
        printf("Enter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            tos = push(stack, tos);
            break;
        
        case 2:
            tos = pop(stack, tos);
            break;
        
        case 3:
            print(stack, tos);
            break;
        
        case 4:
            c == 'n';
            break;

        default:
            printf("Wrong Choice\n");
            break;
        }
    }
}