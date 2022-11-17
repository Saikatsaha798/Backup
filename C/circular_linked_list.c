#include <stdio.h>
#include <stdlib.h>

struct element
{
    int num;
    struct element *next;
};

struct element* create_circular_linked_list()
{
    int arr[100], n, item;
    char c = 'y';
    struct element *start, *ptr;
    start = (struct element *) malloc(sizeof(struct element));

    ptr = start;
    do
    {
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
            ptr->next = start;
        }

        ptr = ptr->next;
    } while (ptr!=start);

    return start;
}

int print_circular_linked_list(struct element* start)
{
    struct element *ptr = start;
    printf("The Array : ");
    do{
        printf("%d ", ptr->num);
        ptr = ptr->next;
    }while (ptr!=start);
    printf("\n");
    return 0;
}

int  search_circular_linked_list(struct element* start)
{
    struct element *ptr = start;
    int item,cnt = 1;
    printf("Enter the number to search : ");
    scanf("%d", &item );
    do{
        if (ptr->num == item){
           printf("The item %d was found at Node number %d at %p.", item, cnt, ptr);
           return 0;
        }
        ptr = ptr->next;
        cnt++;
    }while (ptr!=start);
    printf("The item %d was not found.", item);
    return 0;
}

struct element* insert_first_node(struct element* start)
{
    int item;
    printf("Enter the item to be entered at First : ");
    scanf("%d", &item);

    struct element *ptr = start, *newnode = (struct element *) malloc(sizeof(struct element));
    newnode->num = item;
    newnode->next = start;
    while (ptr->next != start){
        ptr = ptr->next;
    }
    ptr->next = newnode;
    start = newnode;

    return start;
}

struct element* insert_last_node(struct element* start)
{
    int item;
    printf("Enter the item to be entered at Last : ");
    scanf("%d", &item);

    struct element *ptr = start, *newnode = (struct element *) malloc(sizeof(struct element));
    newnode->num = item;
    newnode->next = start;
    while (ptr->next != start){
        ptr = ptr->next;
    }
    ptr->next = newnode;

    return start;
}

struct element* delete_first_node(struct element* start){
    if (start->next == start){
        printf("The Circular linked list has only one element.\n");
    }
    else{
        struct element *ptr = start;
        while (ptr->next != start){
            ptr = ptr->next;
        }
        struct element *del_ptr = start;
        ptr->next = start->next;
        start = start->next;
        free(del_ptr);
    }
    return start;
}

int delete_last_node(struct element* start){
    if (start->next == start){
        printf("The Circular linked list has only one element.\n");
    }
    else{
        struct element *ptr = start;
        while (ptr->next->next != start){
            ptr = ptr->next;
        }
        struct element *del_ptr = ptr->next;
        ptr->next = start;
        free(del_ptr);
    }
    return 0;
}

int main()
{
    struct element* start = create_circular_linked_list();
    // struct element* start = NULL;
    // print_circular_linked_list(start);
    // search_circular_linked_list(start);
    // start = insert_first_node(start);
    // print_circular_linked_list(start);
    // start = insert_last_node(start);
    // print_circular_linked_list(start);
    start = delete_first_node(start);
    print_circular_linked_list(start);
    delete_last_node(start);
    print_circular_linked_list(start);
    return 0;
}