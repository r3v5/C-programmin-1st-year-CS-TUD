/*
Program Description: This program  remove any blank lines from a text file. Test the program with a
file 

Author: Ian Miller

Date: 16/04/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *tempFile;
    char ch;
    int blankLine = 0;

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Unable to open input file.\n");
        exit(EXIT_FAILURE);
    }

    // Open a temporary file for writing
    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Unable to open temporary file.\n");
        exit(EXIT_FAILURE);
    }

    // Remove blank lines from input file
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch == '\n') {
            if (blankLine == 0) {
                fputc(ch, tempFile); // Write newline character to temporary file
                blankLine = 1; // Indicate that a blank line was encountered
            }
        } else {
            fputc(ch, tempFile); // Write non-newline character to temporary file
            blankLine = 0; // Reset blank line indicator
        }
    }

    // Close both files
    fclose(inputFile);
    fclose(tempFile);

    // Remove the original input file
    if (remove("input.txt") != 0) {
        printf("Error deleting input file.\n");
        exit(EXIT_FAILURE);
    }

    // Rename the temporary file to the original input file
    if (rename("temp.txt", "input.txt") != 0) {
        printf("Error renaming temporary file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Blank lines removed successfully.\n");

    return 0;
}
