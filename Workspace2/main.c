#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, tries = 0;
    const int MAX_TRIES = 5;

    // Random seed
    srand(time(NULL));

    // Genereer getal tussen 0 en 20
    secretNumber = rand() % 21;

    printf("Guess the Number Game!\n");
    printf("I have chosen a number between 0 and 20.\n");
    printf("You have %d tries to guess it.\n\n", MAX_TRIES);

    while (tries < MAX_TRIES) {
        printf("Enter your guess (0-20): ");
        scanf("%d", &guess);

        // Check invoerbereik
        if (guess < 0 || guess > 20) {
            printf("Invalid input! Please enter a number between 0 and 20.\n");
            continue;
        }

        tries++;

        if (guess == secretNumber) {
            printf("🎉 Congratulations! You guessed the number in %d tries!\n", tries);
            return 0;
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }

        printf("Tries left: %d\n\n", MAX_TRIES - tries);
    }

    printf("Sorry, you lost! The number was %d.\n", secretNumber);
    return 0;
}
