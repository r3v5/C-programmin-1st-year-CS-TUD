/*
Program Description: This program does task 2 from Lab 16 Semester 2

Author: Ian Miller

Date: 05/02/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

// Prototypes
void compare_strings(char s1[], char s2[]);
void frequency(char s[], char word[]);


int main()
{   
    char input_string[SIZE];
    char hello_world[SIZE] = "Hello world";
    char word[SIZE] = "is";

    printf("Enter a string:\n");
    fgets(input_string, SIZE, stdin);
    // Remove newline character
    input_string[strcspn(input_string, "\n")] = '\0';

    compare_strings(input_string, hello_world);
    frequency(input_string, word);

    return 0;
}


void compare_strings(char s1[], char s2[])
{
    int result;
    result = strcmp(s1, s2);
    if (result == 0)
    {
        printf("Strings %s and %s are equal\n", s1, s2);
    }
    else
    {
        printf("Strings %s and %s are NOT equal\n", s1, s2);
    }
}


void frequency(char s[], char word[])
{
    int count = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        if (strcmp(token, word) == 0)
        {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("The number of occurances of %s is %d\n", word, count);      
}