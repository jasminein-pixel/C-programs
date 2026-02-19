#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    int attempts = 0;
    int maxAttempts = 3;

    // Generate random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess the number between 1 and 100\n");
    printf("You only have 3 attempts!\n\n");

    while (attempts < maxAttempts)
    {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);

        attempts++;

        if (guess == number)
        {
            printf("🎉 Correct! You won in %d attempt(s).\n", attempts);
            return 0;
        }
        else if (guess > number)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Too low!\n");
        }
    }

    printf("\n❌ Game Over! You used all 3 attempts.\n");
    printf("The correct number was: %d\n", number);

    return 0;
}
