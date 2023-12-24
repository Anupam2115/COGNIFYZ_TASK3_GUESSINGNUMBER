//Task 3 guessing game
//[NAME -ANUPAM KUMAR VERMA C/C++ INTERNSHIP]

/*Description:
Implement a number guessing game.
Generate a random number and prompt
the user to guess the number. Provide
hints such as "higher" or "lower" to help
the user narrow down the guess.
Continue until the user guesses the
correct number.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declare variables to store the random number, the user's guess, and the number of attempts
    int number, guess, attempts;

    // Initialize the random number generator with the current time as the seed
    srand(time(NULL));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    // Initialize the number of attempts to zero
    attempts = 0;

    // Display a welcome message and instructions
    printf("Welcome to the number guessing game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess what it is?\n");

    // Loop until the user guesses the correct number
    do
    {
        // Prompt the user to enter a guess
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (guess == number)
        {
            // Display a congratulatory message and the number of attempts
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        }
        else if (guess > number)
        {
            // Display a hint that the guess is too high
            printf("Sorry, your guess is too high. Try again.\n");
        }
        else
        {
            // Display a hint that the guess is too low
            printf("Sorry, your guess is too low. Try again.\n");
        }
    } while (guess != number);

    return 0;
}
