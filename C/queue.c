#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node *next;
};

struct node *enqueue(struct node* head){
    struct node *newnode = (struct node *) malloc(sizeof(struct node)), *ptr;
    int  n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    
    newnode->num = n;
    newnode->next = NULL;

    if (head == NULL)
        head = newnode;
    
    else{
        ptr = head;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }

        ptr->next = newnode;
    }
    printf("Data entered !\n");

    return head;
}

struct node *dequeue(struct node *head){
    struct node *temp = head;

    if (head == NULL)
        printf("Empty List !\n");

    else{
        head = head->next;
        free(temp);
        printf("Data deleted !\n");
    }
    return head;
}

int display(struct node *head){
    struct node *ptr=head;
    if (head == NULL)
        printf("Empty List !\n");
    else
        {printf("The Queue : ");
        while (ptr!=NULL){
            printf("%d->", ptr->num);
            ptr = ptr->next;
        }
        printf("NULL\n");}
    return 0;
}

int main(){
    int ch, run = 'y';
    struct node * head = NULL;
    while (run == 'y'){
        printf("MENU : \n"
        "1. Enqueue\n"
        "2. Dequeue\n"
        "3. Display\n"
        "4. Exit\n"
        "Enter your choice : ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                head = enqueue(head);
                break;
            case 2:
                head = dequeue(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                run = 'n';
                printf("Program Exited !\n")
                break;
            default:
                printf("Wrong Input !\n");
        }
    }
}