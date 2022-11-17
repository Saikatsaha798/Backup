#include <stdio.h>

int main()
{
    int i,a,f=1;

    printf("Enter the Number : ");
    scanf("%d", &a);

    for (i=a; i>0; i--)
    {
        f*=i;
    }

    printf("The factorial of %d : %d", a, f);
    return 0;
}