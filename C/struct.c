#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[30];
    float salary;
};

void display (struct employee z)
{
    printf("Code = %d\n", z.code);
    printf("Name = %s\n", z.name);
    printf("Salary = %.2f\n", z.salary);
}

int main()
{
    struct employee a,b,c;
    
    a.code = 1;
    strcpy(a.name, "A");
    a.salary = 10.0;
    b.code = 2;
    strcpy(b.name, "B");
    b.salary = 10.0;
    c.code = 3;
    strcpy(c.name, "C");
    c.salary = 10.0;

    display(a);
    display(b);
    display(c);

    
    return 0;

}