#include <stdio.h>

int fibo(int n, int s1, int s2)
{
    if (n != 0)
    {
        printf("%d\n", s1);
        fibo(n-1, s2, s1+s2);
    }
}

int main()
{
    int n;
    printf("Enter the Number of Elements in Fibonacci Numbers : ");
    scanf("%d", &n);
    fibo(n,0,1);
    return 0;
}