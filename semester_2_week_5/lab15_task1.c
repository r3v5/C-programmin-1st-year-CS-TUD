/*
Program Description: This program does task 1 from Lab 15 Semester 2

Author: Ian Miller

Date: 27/02/2024
*/


#include <stdio.h>
#include <string.h>

#define NAME_SIZE 25
#define NAMES 5

// Prototypes
void q9();
void q10();


int main()
{
    q9();
    return 0;
}


void q9()
{
    char names[NAMES][NAME_SIZE] = {"Alice", "Bob", "Charlie", "David", "Emma"};

    char user_name[NAME_SIZE];

    // Ask the user for their name
    printf("Please enter your name: ");

    // Read the user's input
    scanf("%s", user_name);

    // Compare user's name with the list of names
    int found = 0;
    for (int i = 0; i < NAMES; i++) {
        if (strcmp(user_name, names[i]) == 0) {
            found = 1;
            break;
        }
    }

    // Display result based on whether the name is found or not
    if (found) {
        printf("Hello, %s! Welcome.\n", user_name);
    } else {
        printf("Name not found.\n");
    }
}


void q10()
{
    
}