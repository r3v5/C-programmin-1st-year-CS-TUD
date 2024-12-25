/*
Program Description: This program does task 3 from Lab 14 Semester 2

Author: Ian Miller

Date: 20/02/2024
*/


#include <stdio.h>

int main() {
    // (i) Initialize each element of the array with a specific character
    char my_word1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("my_word1: %s\n", my_word1);

    // (ii) Initialize the array automatically with a string in double-quotes
    char my_word2[] = "World";
    printf("my_word2: %s\n", my_word2);

    // Initialize each element of the array without including the null character
    char my_word3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("my_word3: %s\n", my_word3);

    // Print out the contents of the array individually
    printf("my_word3 contents:");
    for (int i = 0; i < sizeof(my_word3); i++) {
        printf("%c", my_word3[i]);
    }
    printf("\n");

    // Try printing the null character after the last letter in the string
    printf("Null character after the last letter in my_word3: %c\n", my_word3[5]);

    // Output the contents of the character array as a string in a different way
    printf("my_word3 contents using a loop: ");
    for (int i = 0; my_word3[i] != '\0'; i++) {
        printf("%c", my_word3[i]);
    }
    printf("\n");

    return 0;
}