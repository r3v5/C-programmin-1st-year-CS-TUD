/*
Program Description: This program compares two text files and display any differences between the
files.

Author: Ian Miller

Date: 16/04/2024
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char ch1, ch2;
    int pos = 0, line = 1;

    // Open files
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    // Check if files opened successfully
    if (file1 == NULL || file2 == NULL) {
        printf("Unable to open files.\n");
        exit(EXIT_FAILURE);
    }

    // Compare files character by character
    while (1) {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        // Check for end of files
        if (ch1 == EOF || ch2 == EOF)
            break;

        // Debugging: Print characters being compared
        printf("ch1: %c, ch2: %c\n", ch1, ch2);

        // Check for difference
        if (ch1 != ch2) {
            printf("Difference found at line %d, position %d.\n", line, pos);
            exit(EXIT_SUCCESS);
        }

        // Update line and position counters
        if (ch1 == '\n') {
            line++;
            pos = 0;
        } else {
            pos++;
        }
    }

    // If control reaches here, files are identical
    printf("Files are identical.\n");

    // Close files
    fclose(file1);
    fclose(file2);

    return 0;
}