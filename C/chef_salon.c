#include <stdio.h>

int main()
{
    int n, m;

    printf("No of customer : \n");
    scanf("%d", &n);

    printf("Time per Customer : \n");
    scanf("%d" ,&m);

    printf("The total time taken : %d", n*m);

    return 0;
}