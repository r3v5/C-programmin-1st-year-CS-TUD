/*
Program Description: This program does task from Lab test 2 from Semester 2

Author: Ian Miller

Date: 09/04/2024
*/


#include <stdio.h>
#include <string.h>

#define ATTEMPTS 7
#define SIZE 6


// Prototypes
void print_word(char word[], char guessed[]);


int main() {
    char guess_word[] = "coding";
    char guessed[SIZE] = {0};
    char guessed_chars[26] = {0};
    int attempts = 0;
    int wrong_guesses = 0;
    char user_guess;

    printf("You have %d attempts.\n", ATTEMPTS);

    while (1) {
        // Ask user to enter character
        printf("Enter a character guess: ");
        scanf(" %c", &user_guess);

        // Check if user has aleady guessed a letter
        if (guessed_chars[user_guess - 'a']) {
            printf("You already guessed '%c'. Try another letter.\n", user_guess);
            continue;
        }


        guessed_chars[user_guess - 'a'] = 1;

        // Compare the user input character with the character in guess string
        int word_is_found = 0;
        for (int i = 0; i < SIZE; i++) {
            if (guess_word[i] == user_guess) {
                guessed[i] = 1;
                word_is_found = 1;
            }
        }

        // If user input in guess word, we print information about location. Otherwise, we print message and remaining attempts
        if (word_is_found) {
            printf("Correct guess. It is located here: ");
            print_word(guess_word, guessed);
        } else {
            printf("%c is not in the word. Attempts remaining: %d\n", user_guess, ATTEMPTS - wrong_guesses - 1);
            wrong_guesses++;
        }

        // Check if user guessed the whole word, we stop the input
        if (strcmp(guessed, guess_word) == 0) {
            printf("Congratulations! You've guessed the word: %s\n", guess_word);
            break;
        }

        // If wrong guesses equals to attempts, we also stop the input
        if (wrong_guesses >= ATTEMPTS) {
            printf("Game over, you have run out of attempts. The correct word is: %s\n", guess_word);
            break;
        }
    }

    return 0;
}

void print_word(char word[], char guessed[])
{
     for (int i = 0; i < SIZE; i++) {
        if (guessed[i] == 1)
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}