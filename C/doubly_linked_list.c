#include <stdio.h>
#include <stdlib.h>

struct element
{
    struct element *prev;
    int num;
    struct element *next;
};

struct element *create_doubly_linked_list()
{
    int arr[100], n, item;
    char c = 'y';
    struct element *start, *ptr, *prevptr = NULL;
    start = (struct element *) malloc(sizeof(struct element));

    ptr = start;
    while (ptr!=NULL)
    {
        ptr->prev = prevptr;
        printf("Enter the Element : ");
        scanf("%d", &item);
        ptr->num = item;

        printf("Add more ? (y/n) : ");
        scanf(" %c", &c);

        if (c == 'y')
        {   
            ptr->next = (struct element *) malloc(sizeof(struct element));
        }

        else
        {
            ptr->next = NULL;
        }

        prevptr = ptr;
        ptr = ptr->next;

    }

    return start;
}

int print_doubly_linked_list(struct element* start)
{
    struct element *ptr = start;
    printf("The Array : ");
    while (ptr->next!=NULL)
    {
        printf("%d", ptr->num);
        printf(" <-> ");
        ptr = ptr->next;
    }
    printf("%d\n", ptr->num);
    return 0;
}

struct element *insert(struct element* start)
{
    struct element *ptr, *new_node;
    int cnt = 1, item, node_no;
    printf("Enter the Node Number where Data to be entered : ");
    scanf("%d", &node_no);
    printf("Enter the Element : ");
    scanf("%d", &item);

    ptr = start;
    while (ptr!=NULL)
    {
        if (node_no == 1)
        {
            new_node = (struct element *) malloc(sizeof(struct element));
            new_node->prev = NULL;
            new_node->num = item;
            new_node->next = start;
            start->prev = new_node;
            start = new_node;
            break;
        }

        else if (cnt+1 == node_no && ptr->next == NULL)
        {
            new_node = (struct element *) malloc(sizeof(struct element));
            new_node->prev = ptr;
            ptr->next = new_node;
            new_node->num = item;
            new_node->next = NULL;
            ptr->next = new_node;
            break;
        }

        else if (cnt == node_no)
        {
            new_node = (struct element *) malloc(sizeof(struct element));
            new_node->prev = ptr->prev;
            ptr->prev->next = new_node;
            new_node->num = item;
            new_node->next = ptr;
            ptr->prev = new_node;
        }

        cnt++;
        ptr = ptr->next;
    }

    return start;
}

struct element *delete(struct element* start)
{
    struct element *ptr = start, *del_ptr;

    int cnt = 1, node_no;

    printf("Enter the Node Number where Data to be entered : ");
    scanf("%d", &node_no);

    if (node_no == 1){
        del_ptr = start;
        start = start->next;
        free(del_ptr);
    }

    else {
        while (ptr->next->next != NULL)
        {   
            if (cnt+1 == node_no){
                break;
            }
            ptr = ptr->next;
        }
        
        del_ptr = ptr->next;
        ptr->next = ptr->next->next;
        free(del_ptr);
    }
    return start;
}

int main()
{
    struct element* start = create_doubly_linked_list();
    print_doubly_linked_list(start);
    // start = insert(start);
    // print_doubly_linked_list(start);
    start = delete(start);
    print_doubly_linked_list(start);

    return 0;
}