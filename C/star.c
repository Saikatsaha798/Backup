#include <stdio.h>

int main()
{
        int n,i,j,k;
        printf("Enter the Sides : \n");
        scanf("%d", &n);

        n = 2*(n-1)+1;

        for (i=1; i<=n; i+=2)
        {
            for (k=1; k<=((n-i)/2); k++)
            {
                printf(" ");
            }
            for (j=1; j<=i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
}