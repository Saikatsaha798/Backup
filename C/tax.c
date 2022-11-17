# include <stdio.h>

int main()
{
    float salary, tax_deducted;

    printf("Enter your salary :\n");
    scanf("%f", &salary);

    if (salary < 250000)
    {
        tax_deducted = 0;
    }

    else if ((salary >= 250000) && (salary < 500000))
    {
        tax_deducted = 0.05*(salary-250000);
    }

    else if ((salary >= 500000) && (salary < 1000000))
    {
        tax_deducted = 0.2*(salary-500000) + 0.05*(500000-250000);
    }

    else if (salary > 1000000)
    {
        tax_deducted = 0.3*(salary-1000000) + 0.2*(1000000-500000) + 0.05*(500000-250000);
    }

    printf("Your salary is %.2f and tax aplied on it, hence total tax to be deducted is %.2f.\n", salary, tax_deducted);
    return 0;
}