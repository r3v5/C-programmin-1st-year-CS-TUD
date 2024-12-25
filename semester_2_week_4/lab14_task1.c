#include <stdio.h>
#include <string.h>

#define MAX_WRONG_GUESSES 7
#define WORD_LENGTH 6

void displayWord(char word[], char guessed[]) {
    for (int i = 0; i < WORD_LENGTH; i++) {
        if (guessed[i] == 1)
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int main() {
    char word[] = "coding";
    char guessed[WORD_LENGTH] = {0};
    char guessedChars[26] = {0};
    int attempts = 0;
    int wrongGuesses = 0;
    char guess;

    printf("Welcome to the Word Guessing Game!\n");
    printf("Try to guess the word. It has %d letters.\n", WORD_LENGTH);
    printf("You have %d attempts.\n", MAX_WRONG_GUESSES);

    while (1) {
        displayWord(word, guessed);

        printf("Enter a character guess: ");
        scanf(" %c", &guess);

        if (guessedChars[guess - 'a']) {
            printf("You already guessed '%c'. Try another letter.\n", guess);
            continue;
        }

        guessedChars[guess - 'a'] = 1;

        int found = 0;
        for (int i = 0; i < WORD_LENGTH; i++) {
            if (word[i] == guess) {
                guessed[i] = 1;
                found = 1;
            }
        }

        if (found) {
            printf("Correct guess. It is located here: ");
            displayWord(word, guessed);
        } else {
            printf("%c is not in the word. Attempts remaining: %d\n", guess, MAX_WRONG_GUESSES - wrongGuesses - 1);
            wrongGuesses++;
        }

        if (memcmp(guessed, word, WORD_LENGTH) == 0) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            break;
        }

        if (wrongGuesses >= MAX_WRONG_GUESSES) {
            printf("Game over, you have run out of attempts. The correct word is: %s\n", word);
            break;
        }
    }

    return 0;
}
