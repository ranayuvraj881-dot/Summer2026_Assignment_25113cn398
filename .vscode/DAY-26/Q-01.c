//write a program to create number guessing game
#include <stdio.h>
int main() {
    int number, guess, attempts = 0;
    const int MAX_ATTEMPTS = 5;

    // Set the number to be guessed
    number = 42; // You can change this to any number you want

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have %d attempts to guess the correct number between 1 and 100.\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the correct number %d in %d attempts.\n", number, attempts);
            break;
        }
    }

    if (attempts == MAX_ATTEMPTS && guess != number) {
        printf("Sorry! You've used all your attempts. The correct number was %d.\n", number);
    }

    return 0;
}