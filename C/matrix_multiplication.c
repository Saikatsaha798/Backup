#include <stdio.h>

int main()
{
    int a[100][100],b[100][100],c[100][100],ra,ca,rb,cb,i,j,k,sum;

    printf("Enter the no of rows in 1st matrix : ");
    scanf("%d", &ra);
    printf("Enter the no of columns in 1st matrix : ");
    scanf("%d", &ca);
    printf("Enter the no of rows in 2nd matrix : ");
    scanf("%d", &rb);
    printf("Enter the no of columns in 2nd matrix : ");
    scanf("%d", &cb);

    if (ca==rb)
    {

        printf("Enter 1st Matrix ...\n");
        for (i=0; i<ra; i++)
        {
            printf("Enter the elements of %d row : ",i);
            for(j=0; j<ca; j++)
            {
                scanf("%d", &a[i][j]);
            } 
        }
        printf("Enter 2nd Matrix ...\n");
        for (i=0; i<rb; i++)
        {
            printf("Enter the elements of %d row : ",i);
            for(j=0; j<cb; j++)
            {
                scanf("%d", &b[i][j]);
            } 
        }

        for (i=0; i<ra; i++)
        {
            for(j=0; j<cb; j++)
            {
                sum = 0;
                for(k=0; k< ca; k++)
                {
                    sum += a[i][k]*b[k][j];
                }
                c[i][j] = sum;
            } 
        }

        printf("The product matrix : \n");
        for (i=0; i<ra; i++)
        {
            for(j=0; j<cb; j++)
            {
                printf("%d ",c[i][j]);
            } 
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication not possible.\n");
    }

    return 0;
}