#include <stdio.h>

int* pointers(int *s,int *t, int *sm, int *a)
{

    *a = (*s) + (*t);
    *sm = (*a)/2;
    
    return a;

}

int main()
{
    int n,o,a,sm;
    int* s;
 

    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("Enter the Number 2 : ");
    scanf("%d", &o);
    

    s = pointers(&n,&o,&sm,&a);

    printf("%d\n", a);
    printf("%d\n", sm);
    printf("%d\n", *s);

    return 0;
}