/*
Program Description: This program does task 2 from Lab 14 Semester 2

Author: Ian Miller

Date: 20/02/2024
*/


#include <stdio.h>
#include <string.h>

#define NAME 20

int main() {
    char name[NAME];
    char spaced_name[100];
    int i;

    // Read in the name
    printf("Enter your name: ");
    fgets(name, NAME, stdin);

    // Add spaces between characters in the name
    int j = 0;
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] != '\n') { // Skip newline character
            spaced_name[j++] = name[i];
            spaced_name[j++] = ' '; // Add a space after each character
        }
    }
    puts(spaced_name);

    return 0;
}
