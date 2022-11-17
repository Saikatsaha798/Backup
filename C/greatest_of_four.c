# include <stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter the 1st Number:\n");
    scanf("%d", &a);
    
    printf("Enter the 2nd Number:\n");
    scanf("%d", &b);
    
    printf("Enter the 3rd Number:\n");
    scanf("%d", &c);
    
    printf("Enter the 4th Number:\n");
    scanf("%d", &d);
    
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is the greatest number.\n",a);
            }
            else
            {
                printf("%d is the greatest number.\n",d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is the greatest number.\n",c);
            }
            else
            {
                printf("%d is the greatest number.\n",d);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d is the greatest number.\n",b);
            }
            else
            {
                printf("%d is the greatest number.\n",d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is the greatest number.\n",c);
            }
            else
            {
                printf("%d is the greatest number.\n",d);
            }
        }
    }

    return 0;
}