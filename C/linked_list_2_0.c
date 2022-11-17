#include <stdio.h>
#include <stdlib.h>

struct element
{
    int num;
    struct element *next;
};

struct element *create_linked_list()
{
    int arr[100], n, item;
    char c = 'y';
    struct element *start, *ptr;
    start = (struct element *) malloc(sizeof(struct element));

    ptr = start;
    while (ptr!=NULL)
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
            ptr->next = NULL;
        }

        ptr = ptr->next;
    }

    return start;
}

int print_linked_list(struct element* start)
{
    struct element *ptr = start;
    printf("The Array : ");
    while (ptr!=NULL)
    {
        printf("%d ", ptr->num);
        ptr = ptr->next;
    }

    printf("\n");
    return 0;
}

int insert_after_node(struct element* start)
{
    struct element *ptr, *new_node;
    int cnt = 1, item, node_no;
    printf("Enter the Node Number after which Data to be entered : ");
    scanf("%d", &node_no);
    printf("Enter the Element : ");
    scanf("%d", &item);

    ptr = start;
    while (ptr!=NULL)
    {
        if (cnt == node_no)
        {
            new_node = (struct element *) malloc(sizeof(struct element));
            new_node->num = item;
            new_node->next = ptr->next;
            ptr->next = new_node;
        }

        cnt++;
        ptr = ptr->next;
    }

    return 0;
}

struct element* insert_before_node(struct element* start)
{
    struct element *ptr, *new_node;
    int cnt = 1, item, node_no;
    printf("Enter the Node Number after which Data to be entered : ");
    scanf("%d", &node_no);
    printf("Enter the Element : ");
    scanf("%d", &item);

    ptr = start;
    while (ptr!=NULL)
    {
        if (node_no == 1)
        {
            new_node = (struct element *) malloc(sizeof(struct element));
            new_node->num = item;
            new_node->next = start;
            start = new_node;
        }

        else if (cnt+1 == node_no)
        {
            new_node = (struct element *) malloc(sizeof(struct element));
            new_node->num = item;
            new_node->next = ptr->next;
            ptr->next = new_node;
        }

        cnt++;
        ptr = ptr->next;
    }

    return start;
}

struct element *delete_first_node(struct element* start)
{
    struct element *ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

int delete_end_node(struct element* start)
{
    struct element *ptr = start, *del_ptr;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    del_ptr = ptr->next;
    ptr->next = NULL;
    free(del_ptr);
    return 0;
}

int create_circular_linked_list(struct element* start)
{
    struct element *ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = start;
    return 0;
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

int main()
{
    struct element* start = create_linked_list();
    // print_linked_list(start);
    // insert_after_node(start);
    // print_linked_list(start);
    // start = insert_before_node(start);
    // print_linked_list(start);
    // start = delete_first_node(start);
    // print_linked_list(start);
    // delete_end_node(start);
    // print_linked_list(start);
    create_circular_linked_list(start);
    print_circular_linked_list(start);
    return 0;
}