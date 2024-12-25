#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 20
#define NUM_AVENGERS 6
#define FILENAME "Avengers.txt"

// Function to check if the guessed name matches any Avenger name
int checkGuess(char *guess, char *avengers[]) {
    for (int i = 0; i < NUM_AVENGERS; i++) {
        if (strcmp(guess, avengers[i]) == 0) {
            return 1; // Match found
        }
    }
    return 0; // No match found
}

// Function to append the favorite Avenger name to the end of a file
void appendToFile(char *favoriteAvenger) {
    FILE *file = fopen(FILENAME, "a");
    if (file != NULL) {
        fputs(favoriteAvenger, file);
        fputs("\n", file); // Add a newline character after the name
        fclose(file);
    } else {
        printf("Unable to open file for appending.\n");
    }
}

int main() {
    char *avengers[NUM_AVENGERS] = {"Iron Man", "Captain America", "Black Widow", "Thor", "Hulk", "Hawkeye"};
    char guess[MAX_NAME_LENGTH];

    // Asking the user to guess an Avenger name
    printf("Guess the name of an Avenger: ");
    fgets(guess, MAX_NAME_LENGTH, stdin);
    guess[strcspn(guess, "\n")] = '\0'; // Remove trailing newline character

    // Checking the guessed name
    if (checkGuess(guess, avengers)) {
        printf("Correct\n");
    } else {
        printf("Bad guess - not an Avenger\n");
    }

    // Asking the user to enter their favorite Avenger and appending it to the file
    char favoriteAvenger[MAX_NAME_LENGTH];
    printf("Enter the name of your favorite Avenger: ");
    fgets(favoriteAvenger, MAX_NAME_LENGTH, stdin);
    favoriteAvenger[strcspn(favoriteAvenger, "\n")] = '\0';
    appendToFile(favoriteAvenger);

    return 0;
}
