#include <stdio.h>

int main()
{
    int i = 0;

    while (i <= 20)
    {
        if (i >= 10)
            printf("The value of i is : %d\n", i);
        i++;
    }

    printf("\n\n");

    int a = 0, b = 0;

    printf("The value of i++ : %d\n", a++);
    printf("The value of ++i : %d\n", ++b);

    return 0;
}

/* 
++i --> First increment then print 
i++ --> Fist print then increment
*/