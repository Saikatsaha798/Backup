# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{   
    int guess, number, count;
    srand(time(0));
    number = rand()%100;
    count = 0;

    while (guess != number)
    {
        printf("Enter Your Guess : ");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("Increase the Guess !\n");
        }
        else if (guess > number)
        {
            printf("Decrease the Guess !\n");
        }
        count ++;
    }

    printf("You sucessfully guessed the number in %d attempts!", count);
    
    return 0;
}