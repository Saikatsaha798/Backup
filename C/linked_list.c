#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int marks;
    struct student *next;
};

struct student *insert(struct student *p, int c)
{
    int t = c,m;
    char n[30];
    struct student *q = (struct student *) malloc(sizeof(struct student)), *r;
    r = p;

    printf("Enter the Name: ");
    scanf(" %s", &q->name);
    printf("Enter the Marks: ");
    scanf("%d", &q->marks);

    while(--t>0)
    {
        p = p->next;
    }

    if (c==0)
    {
        q->next = p;
        r = q;
    }

    else if (p->next==NULL)
    {
        p->next = q;
        q->next = NULL;
    }

    else
    {
        q->next = p->next;
        p->next = q;

    }

    return r;
}

int show_element(struct student *p, int c)
{
    while(c--)
    {
        p = p->next;
    }

    printf("Name : %s\n",p->name);
    printf("Marks : %d\n",p->marks);

    return 0;
}

int show(struct student *p)
{
    struct student *q;
    char n[30],c;
    int m;

    printf("Name\tMarks\n");

    while(p->next!=NULL)
    {
        printf("%s\t%d\n",p->name,p->marks);
        p = p->next;

    }
    printf("%s\t%d\n",p->name,p->marks);

    return 0;
}

int push(struct student *p)
{
    struct student *q;
    char n[30],c;
    int m;

    printf("Enter the data :\n");

    while(1)
    {
        printf("Enter the Name: ");
        scanf(" %s", &p->name);
        printf("Enter the Marks: ");
        scanf("%d", &p->marks);
        printf("Want to add more (y/n): ");
        scanf(" %c", &c);

        if (c == 'y')
        {
            q = (struct student *) malloc(sizeof(struct student));
            p->next = q;
            p = q;

        }

        else
        {
            p->next = NULL;
            break;
        }

    }

    return 0;
}

int main()
{
    struct student *p;
    int i;

    p = (struct student *) malloc(sizeof(struct student));

    push(p);
    show(p);

    printf("Enter the index of the element to show: ");
    scanf("%d", &i);

    show_element(p, i);

    printf("Enter the Index in which to be entered: ");
    scanf("%d", &i);

    p = insert(p, i);

    show(p);

    return 0;
}