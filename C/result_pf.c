# include <stdio.h>

int main()
{
    int physics, chemistry, mathematics, total;

    printf("Enter the marks in Mathematics:\n");
    scanf("%d", &mathematics);

    printf("Enter the marks in Physics:\n");
    scanf("%d", &physics);

    printf("Enter the marks in chemistry:\n");
    scanf("%d", &chemistry);

    total = physics + chemistry + physics;

    if ((physics >= 33) && (chemistry  >= 33) && (mathematics >= 33) && (total/3 >= 40))
    {
        printf("Congratulations, you passed the exam!\n");
    }

    else
    {
        printf("Sorry, but you couldn't pass the exam\n");
    }


    return 0;
}