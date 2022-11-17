#include <stdio.h>
#include <stdlib.h>

struct element{
    int num;
    struct element* next;
};

struct element *push(struct element *stack){
    int num, cnt = 0;
    printf("Enter the Element : ");
    scanf("%d", &num);
    struct element *ptr, *new_node = (struct element *) malloc(sizeof(struct element));
    new_node->num = num;
    new_node->next = NULL;
    if (stack == NULL){
        stack = new_node;
    }
    else{
        ptr = stack;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    printf("Pushed\n");

    return stack;
}

struct element *pop(struct element *stack){
    struct element *ptr, *del_ptr;
    if (stack == NULL){
        printf("UnderFlow\n");
    }
    else if (stack->next == NULL){
        del_ptr = stack;
        free(del_ptr);
        stack = NULL;
        printf("Poped\n");
    }
    else{
        ptr = stack;
        while(ptr->next->next != NULL){
            ptr = ptr->next;
        }
        del_ptr = ptr->next;
        ptr->next = NULL;
        free(del_ptr);
    }
    return stack;
}

int print(struct element *stack){
    struct element *ptr = stack;
    if (stack == NULL){
        printf("UnderFlow");
    }
    else{
        printf("Stack : ");
        while (ptr!=NULL){
            printf("%d ", ptr->num);
            ptr = ptr->next;
        }
    }
    printf("\n");
    return 0;
}

int main(){
    int  ch = 0;
    char c = 'y';
    struct element *stack = NULL;

    while (c=='y'){
        printf("MENU --\n1. Push\n2. Pop\n3. Print\n4. Exit\n");
        printf("Enter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            stack = push(stack);
            break;
        
        case 2:
            stack = pop(stack);
            break;
        
        case 3:
            print(stack);
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