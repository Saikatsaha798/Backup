# include <stdio.h>

int main()
{
    int a;

    printf("Enter a:\n");
    scanf("%d", &a);


    // one liner, if else, ternary
    (a%2==0)? printf("The number is even\n") : printf("The number is odd\n") ;

    return 0;
}