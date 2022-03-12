#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;

    srand(time(0));

    int randNum = (rand() % MAX) + MIN;

    int guesses = 0;
    int guessedNum;

    printf("welcome to guessing game!\n\n");
    printf("guess the number between %d and %d.\n\n", MIN, MAX);

    while (1)
    {
        printf("\nguess the number: ");
        scanf("%d", &guessedNum);
        guesses++;

        if (guessedNum == randNum)
        {
            printf("\n--------------------------\nyahoo, correct!\n");
            break;
        }
        else if (guessedNum < randNum)
        {
            printf("\nthe number is heigher");
            continue;
        }
        else
        {
            printf("\nthe number is lower");
            continue;
        }
    }

    printf("your guesses: %d\n", guesses);
    printf("the answer: %d", randNum);
    return 0;
}