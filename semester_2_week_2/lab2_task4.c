/*
Program Description: This program does task 4 from Lab 2 Semester 2

Author: Ian Miller

Date: 06/02/2024
*/


#include <stdio.h>

// Function to determine the most commonly used character among three characters
char mostCommonChar(char char1, char char2, char char3) {
    int count[256] = {0}; // Array to store count of each character (ASCII)

    // Increment count for each character
    count[char1]++;
    count[char2]++;
    count[char3]++;

    char mostCommon = char1; // Assume the first character is the most common

    // Check which character has the highest count
    for (int i = 0; i < 256; i++) {
        if (count[i] > count[mostCommon]) {
            mostCommon = i;
        }
    }

    return mostCommon;
}

int main() {
    char char1, char2, char3;

    // Input three characters
    printf("Enter three characters: ");
    scanf(" %c %c %c", &char1, &char2, &char3);

    // Find the most common character
    char mostCommon = mostCommonChar(char1, char2, char3);

    // Display the most common character
    printf("The most common character is: %c\n", mostCommon);

    return 0;
}
